#include "test_window.h"

test_window::test_window() :
	wxFrame(nullptr, wxID_ANY, "test_wx"),
	metrics(fig::metrics_t(76,{0.0, 0.0, 1.0, 1.0, fig::units::inch}))
{
	panel = new fig::wx_panel(this, metrics);
	Fit();
	Centre();
}
