// 01Text.h : main header file for the 01TEXT application
//

#if !defined(AFX_01TEXT_H__0F39E920_18C5_427C_A9E5_041BA715B24E__INCLUDED_)
#define AFX_01TEXT_H__0F39E920_18C5_427C_A9E5_041BA715B24E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy01TextApp:
// See 01Text.cpp for the implementation of this class
//

class CMy01TextApp : public CWinApp
{
public:
	CMy01TextApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01TextApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy01TextApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01TEXT_H__0F39E920_18C5_427C_A9E5_041BA715B24E__INCLUDED_)
