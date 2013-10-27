// 01TextDoc.cpp : implementation of the CMy01TextDoc class
//

#include "stdafx.h"
#include "01Text.h"

#include "01TextDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy01TextDoc

IMPLEMENT_DYNCREATE(CMy01TextDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy01TextDoc, CDocument)
	//{{AFX_MSG_MAP(CMy01TextDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy01TextDoc construction/destruction

CMy01TextDoc::CMy01TextDoc()
{
	// TODO: add one-time construction code here

}

CMy01TextDoc::~CMy01TextDoc()
{
}

BOOL CMy01TextDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy01TextDoc serialization

void CMy01TextDoc::Serialize(CArchive& ar)
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
// CMy01TextDoc diagnostics

#ifdef _DEBUG
void CMy01TextDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy01TextDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy01TextDoc commands
