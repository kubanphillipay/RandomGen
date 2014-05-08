///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 26 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __MYFORMBASE_H__
#define __MYFORMBASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class wxSpinCtrlDouble;

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/button.h>
#include <wx/gbsizer.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameBase
///////////////////////////////////////////////////////////////////////////////
class MyFrameBase : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;
		wxStatusBar* m_statusBar1;
	
	public:
		
		MyFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MyFrameBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyPanelBase
///////////////////////////////////////////////////////////////////////////////
class MyPanelBase : public wxPanel 
{
	private:
	
	protected:
		wxTextCtrl* inputTextCtrl;
		wxStaticText* m_staticText2;
		wxSpinCtrlDouble* minSpinCtrl;
		wxStaticText* m_staticText1;
		wxSpinCtrlDouble* maxSpinCtrl;
		wxButton* clearButton;
		wxButton* generateButton;
		wxTextCtrl* outputTextCtrl;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onClear( wxCommandEvent& event ) { event.Skip(); }
		virtual void onGenerate( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MyPanelBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL ); 
		~MyPanelBase();
	
};

#endif //__MYFORMBASE_H__
