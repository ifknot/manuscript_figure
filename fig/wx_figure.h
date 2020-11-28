#pragma once

#include "wx/wx.h"

#include "tree.h"

namespace fig {

    class wx_figure : public wxPanel {

    public:

        wx_figure(wxFrame* parent, metrics_t& metrics);

        void paintEvent(wxPaintEvent& evt);

        void paintNow();

        DECLARE_EVENT_TABLE()

    private:

        fig::tree root;

        void init_layout();

        bool use_gcdc{ true };

    };

}
