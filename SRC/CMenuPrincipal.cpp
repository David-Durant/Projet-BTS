// CMenuPrincipal.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuPrincipal

IMPLEMENT_DYNAMIC(CMenuPrincipal, CDialogEx)

CMenuPrincipal::CMenuPrincipal(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_PRINCIPAL, pParent)
{

}

CMenuPrincipal::~CMenuPrincipal()
{
}

void CMenuPrincipal::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_BUTTON_GESTION_PATIENTS, BoutonGestionPatients);
	DDX_Control(pDX, IDC_BUTTON_DEFINITION_SEQUENCES, BoutonDefinitionSequences);
	DDX_Control(pDX, IDC_BUTTON_EXECUTION_SEANCE, BoutonExecutionSeance);
	DDX_Control(pDX, IDC_BUTTON_PARAMETRAGES, BoutonParametrages);
	DDX_Control(pDX, IDC_BUTTON_FIN_PROGRAMME, BoutonFinProgramme);
}


BEGIN_MESSAGE_MAP(CMenuPrincipal, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_GESTION_PATIENTS, &CMenuPrincipal::OnBnClickedButtonGestionPatients)
	ON_BN_CLICKED(IDC_BUTTON_DEFINITION_SEQUENCES, &CMenuPrincipal::OnBnClickedButtonDefinitionSequences)
	ON_BN_CLICKED(IDC_BUTTON_EXECUTION_SEANCE, &CMenuPrincipal::OnBnClickedButtonExecutionSeance)
	ON_BN_CLICKED(IDC_BUTTON_PARAMETRAGES, &CMenuPrincipal::OnBnClickedButtonParametrages)
	ON_BN_CLICKED(IDC_BUTTON_FIN_PROGRAMME, &CMenuPrincipal::OnBnClickedButtonFinProgramme)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuPrincipal

BOOL CMenuPrincipal::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuPrincipal.SetBackgroundImage(IDB_FPRINCIPAL);
	g_MenuPrincipal.SetWindowPos(NULL, 0, 0, g_MenuPrincipal.m_sizeBkgrBitmap.cx + 15, g_MenuPrincipal.m_sizeBkgrBitmap.cy + 29, NULL);

	BoutonGestionPatients.EnableWindowsTheming(FALSE);
	BoutonGestionPatients.SetFaceColor(ORANGE_CLAIR);
	BoutonDefinitionSequences.EnableWindowsTheming(FALSE);
	BoutonDefinitionSequences.SetFaceColor(ORANGE_CLAIR);
	BoutonExecutionSeance.EnableWindowsTheming(FALSE);
	BoutonExecutionSeance.SetFaceColor(ORANGE_CLAIR);
	BoutonParametrages.EnableWindowsTheming(FALSE);
	BoutonParametrages.SetFaceColor(ORANGE_CLAIR);
	BoutonFinProgramme.EnableWindowsTheming(FALSE);
	BoutonFinProgramme.SetFaceColor(ORANGE_CLAIR);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


void CMenuPrincipal::OnBnClickedButtonGestionPatients()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuPrincipal.ShowWindow(SW_HIDE);
	g_MenuGestionPatients.ShowWindow(SW_SHOW);
}


void CMenuPrincipal::OnBnClickedButtonDefinitionSequences()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuPrincipal.ShowWindow(SW_HIDE);
	g_MenuDefinitionSequences.ShowWindow(SW_SHOW);
}


void CMenuPrincipal::OnBnClickedButtonExecutionSeance()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuPrincipal.ShowWindow(SW_HIDE);
	g_MenuExecutionSeance.ShowWindow(SW_SHOW);
}


void CMenuPrincipal::OnBnClickedButtonParametrages()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuPrincipal.ShowWindow(SW_HIDE);
	g_MenuParametrages.ShowWindow(SW_SHOW);
}


void CMenuPrincipal::OnBnClickedButtonFinProgramme()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	int MsgBoxError = MessageBoxW(L"Etes vous sur de vouloir quitter l'application?", L"Reeducation Membres Superieurs", MB_YESNO | MB_ICONQUESTION);

	if (MsgBoxError == IDYES)
		PostQuitMessage(0);
}
