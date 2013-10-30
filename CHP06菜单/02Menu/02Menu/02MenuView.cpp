
// 02MenuView.cpp : CMy02MenuView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
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

// CMy02MenuView ����/����

CMy02MenuView::CMy02MenuView()
	: m_nIndex(-1)
	, m_strInput(_T(""))
{
	// TODO: �ڴ˴���ӹ������

}

CMy02MenuView::~CMy02MenuView()
{
}

BOOL CMy02MenuView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy02MenuView ����

void CMy02MenuView::OnDraw(CDC* /*pDC*/)
{
	CMy02MenuDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy02MenuView ��ӡ

BOOL CMy02MenuView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy02MenuView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy02MenuView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy02MenuView ���

#ifdef _DEBUG
void CMy02MenuView::AssertValid() const
{
	CView::AssertValid();
}

void CMy02MenuView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy02MenuDoc* CMy02MenuView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy02MenuDoc)));
	return (CMy02MenuDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy02MenuView ��Ϣ�������


void CMy02MenuView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 
	if(0x0d == nChar)  // �س�
	{
		if(++m_nIndex == 0)
		{
			m_menu.CreatePopupMenu();
			GetParent()->GetMenu()->AppendMenu(MF_POPUP, (UINT_PTR)m_menu.m_hMenu, _T("PhoneBook"));
		
			// �ػ���������ʾ������
			GetParent()->DrawMenuBar();
		}

		if(!m_strInput.IsEmpty())
		{
			m_menu.AppendMenu(MF_STRING, IDM_PHONE0 + m_asInput.GetSize(), m_strInput.Left(m_strInput.Find(' ')));
			m_asInput.Add(m_strInput);
		}
		m_strInput.Empty();
		Invalidate(TRUE);  // �ػ棬����
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
