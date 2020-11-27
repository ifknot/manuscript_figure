#pragma once

#include "wx/wx.h"

#include "fig/metrics.h"
#include "fig/wx_panel.h"

class test_window : public wxFrame {

public:

	test_window();

	~test_window() = default;

private:

	fig::metrics_t metrics;

	fig::wx_panel* panel;

};