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
    CString str("VC++ 深入编程");
    pDC->TextOut(50, 50, str);

    // 输出字符串资源里的字符串
    str.LoadString(IDS_STRINGVC);
    pDC->TextOut(100, 100, str);

    // 创建路径层，将字符串围起来
    CSize sz = pDC->GetTextExtent(str);
    pDC->BeginPath();
    pDC->Rectangle(CRect(100, 100, 100 + sz.cx, 100 + sz.cy));
    pDC->EndPath();

    pDC->SelectClipPath(RGN_DIFF);
    // 接下来在视类中的绘图操作都不会影响到路径层了。

    for(int i = 0; i < 300; i += 10)
    {
        pDC->MoveTo(0, i);
        pDC->LineTo(300, i);
        
        pDC->MoveTo(i, 0);
        pDC->LineTo(i, 300);
    }
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
