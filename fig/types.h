/*****************************************************************//**
 * @file   types.h
 * @brief  
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include <string>
#include <vector>

namespace fig {

	/**
	 * colour options
	 */
	enum class colour_mode_t { RGB, grayscale };

	/**
	 * permits the global adjustment of f.p. accuracy vs speed
	 */
	using float_t = double;

	using string_t = std::string;	// in case you prefer a different string type

	using font_list_t = std::vector<string_t>;

	using ratio_t = std::pair<float_t, float_t>;

	struct point_t {
		float_t x;
		float_t y;
	};

	struct dimension_t {
		float_t width;
		float_t height;
	};

}
