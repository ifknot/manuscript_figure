#include "background.h"

namespace fig {



	void background::render_traverse(GDC_type& gdc) {

		shrink_bounds({ .1,.1,.1,.1 });

		draw_circle(gdc, { 0.5, 0.5 }, 0.5, {});
		draw_circle(gdc, { 0.4, 0.4 }, 0.3, {red, yellow, 10, linetypes::dotdash, hatchtypes::cross});

		draw_rect(gdc, { 0, 0 }, { .1, .1 }, { black, {0,255,0,200}, 2, linetypes::solid, hatchtypes::diagonal_cross });
		draw_rect(gdc, { 0.5, 0.5 }, { .1, .1 }, { black, {0,255,0,200}, 2, linetypes::solid, hatchtypes::diagonal_cross });
		draw_rect(gdc, { 0.75, 0.75 }, { .1, .1 }, { black, {0,255,0,200}, 2, linetypes::solid, hatchtypes::diagonal_cross });

		draw_line(gdc, { 0,0 }, { 1,1 }, {});

		auto r = draw_text(gdc, { 0.0,0.0 }, "HELLO", {});
		draw_rect(gdc, r.position, r.dimension, { transparent, red });
		r = draw_text(gdc, { 0.5,0.5 }, "HELLO", {});
		draw_rect(gdc, r.position, r.dimension, { transparent, red });
		r = draw_text(gdc, { 1.0,1.0 }, "HELLO", {});
		draw_rect(gdc, r.position, r.dimension, { transparent, red });
	}

}