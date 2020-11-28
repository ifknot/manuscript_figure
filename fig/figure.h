/*****************************************************************//**
 * @file   panel.h
 * @brief  base abstract panel class
 * To be extended by concrete GUI library e.g. wxWidgets
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#define USE_WX_WIDGETS

#include "metrics.h"
#include "composite.h"

#ifdef USE_WX_WIDGETS

#include "wx_component.h"

using composite_t = fig::composite<fig::wx_component>;

#endif 

namespace fig {

	class figure : public composite_t {



	public:

		figure(const metrics_t& metrics) :
			composite_t(this),
			metrics(metrics),
			bounds(metrics.bounding_box)
		{}

	private:

		const metrics_t&	metrics;
		rect_t				bounds;

	};

}
