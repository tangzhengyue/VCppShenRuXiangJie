
// 02MenuView.h : CMy02MenuView ��Ľӿ�
//

#pragma once
#include "afxwin.h"


class CMy02MenuView : public CView
{
protected: // �������л�����
	CMy02MenuView();
	DECLARE_DYNCREATE(CMy02MenuView)

// ����
public:
	CMy02MenuDoc* GetDocument() const;

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
	virtual ~CMy02MenuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
private:
	int m_nIndex;
	CMenu m_menu;
	CString m_strInput;
};

#ifndef _DEBUG  // 02MenuView.cpp �еĵ��԰汾
inline CMy02MenuDoc* CMy02MenuView::GetDocument() const
   { return reinterpret_cast<CMy02MenuDoc*>(m_pDocument); }
#endif

