#include "test_window.h"

test_window::test_window(fig::metrics_t& metrics) :
	wxFrame(nullptr, wxID_ANY, "test_wx"),
	metrics(metrics)
{
	panel = new fig::wx_panel(this, metrics);
	Fit();
	Centre();
}
