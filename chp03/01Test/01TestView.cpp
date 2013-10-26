// 01TestView.cpp : implementation of the CMy01TestView class
//

#include "stdafx.h"
#include "01Test.h"

#include "01TestDoc.h"
#include "01TestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy01TestView

IMPLEMENT_DYNCREATE(CMy01TestView, CView)

BEGIN_MESSAGE_MAP(CMy01TestView, CView)
	//{{AFX_MSG_MAP(CMy01TestView)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy01TestView construction/destruction

CMy01TestView::CMy01TestView()
{
	// TODO: add construction code here

}

CMy01TestView::~CMy01TestView()
{
}

BOOL CMy01TestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy01TestView drawing

void CMy01TestView::OnDraw(CDC* pDC)
{
	CMy01TestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy01TestView printing

BOOL CMy01TestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy01TestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy01TestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy01TestView diagnostics

#ifdef _DEBUG
void CMy01TestView::AssertValid() const
{
	CView::AssertValid();
}

void CMy01TestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy01TestDoc* CMy01TestView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy01TestDoc)));
	return (CMy01TestDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy01TestView message handlers

int CMy01TestView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
    m_btn.Create("°´Å¥", WS_CHILD | BS_DEFPUSHBUTTON, CRect(0, 0, 100, 100), this, 123);
    m_btn.ShowWindow(SW_SHOWNORMAL);
	
	return 0;
}
