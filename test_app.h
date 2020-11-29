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
	 * 95 dpi (LG monitor) figure 10 x 10 cm 
	 */
	fig::metrics_t metrics{ 95, { 0, 0, 10, 10, fig::units::cm } };

	/**
	 * 142 dpi (Lenovo p52) figure 10 x 10 cm
	 */
	//fig::metrics_t metrics{ 142, { 0, 0, 10, 10, fig::units::cm } };

	/**
	 * 150 dpi figure 5.2 x 5.2 inches.
	 */
	//fig::metrics_t metrics{ 150, { 0, 0, 5.2, 5.2, fig::units::inch } };

	/**
	 * 300 dpi (PLOS-1) figure 5.2 x 5.2 inches.
	 */
	//fig::metrics_t metrics{ 150, { 0, 0, 5.2, 5.2, fig::units::inch } };

	/**
	 * 600 dpi (JCI) figure 5.2 x 5.2 inches.
	 */
	//fig::metrics_t metrics{ 600, { 0, 0, 5.2, 5.2, fig::units::inch } };
	
	/**
	 * 1200 dpi (Cambridge) figure 3 x 3 inches.
	 */
	//fig::metrics_t metrics{ 1200, { 0, 0, 3, 3, fig::units::inch } };
};
