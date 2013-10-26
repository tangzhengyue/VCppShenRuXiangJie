// 01DrawDoc.h : interface of the CMy01DrawDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_01DRAWDOC_H__8A5C0596_6571_4D9B_9F5A_405562DAD9BF__INCLUDED_)
#define AFX_01DRAWDOC_H__8A5C0596_6571_4D9B_9F5A_405562DAD9BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy01DrawDoc : public CDocument
{
protected: // create from serialization only
	CMy01DrawDoc();
	DECLARE_DYNCREATE(CMy01DrawDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01DrawDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy01DrawDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy01DrawDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01DRAWDOC_H__8A5C0596_6571_4D9B_9F5A_405562DAD9BF__INCLUDED_)
