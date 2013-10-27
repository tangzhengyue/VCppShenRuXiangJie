// 01TextView.h : interface of the CMy01TextView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_01TEXTVIEW_H__002EECEC_1B8E_4C73_8B18_0458F3D14E77__INCLUDED_)
#define AFX_01TEXTVIEW_H__002EECEC_1B8E_4C73_8B18_0458F3D14E77__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy01TextView : public CView
{
protected: // create from serialization only
	CMy01TextView();
	DECLARE_DYNCREATE(CMy01TextView)

// Attributes
public:
	CMy01TextDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01TextView)
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
	virtual ~CMy01TextView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy01TextView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 01TextView.cpp
inline CMy01TextDoc* CMy01TextView::GetDocument()
   { return (CMy01TextDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01TEXTVIEW_H__002EECEC_1B8E_4C73_8B18_0458F3D14E77__INCLUDED_)
