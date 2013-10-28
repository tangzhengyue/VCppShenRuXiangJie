// 01MenuView.cpp : implementation of the CMy01MenuView class
//

#include "stdafx.h"
#include "01Menu.h"

#include "01MenuDoc.h"
#include "01MenuView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuView

IMPLEMENT_DYNCREATE(CMy01MenuView, CView)

BEGIN_MESSAGE_MAP(CMy01MenuView, CView)
	//{{AFX_MSG_MAP(CMy01MenuView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuView construction/destruction

CMy01MenuView::CMy01MenuView()
{
	// TODO: add construction code here

}

CMy01MenuView::~CMy01MenuView()
{
}

BOOL CMy01MenuView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuView drawing

void CMy01MenuView::OnDraw(CDC* pDC)
{
	CMy01MenuDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuView printing

BOOL CMy01MenuView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy01MenuView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy01MenuView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuView diagnostics

#ifdef _DEBUG
void CMy01MenuView::AssertValid() const
{
	CView::AssertValid();
}

void CMy01MenuView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy01MenuDoc* CMy01MenuView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy01MenuDoc)));
	return (CMy01MenuDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuView message handlers
