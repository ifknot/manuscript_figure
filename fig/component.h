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

		component(const metrics_t& metrics) :
			metrics(metrics),
			bounding_box(metrics.bounding_box) {
		}

		component(const component* parent) :
			metrics(parent->metrics),
			bounding_box(parent->bounding_box) 
		{}

		virtual void render_traverse(GDC_type& gdc) = 0;

		inline rect_t bounds() const {
			return bounding_box;
		}

	protected:

		const metrics_t& metrics;

		rect_t bounding_box;

		size_t z{ 0 };

	protected:

		virtual void shrink_bounds(const rect_t& margin) = 0;

		virtual rect_t draw_text(GDC_type& gdc, const point_t p, const string_t& s, const style_text_t& text) = 0;

		virtual void draw_line(GDC_type& gdc, const point_t a, const point_t b, const style_line_t& line) = 0;

		virtual void draw_rect(GDC_type& gdc, const point_t p, const dimension_t d, const style_rect_t& rect) = 0;

		virtual void draw_circle(GDC_type& gdc, const point_t o, const double r, const style_circle_t style) = 0;


		

	};

}
