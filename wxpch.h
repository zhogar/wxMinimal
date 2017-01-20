/***************************************************************
 * Name:      wxpch.h
 * Purpose:   header to create pre-compiled header (PCH)
 **************************************************************/
 
#ifndef _WXPCH_H
#define _WXPCH_H

 // For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

// for all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWidgets headers)
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#ifdef WX_PRECOMP
    // put here all your rarely-changing header files
#endif // WX_PRECOMP

#endif // _WXPCH_H
