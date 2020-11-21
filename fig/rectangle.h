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

	};

}
