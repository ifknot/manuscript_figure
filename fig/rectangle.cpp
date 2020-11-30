#include "rectangle.h"

namespace fig {

    rect_t rect_t::shrink(const rect_t& margin) {
		rect_t r(*this);
		r.position.x += margin.position.x;
		r.position.y += margin.position.y;
		r.dimension.width -= margin.dimension.width + margin.position.x;
		r.dimension.height -= margin.dimension.height + margin.position.y;
		return r;
    }

}
