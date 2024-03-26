// CBddDlg.cpp : fichier d'implémentation
//

#include "pch.h"
#include "framework.h"
#include "RMS.h"
#include "CBddDlg.h"
#include "afxdialogex.h"
#include "Globales.h"



// boîte de dialogue de CBddDlg

IMPLEMENT_DYNAMIC(CBddDlg, CDialogEx)

CBddDlg::CBddDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_BDD, pParent)
{
}

CBddDlg::~CBddDlg()
{
}

void CBddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, CEditBddDlg);
}


BEGIN_MESSAGE_MAP(CBddDlg, CDialogEx)
END_MESSAGE_MAP()


// gestionnaires de messages de CBddDlg


BOOL CBddDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	HICON hIcon = LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON));
	SetIcon(hIcon, FALSE);


	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


void CBddDlg::TexteErreur(CString p_t)
{
	CEditBddDlg.SetWindowTextW((LPCTSTR)p_t);
}
