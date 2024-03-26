// CMenuGestionPatients.cpp : fichier d'implémentation
//

#include "pch.h"
#include "afxdialogex.h"
#include "RMS.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuGestionPatients

IMPLEMENT_DYNAMIC(CMenuGestionPatients, CDialogEx)

CMenuGestionPatients::CMenuGestionPatients(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_GESTION_PATIENTS, pParent)
{

}

CMenuGestionPatients::~CMenuGestionPatients()
{
}

void CMenuGestionPatients::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_CREER_PATIENT, BoutonCreerPatient);
	DDX_Control(pDX, IDC_BUTTON_HISTORIQUE_RESULTATS, BoutonHistoriqueResultats);
	DDX_Control(pDX, IDC_BUTTON_EFFACER_PATIENT, BoutonEffacerPatient);
	DDX_Control(pDX, IDC_BUTTON_RETOUR_MENU_PRINCIPAL_GP, BoutonMenuPrincipalGP);
}


BEGIN_MESSAGE_MAP(CMenuGestionPatients, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_CREER_PATIENT, &CMenuGestionPatients::OnBnClickedButtonCreerPatient)
	ON_BN_CLICKED(IDC_BUTTON_HISTORIQUE_RESULTATS, &CMenuGestionPatients::OnBnClickedButtonHistoriqueResultats)
	ON_BN_CLICKED(IDC_BUTTON_EFFACER_PATIENT, &CMenuGestionPatients::OnBnClickedButtonEffacerPatient)
	ON_BN_CLICKED(IDC_BUTTON_RETOUR_MENU_PRINCIPAL_GP, &CMenuGestionPatients::OnBnClickedButtonRetourMenuPrincipalGp)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuGestionPatients


BOOL CMenuGestionPatients::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuGestionPatients.SetBackgroundImage(IDB_FGESTIONPATIENT);
	BoutonCreerPatient.EnableWindowsTheming(FALSE);
	BoutonCreerPatient.SetFaceColor(ORANGE_CLAIR);
	BoutonHistoriqueResultats.EnableWindowsTheming(FALSE);
	BoutonHistoriqueResultats.SetFaceColor(ORANGE_CLAIR);
	BoutonEffacerPatient.EnableWindowsTheming(FALSE);
	BoutonEffacerPatient.SetFaceColor(ORANGE_CLAIR);
	BoutonMenuPrincipalGP.EnableWindowsTheming(FALSE);
	BoutonMenuPrincipalGP.SetFaceColor(ORANGE_CLAIR);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}



void CMenuGestionPatients::OnBnClickedButtonCreerPatient()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuGestionPatients.ShowWindow(SW_HIDE);
	g_MenuCreerPatient.ShowWindow(SW_SHOW);

}


void CMenuGestionPatients::OnBnClickedButtonHistoriqueResultats()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuGestionPatients.ShowWindow(SW_HIDE);
	g_MenuHistoriqueResultats.ShowWindow(SW_SHOW);
}


void CMenuGestionPatients::OnBnClickedButtonEffacerPatient()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuGestionPatients.ShowWindow(SW_HIDE);
	g_MenuEffacerPatient.ShowWindow(SW_SHOW);
}


void CMenuGestionPatients::OnBnClickedButtonRetourMenuPrincipalGp()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuGestionPatients.ShowWindow(SW_HIDE);
	g_MenuPrincipal.ShowWindow(SW_SHOW);
}
