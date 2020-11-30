/*****************************************************************//**
 * @file   rectangle.h
 * @brief  
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include "types.h"
#include "unit.h"

namespace fig {

	struct rect_t {

		point_t		position;
		dimension_t dimension;
		units		unit;

		rect_t shrink(const rect_t& margin);

		inline unit_t x() const {
			return unit_t({ position.x, unit });
		}

		inline unit_t y() const {
			return unit_t({ position.y, unit });
		}

		inline unit_t width() const {
			return unit_t({ dimension.width, unit });
		}

		inline unit_t height() const {
			return unit_t({ dimension.height, unit });
		}

	};

}
