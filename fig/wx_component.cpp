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

	void wx_component::draw_rect(GDC_type& gdc, const point_t p, const dimension_t d, const style_rect_t& style) {
		assert((p.x >= 0) && (p.x <= 1));
		assert((p.y >= 0) && (p.y <= 1));
		//calculate the width & height and x, y origin of the display bounding box
		auto w = metrics.dpi * bounds().width().inches();//as_dimension(bounding_box).width;
		auto h = metrics.dpi * bounds().height().inches();// as_dimension(bounding_box).height;
		auto x = metrics.dpi * bounds().x().inches();// as_position(bounding_box).x;
		auto y = metrics.dpi * bounds().y().inches();// as_position(bounding_box).y;

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
			std::round((p.x + d.width) * w),
			std::round((p.y + d.height) * h)
		);
	}


	void wx_component::draw_circle(wxDC& gdc, const point_t o, const double r, const style_circle_t style) {
		assert((o.x >= 0) && (o.x <= 1));
		assert((o.y >= 0) && (o.y <= 1));
		//calculate the width & height and x, y origin of the display bounding box
		auto w = metrics.dpi * bounds().width().inches();
		auto h = metrics.dpi * bounds().height().inches();
		auto x = metrics.dpi * bounds().x().inches();
		auto y = metrics.dpi * bounds().y().inches();
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
