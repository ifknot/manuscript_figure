/*****************************************************************//**
 * @file   panel.h
 * @brief  base abstract panel class
 * To be extended by concrete GUI library e.g. wxWidgets
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include "metrics.h"
#include "composite.h"

#define USE_WX_WIDGETS

#ifdef USE_WX_WIDGETS

#include "wx\wx.h"

#if wxUSE_GRAPHICS_CONTEXT
	#include <wx/dcgraph.h>
#endif

#include "wx_composite.h"

using composite_t = fig::wx_composite_t;

#endif 

namespace fig {

	class panel : public composite_t {



	public:

		panel(const metrics_t& metrics, rect_t bounds) :
			composite_t(this),
			metrics(metrics)
		{}

	private:

		const metrics_t&	metrics;
		rect_t				bounds;

	};

}
