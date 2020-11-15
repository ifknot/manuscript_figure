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

namespace fig {

	class panel {

	public:

	private:

		const metrics_t& metrics;

		composite	figure;

	};

}
