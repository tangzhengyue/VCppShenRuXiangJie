
// 02Menu.h : 02Menu Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy02MenuApp:
// �йش����ʵ�֣������ 02Menu.cpp
//

class CMy02MenuApp : public CWinApp
{
public:
	CMy02MenuApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy02MenuApp theApp;
