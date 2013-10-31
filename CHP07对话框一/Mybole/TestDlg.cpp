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
    if(!m_btn.m_hWnd)
    {
        m_btn.Create("微信", BS_DEFPUSHBUTTON | WS_VISIBLE | WS_CHILD, CRect(0, 0, 100, 100), this, 123);
    }
    else
    {
        m_btn.DestroyWindow();
    }
}

void CTestDlg::OnStcNum1() 
{
	// TODO: Add your control notification handler code here
    CString str;
	if(GetDlgItem(IDC_STC_NUM1)->GetWindowText(str), str == "Number1:")
    {
        GetDlgItem(IDC_STC_NUM1)->SetWindowText("数值1:");
    }
    else
    {
        GetDlgItem(IDC_STC_NUM1)->SetWindowText("Number1:");
    }
}
