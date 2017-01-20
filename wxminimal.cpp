/***************************************************************
 * Name:      wxminimal.cpp
 * Purpose:   implementation the application class
 **************************************************************/
 
// precompilation
#include "wxpch.h"

// custom headers
#include "gui/fmmain.h"

// main header
#include "wxminimal.h"
 
 // 'Main program' equivalent: the program execution "starts" here
bool WxMinimal::OnInit()
{
    // call the base class initialization method, currently it only parses a
    // few common command-line options but it could be do more in the future
    if ( !wxApp::OnInit() )
        return false;

    // create the main application window
    FmMain *fmmain = new FmMain("Minimal wxWidgets App");

    // and show it (the frames, unlike simple controls, are not shown when
    // created initially)
    fmmain->Show(true);
	
	SetTopWindow(fmmain);

    // success: wxApp::OnRun() will be called which will enter the main message
    // loop and the application will run. If we returned false here, the
    // application would exit immediately.
    return true;
}
