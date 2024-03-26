// CMenuParametrages.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuParametrages

IMPLEMENT_DYNAMIC(CMenuParametrages, CDialogEx)

CMenuParametrages::CMenuParametrages(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_PARAMETRAGES, pParent)
{

}

CMenuParametrages::~CMenuParametrages()
{
}

void CMenuParametrages::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_PARAMETRER_MATERIELS, BoutonParametrerMateriels);
	DDX_Control(pDX, IDC_BUTTON_TESTER_MATERIELS, BoutonTesterMateriels);
	DDX_Control(pDX, IDC_BUTTON_CREATION_BASE_PATIENTS, BoutonCreationBasePatients);
	DDX_Control(pDX, IDC_BUTTON_SAUVEGARDER_BASE_PATIENTS, BoutonSauvegarderBasePatients);
	DDX_Control(pDX, IDC_BUTTON_RETOUR_MENU_PRINCIPAL_P, BoutonMenuPrincipalP);
}


BEGIN_MESSAGE_MAP(CMenuParametrages, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_PARAMETRER_MATERIELS, &CMenuParametrages::OnBnClickedButtonParametrerMateriels)
	ON_BN_CLICKED(IDC_BUTTON_TESTER_MATERIELS, &CMenuParametrages::OnBnClickedButtonTesterMateriels)
	ON_BN_CLICKED(IDC_BUTTON_CREATION_BASE_PATIENTS, &CMenuParametrages::OnBnClickedButtonCreationBasePatients)
	ON_BN_CLICKED(IDC_BUTTON_SAUVEGARDER_BASE_PATIENTS, &CMenuParametrages::OnBnClickedButtonSauvegarderBasePatients)
	ON_BN_CLICKED(IDC_BUTTON_RETOUR_MENU_PRINCIPAL_P, &CMenuParametrages::OnBnClickedButtonRetourMenuPrincipalP)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuParametrages


BOOL CMenuParametrages::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuParametrages.SetBackgroundImage(IDB_FPARAMETRAGES);
	BoutonParametrerMateriels.EnableWindowsTheming(FALSE);
	BoutonParametrerMateriels.SetFaceColor(ORANGE_CLAIR);
	BoutonTesterMateriels.EnableWindowsTheming(FALSE);
	BoutonTesterMateriels.SetFaceColor(ORANGE_CLAIR);
	BoutonDefinirSequences.EnableWindowsTheming(FALSE);
	BoutonDefinirSequences.SetFaceColor(ORANGE_CLAIR);
	BoutonCreationBasePatients.EnableWindowsTheming(FALSE);
	BoutonCreationBasePatients.SetFaceColor(ORANGE_CLAIR);
	BoutonSauvegarderBasePatients.EnableWindowsTheming(FALSE);
	BoutonSauvegarderBasePatients.SetFaceColor(ORANGE_CLAIR);
	BoutonMenuPrincipalP.EnableWindowsTheming(FALSE);
	BoutonMenuPrincipalP.SetFaceColor(ORANGE_CLAIR);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}



void CMenuParametrages::OnBnClickedButtonParametrerMateriels()
{
	g_MenuParametrages.ShowWindow(SW_HIDE);
	g_MenuParamMateriels.ShowWindow(SW_SHOW);
}


void CMenuParametrages::OnBnClickedButtonTesterMateriels()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuParametrages.ShowWindow(SW_HIDE);
	g_MenuTesterMateriels.ShowWindow(SW_SHOW);
}



void CMenuParametrages::OnBnClickedButtonCreationBasePatients()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuParametrages.ShowWindow(SW_HIDE);
	g_MenuCreationBasePatient.ShowWindow(SW_SHOW);
}


void CMenuParametrages::OnBnClickedButtonSauvegarderBasePatients()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuParametrages.ShowWindow(SW_HIDE);
	g_MenuSauvegarderBasePatient.ShowWindow(SW_SHOW);
}


void CMenuParametrages::OnBnClickedButtonRetourMenuPrincipalP()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuParametrages.ShowWindow(SW_HIDE);
	g_MenuPrincipal.ShowWindow(SW_SHOW);
}
