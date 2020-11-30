#pragma once

#include "wx\wx.h"

#if wxUSE_GRAPHICS_CONTEXT
	#include <wx/dcgraph.h>
#endif

#include "wx/wx.h"

#include "component.h"

namespace fig {

	class wx_component : public component<wxDC> {

	public:

		using component<wxDC>::component;

	protected:

		wxColour as_wxColour(colour_t colour);

		wxPenStyle as_wxPenStyle(linetypes linetype);

		wxBrushStyle as_wxBrushStyle(hatchtypes hatchtype);

		int as_wxFONTFLAG(style_text_t::face_t face);

		virtual void shrink_bounds(const rect_t& margin) override final;

		virtual rect_t draw_text(GDC_type& gdc, const point_t p, const string_t& s, const style_text_t& text) override final;

		virtual void draw_line(GDC_type& gdc, const point_t a, const point_t b, const style_line_t& line) override final;

		virtual void draw_rect(GDC_type& gdc, const point_t p, const dimension_t d, const style_rect_t& rect) override final;

		virtual void draw_circle(wxDC& gdc, const point_t o, const double r, const style_circle_t style) override final;

	};

}