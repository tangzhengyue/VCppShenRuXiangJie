// 01Draw.h : main header file for the 01DRAW application
//

#if !defined(AFX_01DRAW_H__A7C5E577_E5D8_4165_853B_B39831BB8B16__INCLUDED_)
#define AFX_01DRAW_H__A7C5E577_E5D8_4165_853B_B39831BB8B16__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawApp:
// See 01Draw.cpp for the implementation of this class
//

class CMy01DrawApp : public CWinApp
{
public:
	CMy01DrawApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01DrawApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy01DrawApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01DRAW_H__A7C5E577_E5D8_4165_853B_B39831BB8B16__INCLUDED_)
