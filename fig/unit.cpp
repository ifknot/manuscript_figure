#include "unit.h"

#include <stdexcept>

namespace fig {

	float_t unit_t::inches() {
		switch (unit) {
		case units::pt:
			return scalar / pt_per_inch;
		case units::cm:
			return scalar / cm_per_inch;
		case units::line:
			return  (scalar / pt_per_inch);
		case units::inch:
			return scalar;
		default:
			throw std::invalid_argument("unrecognized unit");
		}
	}

}