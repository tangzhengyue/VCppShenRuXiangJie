// 01DrawView.h : interface of the CMy01DrawView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_01DRAWVIEW_H__A84F58BC_D005_4A0B_873A_D4D6B9C5D6F7__INCLUDED_)
#define AFX_01DRAWVIEW_H__A84F58BC_D005_4A0B_873A_D4D6B9C5D6F7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy01DrawView : public CView
{
protected: // create from serialization only
	CMy01DrawView();
	DECLARE_DYNCREATE(CMy01DrawView)

// Attributes
public:
	CMy01DrawDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01DrawView)
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
	virtual ~CMy01DrawView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy01DrawView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CPoint m_ptOrigin;
};

#ifndef _DEBUG  // debug version in 01DrawView.cpp
inline CMy01DrawDoc* CMy01DrawView::GetDocument()
   { return (CMy01DrawDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01DRAWVIEW_H__A84F58BC_D005_4A0B_873A_D4D6B9C5D6F7__INCLUDED_)
