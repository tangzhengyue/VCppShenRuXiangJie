
// Menu2View.cpp : CMenu2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Menu2.h"
#endif

#include "Menu2Doc.h"
#include "Menu2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMenu2View

IMPLEMENT_DYNCREATE(CMenu2View, CView)

BEGIN_MESSAGE_MAP(CMenu2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMenu2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMenu2View 构造/析构

CMenu2View::CMenu2View()
{
	// TODO: 在此处添加构造代码

}

CMenu2View::~CMenu2View()
{
}

BOOL CMenu2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMenu2View 绘制

void CMenu2View::OnDraw(CDC* /*pDC*/)
{
	CMenu2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMenu2View 打印


void CMenu2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMenu2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMenu2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMenu2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CMenu2View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMenu2View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMenu2View 诊断

#ifdef _DEBUG
void CMenu2View::AssertValid() const
{
	CView::AssertValid();
}

void CMenu2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMenu2Doc* CMenu2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMenu2Doc)));
	return (CMenu2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMenu2View 消息处理程序
