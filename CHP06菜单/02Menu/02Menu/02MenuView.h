
// 02MenuView.h : CMy02MenuView 类的接口
//

#pragma once
#include "afxwin.h"


class CMy02MenuView : public CView
{
protected: // 仅从序列化创建
	CMy02MenuView();
	DECLARE_DYNCREATE(CMy02MenuView)

// 特性
public:
	CMy02MenuDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy02MenuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
private:
	int m_nIndex;
	CMenu m_menu;
	CString m_strInput;
};

#ifndef _DEBUG  // 02MenuView.cpp 中的调试版本
inline CMy02MenuDoc* CMy02MenuView::GetDocument() const
   { return reinterpret_cast<CMy02MenuDoc*>(m_pDocument); }
#endif

