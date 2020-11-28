#include "wx_panel.h"

#if wxUSE_GRAPHICS_CONTEXT
#include <wx/dcgraph.h>
#endif

#include <cmath>

namespace fig {


	BEGIN_EVENT_TABLE(wx_panel, wxPanel)

	EVT_PAINT(wx_panel::paintEvent)

	END_EVENT_TABLE()

	wx_panel::wx_panel(wxFrame* parent, metrics_t& metrics) :
		wxPanel(
			parent, 
			wxID_ANY, 
			wxDefaultPosition, 
			{
				(int)std::round(metrics.dpi * metrics.bounding_box.width().inches()),
				(int)std::round(metrics.dpi * metrics.bounding_box.height().inches())
			}
		),
		figure(metrics)
	{
		init_layout();
	}

	void wx_panel::paintEvent(wxPaintEvent& evt) {
		wxPaintDC pdc(this);

#if wxUSE_GRAPHICS_CONTEXT
		wxGCDC gdc(pdc);
		wxDC& dc = use_gcdc ? (wxDC&)gdc : (wxDC&)pdc;
		figure.render(dc);
#else
		wxDC& dc = pdc;
		figure.render(dc);
#endif
	}

	void wx_panel::paintNow() {
		wxClientDC dc(this);
		figure.render(dc);
	}

	void fig::wx_panel::init_layout() {

	}

}