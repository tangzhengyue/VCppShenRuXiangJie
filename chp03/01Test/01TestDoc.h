// 01TestDoc.h : interface of the CMy01TestDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_01TESTDOC_H__DFB921EF_E6B7_48D0_AA12_97D0DEE09BC4__INCLUDED_)
#define AFX_01TESTDOC_H__DFB921EF_E6B7_48D0_AA12_97D0DEE09BC4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy01TestDoc : public CDocument
{
protected: // create from serialization only
	CMy01TestDoc();
	DECLARE_DYNCREATE(CMy01TestDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01TestDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy01TestDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy01TestDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01TESTDOC_H__DFB921EF_E6B7_48D0_AA12_97D0DEE09BC4__INCLUDED_)
