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
		dimension_t dimensions;
		units		unit;

		inline unit_t x() const {
			return unit_t({ position.x, unit });
		}

		unit_t y() const {
			return unit_t({ position.y, unit });
		}

		unit_t width() const {
			return unit_t({ dimensions.width, unit });
		}

		unit_t height() const {
			return unit_t({ dimensions.height, unit });
		}

	};

}
