#include "background.h"

namespace fig {



	void background::render_traverse(GDC_type& gdc) {

		draw_circle(gdc, { 0.5, 0.5 }, 0.5, {});
		draw_circle(gdc, { 0.4, 0.4 }, 0.3, {red, yellow, 10, linetypes::dotdash});

	}

}