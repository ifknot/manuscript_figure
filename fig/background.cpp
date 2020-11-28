#include "background.h"

namespace fig {



	void background::render_traverse(GDC_type& gdc) {

		draw_circle(gdc, { 0.5, 0.5 }, 0.5, style);

	}

}