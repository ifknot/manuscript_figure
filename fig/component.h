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

namespace fig {

	template<typename T>
	class component {

	public:

		typedef T GDC_type;

		component(component* parent) :
			metrics(parent->metrics),
			bounding_box(parent->bounding_box) 
		{}

		virtual void render(GDC_type& gdc) = 0;

		inline rectangle bounds() const {
			return bounding_box;
		}

	private:

		const metrics_t& metrics;

		rect_t bounding_box;

	};

}
