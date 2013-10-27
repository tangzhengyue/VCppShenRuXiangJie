// 01TextView.cpp : implementation of the CMy01TextView class
//

#include "stdafx.h"
#include "01Text.h"

#include "01TextDoc.h"
#include "01TextView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy01TextView

IMPLEMENT_DYNCREATE(CMy01TextView, CView)

BEGIN_MESSAGE_MAP(CMy01TextView, CView)
	//{{AFX_MSG_MAP(CMy01TextView)
	ON_WM_CREATE()
	ON_WM_LBUTTONDOWN()
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy01TextView construction/destruction

CMy01TextView::CMy01TextView()
{
	// TODO: add construction code here
    m_strOutput.Empty();
    m_ptOutputStart = 0;
}

CMy01TextView::~CMy01TextView()
{
}

BOOL CMy01TextView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy01TextView drawing

void CMy01TextView::OnDraw(CDC* pDC)
{
	CMy01TextDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy01TextView printing

BOOL CMy01TextView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy01TextView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy01TextView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy01TextView diagnostics

#ifdef _DEBUG
void CMy01TextView::AssertValid() const
{
	CView::AssertValid();
}

void CMy01TextView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy01TextDoc* CMy01TextView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy01TextDoc)));
	return (CMy01TextDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy01TextView message handlers

int CMy01TextView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
    // 不能定义局部变量，否则光标什么都不显示
    // CBitmap bitmap;
    m_bitmap.LoadBitmap(IDB_BITMAP1);
    CreateCaret(&m_bitmap);
    ShowCaret();
	
	return 0;
}

void CMy01TextView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
    SetCaretPos(point);
    m_strOutput.Empty();
    m_ptOutputStart = point;
	
	CView::OnLButtonDown(nFlags, point);
}

void CMy01TextView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
    CClientDC dc(this);
    TEXTMETRIC tm;
    dc.GetTextMetrics(&tm);

    if(0x0d == nChar)
    // 换行符
    {
        m_strOutput.Empty();
        m_ptOutputStart.y += tm.tmHeight;
    }
    else if(0x08 == nChar)
    // 退格键
    {
        if(!m_strOutput.IsEmpty())
        {
            COLORREF oldClr = dc.SetTextColor(dc.GetBkColor());
            dc.TextOut(m_ptOutputStart.x, m_ptOutputStart.y, m_strOutput);
            m_strOutput = m_strOutput.Left(m_strOutput.GetLength() - 1);
            dc.SetTextColor(oldClr);
        }
    }
    else
    {
        m_strOutput += nChar;
    }

    dc.TextOut(m_ptOutputStart.x, m_ptOutputStart.y, m_strOutput);

    CSize sz = dc.GetTextExtent(m_strOutput);
    CPoint pt(m_ptOutputStart.x + sz.cx, m_ptOutputStart.y);
    SetCaretPos(pt);
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}
