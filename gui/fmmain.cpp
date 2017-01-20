/***************************************************************
 * Name:      fmmain.cpp
 * Purpose:   implementation the main frame class
 **************************************************************/
 
// precompilation
#include "../wxpch.h"

// main header
#include "fmmain.h"

// main frame constructor
FmMain::FmMain(const wxString& title)
		: wxFrame(NULL, wxID_ANY, title)
{
	// set the frame icon
	//SetIcon(wxICON(sample));
	
	#if wxUSE_MENUS
		// create a menu bar
		wxMenu *fileMenu = new wxMenu;
		fileMenu->Append(Minimal_Quit, "E&xit\tAlt-X", "Quit this program");
		
		// the "About" item should be in the help menu
		wxMenu *helpMenu = new wxMenu;
		helpMenu->Append(Minimal_About, "&About\tF1", "Show about dialog");
		
		// now append the freshly created menu to the menu bar...
		wxMenuBar *menuBar = new wxMenuBar();
		menuBar->Append(fileMenu, "&File");
		menuBar->Append(helpMenu, "&Help");
		
		// ... and attach this menu bar to the frame
		SetMenuBar(menuBar);
	#endif // wxUSE_MENUS
	
	#if wxUSE_STATUSBAR
		// create a status bar just for fun (by default with 1 pane only)
		CreateStatusBar(2);
		SetStatusText("Welcome to wxWidgets!");
	#endif // wxUSE_STATUSBAR
}

FmMain::~FmMain()
{
	//
}

// event handlers

void FmMain::OnQuit(wxCommandEvent& WXUNUSED(event))
{
	// true is to force the frame to close
	Close(true);
}

void FmMain::OnAbout(wxCommandEvent& WXUNUSED(event))
{
	wxMessageBox(wxString::Format
	(
		"Welcome to %s!\n"
		"\n"
		"This is the minimal wxWidgets sample\n"
		"running under %s.",
		wxVERSION_STRING,
		wxGetOsDescription()
	),
		"About wxSymbol editor",
		wxOK | wxICON_INFORMATION,
		this);
}
