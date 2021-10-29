#include <wx/wx.h>

class MainWindow : public wxFrame
{
    private:

    wxPanel* myPanel;
    wxButton* myButton;
    wxTimer* renderTimer;
    int poppedEventsFromTimer = 0;

    public:
       
    MainWindow(const wxString& title);
    void clickedOnMyButton(wxCommandEvent& event);
    void onMotion(wxMouseEvent& event);
    void render(wxTimerEvent& event);

    DECLARE_EVENT_TABLE()
};
