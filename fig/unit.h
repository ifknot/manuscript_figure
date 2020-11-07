/*****************************************************************//**
 * @file   unit.h
 * @brief  A unit of measurement
 * i.e. a definite magnitude of a quantity, defined and adopted by convention or by law
 * because journal formatting guidelines will use a variety of units of measurement it is
 * necessary to be able to express measurements in a variety of units and convert between them.
 * @note this framework's internal unit is the inch - to speed conversion to screen coordinates using the d.p.i.
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include "constants.h"

namespace fig {

	enum class units { pt, cm, inch, line };

	struct unit_t {

		float_t	scalar;
		units	unit;

		/**
		 * convert the scalar units to inches
		 * @return f.p. scalar as inches
		 * @throw invalid_argument
		 */
		float_t inches();

	};


}
