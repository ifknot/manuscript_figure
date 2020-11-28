#pragma once

#include "wx/wx.h"

#include "figure.h"

namespace fig {

    class wx_figure : public wxPanel {

    public:

        wx_figure(wxFrame* parent, metrics_t& metrics);

        void paintEvent(wxPaintEvent& evt);

        void paintNow();

        DECLARE_EVENT_TABLE()

    private:

        fig::figure f;

        void init_layout();

        bool use_gcdc{ true };

    };

}
