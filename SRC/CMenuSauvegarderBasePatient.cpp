// CMenuSauvegarderBasePatient.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuSauvegarderBasePatient.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuSauvegarderBasePatient

IMPLEMENT_DYNAMIC(CMenuSauvegarderBasePatient, CDialogEx)

CMenuSauvegarderBasePatient::CMenuSauvegarderBasePatient(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_SAUVEGARDER_BASE_PATIENT, pParent)
{

}

CMenuSauvegarderBasePatient::~CMenuSauvegarderBasePatient()
{
}

void CMenuSauvegarderBasePatient::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_ABANDON_SBP, BoutonAdandonSBP);
}


BEGIN_MESSAGE_MAP(CMenuSauvegarderBasePatient, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_ABANDON_SBP, &CMenuSauvegarderBasePatient::OnBnClickedButtonAbandonSbp)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuSauvegarderBasePatient

BOOL CMenuSauvegarderBasePatient::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuSauvegarderBasePatient.SetBackgroundImage(IDB_SAUVEGARDEBASEPATIENT);
	BoutonAdandonSBP.EnableWindowsTheming(FALSE);
	BoutonAdandonSBP.SetFaceColor(ORANGE_CLAIR);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuSauvegarderBasePatient::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuSauvegarderBasePatient::OnBnClickedButtonAbandonSbp()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuSauvegarderBasePatient.ShowWindow(SW_HIDE);
	g_MenuParametrages.ShowWindow(SW_SHOW);
}
