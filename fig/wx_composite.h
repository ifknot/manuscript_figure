#pragma once

#include "composite.h"
#include "wx_component.h"

namespace fig {

	class wx_composite : public composite<wx_component> {

	public:

		using composite<wx_component>::composite;

	};

}