#include <wx/wx.h>

class MainWindow : public wxFrame
{

    public:
    
    MainWindow(const wxString& title);
    void OnPaint(wxPaintEvent& event);

};