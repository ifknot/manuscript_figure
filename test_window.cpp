#include "test_window.h"

test_window::test_window(fig::metrics_t& metrics) :
	wxFrame(nullptr, wxID_ANY, "test_wx"),
	metrics(metrics)
{
	wx_fig = new fig::wx_figure(this, metrics);
	Fit();
	Centre();
}
