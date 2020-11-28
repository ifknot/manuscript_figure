#pragma once

#include "leaf.h"

namespace fig {

	class background : public leaf {

	public:

		using leaf::leaf;

		virtual void render_traverse(GDC_type& gdc) override final;

	private:

		style_circle_t style;

	};

}
