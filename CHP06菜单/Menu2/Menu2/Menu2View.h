
// Menu2View.h : CMenu2View ��Ľӿ�
//

#pragma once


class CMenu2View : public CView
{
protected: // �������л�����
	CMenu2View();
	DECLARE_DYNCREATE(CMenu2View)

// ����
public:
	CMenu2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMenu2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Menu2View.cpp �еĵ��԰汾
inline CMenu2Doc* CMenu2View::GetDocument() const
   { return reinterpret_cast<CMenu2Doc*>(m_pDocument); }
#endif

