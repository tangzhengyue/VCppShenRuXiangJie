// 01Test.h : main header file for the 01TEST application
//

#if !defined(AFX_01TEST_H__35E98743_3EC6_41CE_AEAA_2C8367E40EED__INCLUDED_)
#define AFX_01TEST_H__35E98743_3EC6_41CE_AEAA_2C8367E40EED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy01TestApp:
// See 01Test.cpp for the implementation of this class
//

class CMy01TestApp : public CWinApp
{
public:
	CMy01TestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01TestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy01TestApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01TEST_H__35E98743_3EC6_41CE_AEAA_2C8367E40EED__INCLUDED_)
