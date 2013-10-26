// 01TestDoc.cpp : implementation of the CMy01TestDoc class
//

#include "stdafx.h"
#include "01Test.h"

#include "01TestDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy01TestDoc

IMPLEMENT_DYNCREATE(CMy01TestDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy01TestDoc, CDocument)
	//{{AFX_MSG_MAP(CMy01TestDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy01TestDoc construction/destruction

CMy01TestDoc::CMy01TestDoc()
{
	// TODO: add one-time construction code here

}

CMy01TestDoc::~CMy01TestDoc()
{
}

BOOL CMy01TestDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy01TestDoc serialization

void CMy01TestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMy01TestDoc diagnostics

#ifdef _DEBUG
void CMy01TestDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy01TestDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy01TestDoc commands
