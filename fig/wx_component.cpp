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
				wxBRUSHSTYLE_SOLID
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
