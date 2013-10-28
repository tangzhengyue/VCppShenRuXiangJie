// 01MenuDoc.cpp : implementation of the CMy01MenuDoc class
//

#include "stdafx.h"
#include "01Menu.h"

#include "01MenuDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuDoc

IMPLEMENT_DYNCREATE(CMy01MenuDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy01MenuDoc, CDocument)
	//{{AFX_MSG_MAP(CMy01MenuDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuDoc construction/destruction

CMy01MenuDoc::CMy01MenuDoc()
{
	// TODO: add one-time construction code here

}

CMy01MenuDoc::~CMy01MenuDoc()
{
}

BOOL CMy01MenuDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy01MenuDoc serialization

void CMy01MenuDoc::Serialize(CArchive& ar)
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
// CMy01MenuDoc diagnostics

#ifdef _DEBUG
void CMy01MenuDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy01MenuDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy01MenuDoc commands
