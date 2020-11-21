#pragma once

#include "wx\wx.h"

#if wxUSE_GRAPHICS_CONTEXT
	#include <wx/dcgraph.h>
#endif

#include "component.h"

namespace fig {

	class wx_component : public component<wxDC> {


	};

}