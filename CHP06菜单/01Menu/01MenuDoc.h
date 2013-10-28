// 01MenuDoc.h : interface of the CMy01MenuDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_01MENUDOC_H__F24E46D0_8B0D_4943_BA65_ADDA0E21AB72__INCLUDED_)
#define AFX_01MENUDOC_H__F24E46D0_8B0D_4943_BA65_ADDA0E21AB72__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy01MenuDoc : public CDocument
{
protected: // create from serialization only
	CMy01MenuDoc();
	DECLARE_DYNCREATE(CMy01MenuDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy01MenuDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy01MenuDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy01MenuDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_01MENUDOC_H__F24E46D0_8B0D_4943_BA65_ADDA0E21AB72__INCLUDED_)
