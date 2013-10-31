// TestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Mybole.h"
#include "TestDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestDlg dialog


CTestDlg::CTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTestDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTestDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTestDlg, CDialog)
	//{{AFX_MSG_MAP(CTestDlg)
	ON_BN_CLICKED(IDC_BTN_ADD, OnBtnAdd)
	ON_BN_CLICKED(IDC_STC_NUM1, OnStcNum1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestDlg message handlers

// 父窗口销毁时才会调这个
void CTestDlg::PostNcDestroy() 
{
	// TODO: Add your specialized code here and/or call the base class
    delete this;
	
	CDialog::PostNcDestroy();
}

void CTestDlg::OnOK() 
{
	// TODO: Add extra validation here

	DestroyWindow();
	//CDialog::OnOK();
}

void CTestDlg::OnBtnAdd() 
{
	// TODO: Add your control notification handler code here
    int num1, num2, num3;
    CString str1, str2;

    GetDlgItem(IDC_EDIT1)->GetWindowText(str1);
    GetDlgItem(IDC_EDIT2)->GetWindowText(str2);

    num1 = _ttoi(str1);
    num2 = _ttoi(str2);

    num3 = num1 + num2;

    CString str3;
    str3.Format("%d", num3);

    GetDlgItem(IDC_EDIT3)->SetWindowText(str3);
}

void CTestDlg::OnStcNum1() 
{
	// TODO: Add your control notification handler code here
    
}
