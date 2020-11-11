/*****************************************************************//**
 * @file   types.h
 * @brief  
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include <utility>

#include "wx/wx.h"

namespace fig {

	/**
	 * colour options
	 */
	enum class colour_mode_t { RGB, grayscale };

	/**
	 * permits the global adjustment of f.p. accuracy vs speed
	 */
	using float_t = double;

	using string_t = wxString;

	using font_list_t = std::vector<string_t>;

	using ratio_t = std::pair<double, double>;

	struct point_t {
		double x;
		double y;
	};

	struct dimension_t {
		double width;
		double height;
	};

}
