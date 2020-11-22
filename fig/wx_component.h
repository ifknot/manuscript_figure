#pragma once

#include "wx\wx.h"

#if wxUSE_GRAPHICS_CONTEXT
	#include <wx/dcgraph.h>
#endif

#include "component.h"

namespace fig {

	class wx_component : public component<wxDC> {

	public:

		using component<wxDC>::component;

	protected:

		wxColour as_wxColour(colour_t colour);

		wxPenStyle as_wxPenStyle(linetypes linetype);

		int as_wxFONTFLAG(style_text_t::face_t face);

		virtual void draw_circle(wxDC& gdc, const point_t o, const double r, const style_circle_t style) override final;

	};

}