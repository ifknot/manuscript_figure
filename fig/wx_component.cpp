#include "wx_component.h"

#include <cassert>
#include <cmath>

namespace fig {

	wxColour wx_component::as_wxColour(colour_t colour) {
		return wxColour(colour.red, colour.green, colour.blue, colour.alpha);
	}

	wxPenStyle wx_component::as_wxPenStyle(linetypes linetype) {
		switch (linetype) {
		case linetypes::blank:
			return wxPENSTYLE_TRANSPARENT;
		case linetypes::solid:
			return wxPENSTYLE_SOLID;
		case linetypes::dashed:
			return wxPENSTYLE_SHORT_DASH;
		case linetypes::dotted:
			return wxPENSTYLE_DOT;
		case linetypes::dotdash:
			return wxPENSTYLE_DOT_DASH;
			break;
		case linetypes::longdash:
			return wxPENSTYLE_LONG_DASH;
			/*	TODO: translate twodash
					case linetype::twodash:
						return wxPENSTYLE_USER_DASH;
			*/
		default:
			return wxPENSTYLE_SOLID;
		}
	}

	wxBrushStyle wx_component::as_wxBrushStyle(hatchtypes hatchtype) {
		switch (hatchtype) {
		case hatchtypes::solid:
			return wxBRUSHSTYLE_SOLID;
		case hatchtypes::transparent:
			return wxBRUSHSTYLE_TRANSPARENT;
		case hatchtypes::cross:
			return wxBRUSHSTYLE_CROSS_HATCH;
		case hatchtypes::horizontal:
			return wxBRUSHSTYLE_HORIZONTAL_HATCH;
		case hatchtypes::vertical:
			return wxBRUSHSTYLE_VERTICAL_HATCH;
		case hatchtypes::diagonal_backwards:
			return wxBRUSHSTYLE_BDIAGONAL_HATCH;
		case hatchtypes::diagonal_forwards:
			return wxBRUSHSTYLE_FDIAGONAL_HATCH;
		case hatchtypes::diagonal_cross:
			return wxBRUSHSTYLE_CROSSDIAG_HATCH;
		default:
			return wxBRUSHSTYLE_INVALID;
		}
	}

	int wx_component::as_wxFONTFLAG(style_text_t::face_t face) {
		switch (face) { // plain, italic, bold, bold_italic};
		case style_text_t::face_t::plain:
			return wxFONTFLAG_DEFAULT;
		case style_text_t::face_t::italic:
			return wxFONTFLAG_ITALIC;
		case style_text_t::face_t::bold:
			return wxFONTFLAG_BOLD;
		case style_text_t::face_t::bold_italic:
			return wxFONTFLAG_BOLD | wxFONTFLAG_ITALIC;
		default:
			return wxFONTFLAG_DEFAULT;
		}
	}

	rect_t wx_component::draw_text(GDC_type& gdc, const point_t p, const string_t& s, const style_text_t& style) {
		assert((p.x >= 0) && (p.x <= 1));
		assert((p.y >= 0) && (p.y <= 1));
		// convert bounds to screen coords
		auto dpi{ (float_t)metrics.dpi };
		auto w = dpi * bounds().width().inches();
		auto h = dpi * bounds().height().inches();
		auto x = dpi * bounds().x().inches();
		auto y = dpi * bounds().y().inches();
		// create fontinfo
		wxFontInfo info(std::round(style.size * metrics.font_scale));
		info.FaceName(style.family);
		info.AllFlags(as_wxFONTFLAG(style.face));
		info.AntiAliased(true);
		// setup font from fontinfo
		wxFont font(info);
		gdc.SetFont(font);
		// create bitmap same size as text dimensions 
		wxCoord text_width, text_height;
		gdc.GetTextExtent(s, &text_width, &text_height);
		wxBitmap bitmap(text_width, text_height, wxBITMAP_SCREEN_DEPTH);
		bitmap.UseAlpha();
		// create a memory device context
		wxMemoryDC mdc;
		mdc.SelectObject(bitmap);
		mdc.SetBackground(as_wxColour(style.background));
		mdc.Clear();
		mdc.SetFont(font);
		mdc.SetTextForeground(as_wxColour(style.colour));
		mdc.DrawText(s, 0, 0);
		mdc.SelectObject(wxNullBitmap);

		auto text_image = bitmap.ConvertToImage();
		text_image.SetAlpha(nullptr);
		auto rotated_image = text_image.Rotate(
			radians_per_degree * style.angle,
			{ 0, 0 }
		);

		auto tw{ (float_t)rotated_image.GetWidth() };
		auto th{ (float_t)rotated_image.GetHeight() };
		auto tx = std::round(x + (p.x * w) - (tw * style.hjust));
		auto ty = std::round(y + (p.y * h) - (th * style.vjust));
		// adjust if text image strays out of bounds
		if (ty + th >= y + h) {
			ty -= (ty + th) - (y + h);
		}
		if (tx + tw >= x + w) {
			tx -= (tx + tw) - (x + w);
		}
		if (tx < x) {
			tx = x;
		}
		gdc.DrawBitmap(rotated_image, tx, ty);
		// if had used drawRotatedText then would not be able to retrieve the bounds
		return rect_t{ p.x, p.y, tw / w, th / h, units::inch };
	}

	void wx_component::draw_line(GDC_type& gdc, const point_t a, const point_t b, const style_line_t& style) {
		assert((a.x >= 0) && (a.x <= 1));
		assert((a.y >= 0) && (a.y <= 1));
		assert((b.x >= 0) && (b.x <= 1));
		assert((b.y >= 0) && (b.y <= 1));
		//calculate the width & height and x, y origin of the display bounding box
		auto dpi{ (float_t)metrics.dpi };
		auto w = dpi * bounds().width().inches();
		auto h = dpi * bounds().height().inches();
		auto x = dpi * bounds().x().inches();
		auto y = dpi * bounds().y().inches();

		gdc.SetPen(
			wxPen(
				as_wxColour(style.colour),
				std::round(metrics.pixels_per_pt * style.size),
				as_wxPenStyle(style.linetype)
			)
		);
		gdc.DrawLine(
			std::round(x + (a.x * w)),
			std::round(y + (a.y * h)),
			std::round(x + (b.x * w)),
			std::round(y + (b.y * h))
		);
	}

	void wx_component::draw_rect(GDC_type& gdc, const point_t p, const dimension_t d, const style_rect_t& style) {
		assert((p.x >= 0) && (p.x <= 1));
		assert((p.y >= 0) && (p.y <= 1));
		//calculate the width & height and x, y origin of the display bounding box
		auto dpi{ (float_t)metrics.dpi };
		auto w = dpi * bounds().width().inches();
		auto h = dpi * bounds().height().inches();
		auto x = dpi * bounds().x().inches();
		auto y = dpi * bounds().y().inches();

		gdc.SetPen(
			wxPen(
				as_wxColour(style.colour),
				std::round(metrics.pixels_per_pt * style.size),
				as_wxPenStyle(style.linetype)
			)
		);
		gdc.SetBrush(
			wxBrush(
				as_wxColour(style.fill),
				as_wxBrushStyle(style.hatchtype)
			)
		);
		gdc.DrawRectangle(
			std::round(x + (p.x * w)),
			std::round(y + (p.y * h)),
			std::round(d.width * w),
			std::round(d.height * h)
		);
	}


	void wx_component::draw_circle(wxDC& gdc, const point_t o, const double r, const style_circle_t style) {
		assert((o.x >= 0) && (o.x <= 1));
		assert((o.y >= 0) && (o.y <= 1));
		//calculate the width & height and x, y origin of the display bounding box
		auto dpi{ (float_t)metrics.dpi };
		auto w = dpi * bounds().width().inches();
		auto h = dpi * bounds().height().inches();
		auto x = dpi * bounds().x().inches();
		auto y = dpi * bounds().y().inches();
		auto rr = r + r;
		gdc.SetPen(
			wxPen(
				as_wxColour(style.colour),
				std::round(metrics.pixels_per_pt * style.size),
				as_wxPenStyle(style.linetype)
			)
		);
		gdc.SetBrush(
			wxBrush(
				as_wxColour(style.fill),
				as_wxBrushStyle(style.hatchtype)
			)
		);
		gdc.DrawEllipse(
			std::round(x + ((o.x - r) * w)),
			std::round(y + ((o.y - r) * h)),
			std::round(rr * w),
			std::round(rr * h)
		);
	}

}
