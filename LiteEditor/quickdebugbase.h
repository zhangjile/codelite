///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __quickdebugbase__
#define __quickdebugbase__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/combobox.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class QuickDebugBase
///////////////////////////////////////////////////////////////////////////////
class QuickDebugBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxComboBox* m_ExeFilepath;
		wxButton* m_buttonBrowseExe;
		wxStaticText* m_staticText5;
		wxComboBox* m_WD;
		wxButton* m_buttonBrowseWD;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textCtrlArgs;
		wxPanel* m_panel1;
		wxStaticText* m_staticText3;
		wxChoice* m_choiceDebuggers;
		wxPanel* m_panel2;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrlCmds;
		wxStaticLine* m_staticline1;
		wxButton* m_buttonDebug;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnButtonBrowseExe( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonBrowseWD( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonDebug( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonCancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		QuickDebugBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Quick Debug"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~QuickDebugBase();
	
};

#endif //__quickdebugbase__
