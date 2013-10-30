
// 02MenuView.cpp : CMy02MenuView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "02Menu.h"
#endif

#include "02MenuDoc.h"
#include "02MenuView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define IDM_PHONE0	32771


// CMy02MenuView

IMPLEMENT_DYNCREATE(CMy02MenuView, CView)

BEGIN_MESSAGE_MAP(CMy02MenuView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(IDM_PHONE0, &CMy02MenuView::OnPhone0)
	ON_COMMAND(IDM_PHONE0 + 1, &CMy02MenuView::OnPhone1)
	ON_COMMAND(IDM_PHONE0 + 2, &CMy02MenuView::OnPhone2)
	ON_COMMAND(IDM_PHONE0 + 3, &CMy02MenuView::OnPhone3)
	ON_COMMAND(IDM_PHONE0 + 4, &CMy02MenuView::OnPhone4)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy02MenuView 构造/析构

CMy02MenuView::CMy02MenuView()
	: m_nIndex(-1)
	, m_strInput(_T(""))
{
	// TODO: 在此处添加构造代码

}

CMy02MenuView::~CMy02MenuView()
{
}

BOOL CMy02MenuView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy02MenuView 绘制

void CMy02MenuView::OnDraw(CDC* /*pDC*/)
{
	CMy02MenuDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy02MenuView 打印

BOOL CMy02MenuView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy02MenuView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy02MenuView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy02MenuView 诊断

#ifdef _DEBUG
void CMy02MenuView::AssertValid() const
{
	CView::AssertValid();
}

void CMy02MenuView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy02MenuDoc* CMy02MenuView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy02MenuDoc)));
	return (CMy02MenuDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy02MenuView 消息处理程序


void CMy02MenuView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 
	if(0x0d == nChar)  // 回车
	{
		if(++m_nIndex == 0)
		{
			m_menu.CreatePopupMenu();
			GetParent()->GetMenu()->AppendMenu(MF_POPUP, (UINT_PTR)m_menu.m_hMenu, _T("PhoneBook"));
		
			// 重画，否则显示不出来
			GetParent()->DrawMenuBar();
		}

		if(!m_strInput.IsEmpty())
		{
			m_menu.AppendMenu(MF_STRING, IDM_PHONE0 + m_asInput.GetSize(), m_strInput.Left(m_strInput.Find(' ')));
			m_asInput.Add(m_strInput);
		}
		m_strInput.Empty();
		Invalidate(TRUE);  // 重绘，擦除
	}

	else
	{
		CClientDC dc(this);

		TCHAR ch = nChar;
		m_strInput += ch;

		dc.TextOut(0, 0, m_strInput);
	}

	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMy02MenuView::OnPhone0()
{
	CClientDC dc(this);
	dc.TextOut(0, 0, m_asInput.GetAt(0));
}

void CMy02MenuView::OnPhone1()
{
	CClientDC dc(this);
	dc.TextOut(0, 0, m_asInput.GetAt(1));
}

void CMy02MenuView::OnPhone2()
{
	CClientDC dc(this);
	dc.TextOut(0, 0, m_asInput.GetAt(2));
}

void CMy02MenuView::OnPhone3()
{
	CClientDC dc(this);
	dc.TextOut(0, 0, m_asInput.GetAt(3));
}

void CMy02MenuView::OnPhone4()
{
	CClientDC dc(this);
	dc.TextOut(0, 0, m_asInput.GetAt(4));
}
