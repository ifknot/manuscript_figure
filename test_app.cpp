#include "test_app.h"

wxIMPLEMENT_APP(test_app);

test_app::test_app() {
}

bool test_app::OnInit() {

	if (!wxApp::OnInit()) {
		return false;
	}
	setlocale(LC_NUMERIC, "English");

	auto win = new test_window(metrics);

	f.reset(win);
	f->Show();

	return true;

}