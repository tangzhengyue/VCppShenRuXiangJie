// 01DrawView.cpp : implementation of the CMy01DrawView class
//

#include "stdafx.h"
#include "01Draw.h"

#include "01DrawDoc.h"
#include "01DrawView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawView

IMPLEMENT_DYNCREATE(CMy01DrawView, CView)

BEGIN_MESSAGE_MAP(CMy01DrawView, CView)
	//{{AFX_MSG_MAP(CMy01DrawView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawView construction/destruction

CMy01DrawView::CMy01DrawView()
{
	// TODO: add construction code here
    m_ptOrigin = 0;
}

CMy01DrawView::~CMy01DrawView()
{
}

BOOL CMy01DrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawView drawing

void CMy01DrawView::OnDraw(CDC* pDC)
{
	CMy01DrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawView printing

BOOL CMy01DrawView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy01DrawView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy01DrawView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawView diagnostics

#ifdef _DEBUG
void CMy01DrawView::AssertValid() const
{
	CView::AssertValid();
}

void CMy01DrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy01DrawDoc* CMy01DrawView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy01DrawDoc)));
	return (CMy01DrawDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawView message handlers

void CMy01DrawView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
    m_ptOrigin = point;
	
	CView::OnLButtonDown(nFlags, point);
}

void CMy01DrawView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
// 	// ����SDKȫ�ֺ���ʵ�ֻ��߹���
//     // ����豸������
//     HDC hDC = ::GetDC(m_hWnd);
// 
//     // �ƶ����������
//     MoveToEx(hDC, m_ptOrigin.x, m_ptOrigin.y, NULL);
// 
//     // ���ߵ����̧���λ��
//     LineTo(hDC, point.x, point.y);
// 
//     // �ͷ��豸������
//     ::ReleaseDC(m_hWnd, hDC);

//     // ����MFC��CDC��ʵ�ֻ��߹���
//     CDC *pDC = GetDC();
//     pDC->MoveTo(m_ptOrigin);
//     pDC->LineTo(point);
//     ReleaseDC(pDC);

    // ����MFC��CClientDCʵ�ֻ��߹���
    // �ô�������Ҫ����GetDC��ReleaseDC
    CClientDC dc(GetParent());
    dc.MoveTo(m_ptOrigin);
    dc.LineTo(point);

	CView::OnLButtonUp(nFlags, point);
}
