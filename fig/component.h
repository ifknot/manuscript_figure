/*****************************************************************//**
 * @file   component.h
 * @brief  The component interface of the composite pattern
 * The figure framework specifically uses orientated bounding boxes (OBB).
 * Ones that, unlike axis aligned bouncing boxes (AABB), are unique to themselves as a 
 * local coordinate system, range [0.0, 1.0] for both x & y with the origin at top left.
 * Whilst AABBs are used traditionally, being simpler to test for intersection than OBBs, 
 * a manuscript graphic figure composed of sub-components benefits greatly from the OBB approach.
 *
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include "metrics.h"
#include "rectangle.h"
#include "styles.h"

namespace fig {

	template<typename T>
	class component {

	public:

		typedef T GDC_type;

		component(metrics_t& metrics) :
			metrics(metrics),
			bounding_box(metrics.bounding_box) {
		}

		component(const component* parent) :
			metrics(parent->metrics),
			bounding_box(parent->bounding_box) 
		{}

		virtual void render(GDC_type& gdc) = 0;

		inline rect_t bounds() const {
			return bounding_box;
		}

	protected:

		const metrics_t& metrics;

		//void shrink_bounds(const rect_t& margin);

		//rect_t draw_text(wxDC& gdc, const point_t p, const wxString& s, const element_text_t& text);

		//void draw_line(wxDC& gdc, const point_t a, const point_t b, const element_line_t& line);

		//void draw_rect(wxDC& gdc, const point_t p, const dimension_t d, const element_rect_t& rect);

		virtual void draw_circle(GDC_type& gdc, const point_t o, const double r, const style_circle_t style) = 0;


	private:

		rect_t bounding_box;

		size_t z{ 0 };

	};

}
