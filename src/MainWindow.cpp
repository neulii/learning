#include "MainWindow.hpp"

const int MY_BUTTON_ID = 1;
const int RENDER_TIMER_ID = 2;

MainWindow::MainWindow(const wxString& title)
    : wxFrame(NULL, wxID_ANY,  title, wxDefaultPosition,wxSize(270,220))

{

    myPanel = new wxPanel(this, wxID_ANY);
    myButton = new wxButton(myPanel, MY_BUTTON_ID, "super sachde",wxPoint(100,100),wxSize(80,30));
    
    myPanel->Bind(wxEVT_MOTION, &MainWindow::onMotion, this);
    renderTimer = new wxTimer(this, RENDER_TIMER_ID);
    renderTimer->Start(500);

    this->Centre();

}


void MainWindow::clickedOnMyButton(wxCommandEvent& event)
{
    wxLogDebug("clicked");
 
    //myPanel->SetBackgroundColour(*wxRED);
    wxClientDC dc(myPanel);
    wxPen pen(*wxGREEN, 4);
    dc.SetPen(pen);

    dc.DrawLine(0,0,100,100);


    //Refresh();
   // Close();

}

void MainWindow::onMotion(wxMouseEvent& event)
{

    if (event.Dragging())
    {
        wxClientDC dc(myPanel);
        wxPen pen(*wxBLUE,3); // red pen of width 1
        dc.SetPen(pen);
        dc.DrawPoint(event.GetPosition());
        dc.SetPen(wxNullPen);
    }


    wxString xPosString;
    wxString yPosString;

    xPosString << event.GetX();
    yPosString << event.GetY();


    wxString postionString = _("x: ")+ _(xPosString)+ _("y: " ) + _(yPosString);

    wxLogDebug(postionString);

}

void MainWindow::render(wxTimerEvent& event)
{
    poppedEventsFromTimer++;
    wxString eventsString;
    eventsString << poppedEventsFromTimer;

   // wxLogDebug(eventsString);
}


BEGIN_EVENT_TABLE(MainWindow,wxFrame)
    EVT_BUTTON(MY_BUTTON_ID, MainWindow::clickedOnMyButton)
    EVT_TIMER(RENDER_TIMER_ID,MainWindow::render)
END_EVENT_TABLE()




