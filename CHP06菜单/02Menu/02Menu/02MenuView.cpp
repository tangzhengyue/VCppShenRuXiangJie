
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


// CMy02MenuView

IMPLEMENT_DYNCREATE(CMy02MenuView, CView)

BEGIN_MESSAGE_MAP(CMy02MenuView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy02MenuView ����/����

CMy02MenuView::CMy02MenuView()
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
