// 01DrawDoc.cpp : implementation of the CMy01DrawDoc class
//

#include "stdafx.h"
#include "01Draw.h"

#include "01DrawDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawDoc

IMPLEMENT_DYNCREATE(CMy01DrawDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy01DrawDoc, CDocument)
	//{{AFX_MSG_MAP(CMy01DrawDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawDoc construction/destruction

CMy01DrawDoc::CMy01DrawDoc()
{
	// TODO: add one-time construction code here

}

CMy01DrawDoc::~CMy01DrawDoc()
{
}

BOOL CMy01DrawDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy01DrawDoc serialization

void CMy01DrawDoc::Serialize(CArchive& ar)
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
// CMy01DrawDoc diagnostics

#ifdef _DEBUG
void CMy01DrawDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy01DrawDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy01DrawDoc commands
