#pragma once

#include "wx/wx.h"

#include <memory>

#include "fig\metrics.h"
#include "test_window.h"

class test_app : public wxApp {

public:

	test_app();

	~test_app() = default;

	virtual bool OnInit() override final;

private:

	std::unique_ptr<test_window> f;

	/**
	 * 150 dpi figure 5.2 x 5.2 inches.
	 */
	//fig::metrics_t metrics{ 150, { 0, 0, 5.2, 5.2, fig::units::inch } };

	/**
	 * 76 dpi figure 10 x 10 cm.
	 */
	fig::metrics_t metrics{ 76, { 0, 0, 10, 10, fig::units::cm } };

};
