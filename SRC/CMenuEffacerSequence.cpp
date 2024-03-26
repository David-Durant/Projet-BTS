// CMenuEffacerSequence.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuEffacerSequence.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuEffacerSequence

IMPLEMENT_DYNAMIC(CMenuEffacerSequence, CDialogEx)

CMenuEffacerSequence::CMenuEffacerSequence(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_EFFACER_SEQUENCE, pParent)
{

}

CMenuEffacerSequence::~CMenuEffacerSequence()
{
}

void CMenuEffacerSequence::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTE_EFFACER_SEQUENCES, ListeEffacerSequence);
	DDX_Control(pDX, IDC_BUTTON_ABANDON_ES, BoutonAbandonES);
	DDX_Control(pDX, IDC_BUTTON_EFFACER_SEQUENCE, BoutonEffacerSequence);
}


BEGIN_MESSAGE_MAP(CMenuEffacerSequence, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_ABANDON_ES, &CMenuEffacerSequence::OnBnClickedButtonAbandonEs)
	ON_BN_CLICKED(IDC_BUTTON_EFFACER_SEQUENCE, &CMenuEffacerSequence::OnBnClickedButtonEffacerSequence)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuEffacerSequence





BOOL CMenuEffacerSequence::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuEffacerSequence.SetBackgroundImage(IDB_FEFFACERSEQUENCE);
	BoutonEffacerSequence.EnableWindowsTheming(FALSE);
	BoutonEffacerSequence.SetFaceColor(ORANGE_CLAIR);
	BoutonAbandonES.EnableWindowsTheming(FALSE);
	BoutonAbandonES.SetFaceColor(ORANGE_CLAIR);

	ListeEffacerSequence.SetCueBanner(_T("Choisir une sequence"));
	ListeEffacerSequence.AddString(_T("sequence 1"));
	ListeEffacerSequence.AddString(_T("sequence 2"));
	ListeEffacerSequence.AddString(_T("sequence 3"));
	ListeEffacerSequence.AddString(_T("sequence 4"));
	ListeEffacerSequence.AddString(_T("sequence 5"));
	ListeEffacerSequence.AddString(_T("sequence 6"));


	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}

HBRUSH CMenuEffacerSequence::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC
	switch (pWnd->GetDlgCtrlID())
	{
	case IDC_STATIC_EFFACER_SEQUENCES:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	default:
		pDC->SetTextColor(NOIR);
		break;
	}

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuEffacerSequence::OnBnClickedButtonAbandonEs()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuEffacerSequence.ShowWindow(SW_HIDE);
	g_MenuDefinitionSequences.ShowWindow(SW_SHOW);
}



void CMenuEffacerSequence::OnBnClickedButtonEffacerSequence()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}
