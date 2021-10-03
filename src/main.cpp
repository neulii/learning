#include "main.hpp"
#include "MainWindow.hpp"

IMPLEMENT_APP(Learning)

bool Learning::OnInit()
{
    MainWindow* window = new MainWindow(wxT("super"));
    window->Show(true);

    return true;
}




