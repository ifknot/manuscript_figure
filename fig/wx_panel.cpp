#include "wx_panel.h"

#if wxUSE_GRAPHICS_CONTEXT
#include <wx/dcgraph.h>
#endif

namespace fig {


	BEGIN_EVENT_TABLE(wx_panel, wxPanel)

	EVT_PAINT(wx_panel::paintEvent)

	END_EVENT_TABLE()

	wx_panel::wx_panel(wxFrame* parent, metrics_t& metrics) :
		wxPanel(parent, wxID_ANY, wxDefaultPosition, {200,400}),
		figure(metrics)
	{
		init_layout();
	}

	void wx_panel::paintEvent(wxPaintEvent& evt) {
		wxPaintDC pdc(this);

#if wxUSE_GRAPHICS_CONTEXT
		wxGCDC gdc(pdc);
		wxDC& dc = use_gcdc ? (wxDC&)gdc : (wxDC&)pdc;
		//plot.render(dc);
#else
		wxDC& dc = pdc;
		//plot.render(dc);
#endif
	}

	void wx_panel::paintNow() {
		wxClientDC dc(this);
		//render(dc);
	}

	void fig::wx_panel::init_layout() {

	}

}