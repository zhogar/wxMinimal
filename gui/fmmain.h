/***************************************************************
 * Name:      fmmain.h
 * Purpose:   declaration private main frame class
 **************************************************************/

#ifndef _FMMAIN_H
#define _FMMAIN_H

// define a new frame type: this is going to be our main frame
class FmMain : public wxFrame
{
	// public methods
	public:
		// ctor(s)
		FmMain(const wxString& title);
		virtual ~FmMain();
		
	// public data
	public:
	
	// protected data
	protected:
	
	// message map functions
	protected:
		// event handlers (these functions should _not_ be virtual)
		void OnQuit(wxCommandEvent& event);
		void OnAbout(wxCommandEvent& event);
		
	private:
		// any class wishing to process wxWidgets events must use this macro
		wxDECLARE_EVENT_TABLE();
};

// IDs for the controls and the menu commands
enum
{
	// menu items
	Minimal_Quit = wxID_EXIT,
	
	// it is important for the id corresponding to the "About" command to have
	// this standard value as otherwise it won't be handled properly under Mac
	// (where it is special and put into the "Apple" menu)
	Minimal_About = wxID_ABOUT
};

// event tables and other macros for wxWidgets
// ----------------------------------------------------------------------------
// the event tables connect the wxWidgets events with the functions (event
// handlers) which process them. It can be also done at run-time, but for the
// simple menu events like this the static method is much simpler.
wxBEGIN_EVENT_TABLE(FmMain, wxFrame)
	EVT_MENU(Minimal_Quit, FmMain::OnQuit)
	EVT_MENU(Minimal_About, FmMain::OnAbout)
wxEND_EVENT_TABLE()

#endif // _FMMAIN_H
