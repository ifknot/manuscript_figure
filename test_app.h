#pragma once

#include "wx/wx.h"

#include <memory>

#include "test_window.h"

class test_app : public wxApp {

public:

	test_app();

	~test_app() = default;

	virtual bool OnInit() override final;

private:

	std::unique_ptr<test_window> f;

};
