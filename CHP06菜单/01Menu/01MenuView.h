// 01MenuView.h : interface of the CMy01MenuView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_01MENUVIEW_H__5F87A7B0_4B7D_4A76_92DC_3C86478573BB__INCLUDED_)
#define AFX_01MENUVIEW_H__5F87A7B0_4B7D_4A76_92DC_3C86478573BB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy01MenuView : public CView
{
protected: // create from serialization only
	CMy01MenuView();
	DECLARE_DYNCREATE(CMy01MenuView)

// Attributes
public:
	CMy01MenuDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01MenuView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy01MenuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy01MenuView)
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 01MenuView.cpp
inline CMy01MenuDoc* CMy01MenuView::GetDocument()
   { return (CMy01MenuDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01MENUVIEW_H__5F87A7B0_4B7D_4A76_92DC_3C86478573BB__INCLUDED_)
