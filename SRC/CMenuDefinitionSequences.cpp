// CMenuDefinitionSequences.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuDefinitionSequences

IMPLEMENT_DYNAMIC(CMenuDefinitionSequences, CDialogEx)

CMenuDefinitionSequences::CMenuDefinitionSequences(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_DEFINITION_SEQUENCES, pParent)
{

}

CMenuDefinitionSequences::~CMenuDefinitionSequences()
{
}

void CMenuDefinitionSequences::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_RETOUR_MENU_PRINCIPAL_DS, BoutonMenuPrincipalDS);
	DDX_Control(pDX, IDC_BUTTON_DEFINITION_UNE_SEQUENCE, BoutonDefinitionUneSequence);
	DDX_Control(pDX, IDC_BUTTON_MODIFICATION_SEQUENCE, BoutonModificationSequence);
	DDX_Control(pDX, IDC_BUTTON_EFFACEMENT_SEQUENCE, BoutonEffacementSequence);
}


BEGIN_MESSAGE_MAP(CMenuDefinitionSequences, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_RETOUR_MENU_PRINCIPAL_DS, &CMenuDefinitionSequences::OnBnClickedButtonRetourMenuPrincipalDs)
	ON_BN_CLICKED(IDC_BUTTON_DEFINITION_UNE_SEQUENCE, &CMenuDefinitionSequences::OnBnClickedButtonDefinitionUneSequence)
	ON_BN_CLICKED(IDC_BUTTON_EFFACEMENT_SEQUENCE, &CMenuDefinitionSequences::OnBnClickedButtonEffacementSequence)
	ON_BN_CLICKED(IDC_BUTTON_MODIFICATION_SEQUENCE, &CMenuDefinitionSequences::OnBnClickedButtonModificationSequence)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuDefinitionSequences


BOOL CMenuDefinitionSequences::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuDefinitionSequences.SetBackgroundImage(IDB_FDEFINITONSEQUENCE);
	BoutonMenuPrincipalDS.EnableWindowsTheming(FALSE);
	BoutonMenuPrincipalDS.SetFaceColor(ORANGE_CLAIR);
	BoutonDefinitionUneSequence.EnableWindowsTheming(FALSE);
	BoutonDefinitionUneSequence.SetFaceColor(ORANGE_CLAIR);
	BoutonEffacementSequence.EnableWindowsTheming(FALSE);
	BoutonEffacementSequence.SetFaceColor(ORANGE_CLAIR);
	BoutonModificationSequence.EnableWindowsTheming(FALSE);
	BoutonModificationSequence.SetFaceColor(ORANGE_CLAIR);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}



void CMenuDefinitionSequences::OnBnClickedButtonRetourMenuPrincipalDs()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuDefinitionSequences.ShowWindow(SW_HIDE);
	g_MenuPrincipal.ShowWindow(SW_SHOW);
}



void CMenuDefinitionSequences::OnBnClickedButtonDefinitionUneSequence()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuDefinitionSequences.ShowWindow(SW_HIDE);
	g_MenuDefinitionUneSequence.ShowWindow(SW_SHOW);
}


void CMenuDefinitionSequences::OnBnClickedButtonEffacementSequence()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuDefinitionSequences.ShowWindow(SW_HIDE);
	g_MenuEffacerSequence.ShowWindow(SW_SHOW);
}


void CMenuDefinitionSequences::OnBnClickedButtonModificationSequence()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuDefinitionSequences.ShowWindow(SW_HIDE);
	g_MenuModificationSequence.ShowWindow(SW_SHOW);
}
