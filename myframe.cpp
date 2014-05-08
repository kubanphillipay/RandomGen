#include "myframe.h"
#include "mypanel.h"

MyFrame::MyFrame( wxWindow* parent )
:
MyFrameBase( parent )
{

}



MyFrame::MyFrame(wxString title, wxPoint pos, wxSize size) :
MyFrameBase(nullptr, wxID_ANY , title , pos , size ){
	MyPanel* panel = new MyPanel(this);

}