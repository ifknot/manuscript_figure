#include "wx_figure.h"

#if wxUSE_GRAPHICS_CONTEXT
#include <wx/dcgraph.h>
#endif

#include <cmath>

#include "background.h"

namespace fig {


	BEGIN_EVENT_TABLE(wx_figure, wxPanel)

	EVT_PAINT(wx_figure::paintEvent)

	END_EVENT_TABLE()

	wx_figure::wx_figure(wxFrame* parent, metrics_t& metrics) :
		wxPanel(
			parent, 
			wxID_ANY, 
			wxDefaultPosition, 
			{
				(int)std::round(metrics.dpi * metrics.bounding_box.width().inches()),
				(int)std::round(metrics.dpi * metrics.bounding_box.height().inches())
			}
		),
		root(metrics)
	{
		init_layout();
	}

	void wx_figure::paintEvent(wxPaintEvent& evt) {
		wxPaintDC pdc(this);

#if wxUSE_GRAPHICS_CONTEXT
		wxGCDC gdc(pdc);
		wxDC& dc = use_gcdc ? (wxDC&)gdc : (wxDC&)pdc;
		root.render_traverse(dc);
#else
		wxDC& dc = pdc;
		root.render_traverse(dc);
#endif
	}

	void wx_figure::paintNow() {
		wxClientDC dc(this);
		root.render_traverse(dc);
	}

	void wx_figure::init_layout() {
		root.add(new fig::background(&root));
	}

}