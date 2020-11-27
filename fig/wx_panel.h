#pragma once

#include "wx/wx.h"

#include "wx_composite.h"

namespace fig {

    class wx_panel : public wxPanel {

    public:

        wx_panel(wxFrame* parent, metrics_t& metrics);

        void paintEvent(wxPaintEvent& evt);

        void paintNow();

        DECLARE_EVENT_TABLE()

    private:

        fig::wx_composite figure;

        void init_layout();

        bool use_gcdc{ true };

    };

}
