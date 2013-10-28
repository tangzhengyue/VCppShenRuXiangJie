// 01Menu.h : main header file for the 01MENU application
//

#if !defined(AFX_01MENU_H__F371012F_6215_493E_8871_7A4EDA4DF21D__INCLUDED_)
#define AFX_01MENU_H__F371012F_6215_493E_8871_7A4EDA4DF21D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuApp:
// See 01Menu.cpp for the implementation of this class
//

class CMy01MenuApp : public CWinApp
{
public:
	CMy01MenuApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01MenuApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy01MenuApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01MENU_H__F371012F_6215_493E_8871_7A4EDA4DF21D__INCLUDED_)
