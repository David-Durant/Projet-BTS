// CMenuTesterMateriels.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuTesterMateriels.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuTesterMateriels

IMPLEMENT_DYNAMIC(CMenuTesterMateriels, CDialogEx)

CMenuTesterMateriels::CMenuTesterMateriels(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_TESTER_MATERIELS, pParent)
{

}

CMenuTesterMateriels::~CMenuTesterMateriels()
{
}

void CMenuTesterMateriels::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_ABANDON_TM, BoutonAdandonTM);
}


BEGIN_MESSAGE_MAP(CMenuTesterMateriels, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_ABANDON_TM, &CMenuTesterMateriels::OnBnClickedButtonAbandonTm)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuTesterMateriels

BOOL CMenuTesterMateriels::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuTesterMateriels.SetBackgroundImage(IDB_TESTERMATERIELS);
	BoutonAdandonTM.EnableWindowsTheming(FALSE);
	BoutonAdandonTM.SetFaceColor(ORANGE_CLAIR);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuTesterMateriels::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuTesterMateriels::OnBnClickedButtonAbandonTm()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuTesterMateriels.ShowWindow(SW_HIDE);
	g_MenuParametrages.ShowWindow(SW_SHOW);
}
