/***************************************************************
 * Name:      wxminimal.h
 * Purpose:   declaration private application class
 **************************************************************/

#ifndef _WXMINIMAL_H
#define _WXMINIMAL_H

#include <wx/app.h>

// Define a new application type, each program should derive a class from wxApp
class WxMinimal : public wxApp
{
	// public methods
	public:
	
	// public data
	public:
	
	// protected methods
	protected:
		// override base class virtuals
		// ----------------------------
		// this one is called on application startup and is a good place for the app
		// initialization (doing it here and not in the ctor allows to have an error
		// return: if OnInit() returns false, the application terminates)
		virtual bool OnInit();
};

// Create a new application object: this macro will allow
// wxWidgets to create the application object during program
// execution (it's better than using a static object for many
// reasons) and also implements the accessor function
// wxGetApp() which will return the reference of the right type
// (i.e. MyApp and not wxApp)
wxIMPLEMENT_APP(WxMinimal);

#endif // _WXMINIMAL_H
