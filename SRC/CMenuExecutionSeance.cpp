// CMenuExecutionSeance.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuExecutionSeance

IMPLEMENT_DYNAMIC(CMenuExecutionSeance, CDialogEx)

CMenuExecutionSeance::CMenuExecutionSeance(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_EXECUTION_SEANCE, pParent)
{

}

CMenuExecutionSeance::~CMenuExecutionSeance()
{
}

void CMenuExecutionSeance::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_DEBUTER_SEANCE, BoutonDebuterSeance);
	DDX_Control(pDX, IDC_BUTTON_RETOUR_MENU_PRINCIPAL_PS, BoutonMenuPrincipalPS);
	DDX_Control(pDX, IDC_LISTE_CHOISIR_PATIENTS_ES, ListeChoisirPatientES);
	DDX_Control(pDX, IDC_LISTE_CHOISIR_SEQUENCES, ListeChoisirSequence);
}


BEGIN_MESSAGE_MAP(CMenuExecutionSeance, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_DEBUTER_SEANCE, &CMenuExecutionSeance::OnBnClickedButtonDebuterSeance)
	ON_BN_CLICKED(IDC_BUTTON_RETOUR_MENU_PRINCIPAL_PS, &CMenuExecutionSeance::OnBnClickedButtonRetourMenuPrincipalPs)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuExecutionSeance


BOOL CMenuExecutionSeance::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuExecutionSeance.SetBackgroundImage(IDB_FEXECUTIONSEANCE);

	BoutonDebuterSeance.EnableWindowsTheming(FALSE);
	BoutonDebuterSeance.SetFaceColor(ORANGE_CLAIR);
	BoutonMenuPrincipalPS.EnableWindowsTheming(FALSE);
	BoutonMenuPrincipalPS.SetFaceColor(ORANGE_CLAIR);

	ListeChoisirPatientES.SetCueBanner(_T("Choisir un patient"));
	ListeChoisirPatientES.AddString(_T("patient 1"));
	ListeChoisirPatientES.AddString(_T("patient 2"));
	ListeChoisirPatientES.AddString(_T("patient 3"));
	ListeChoisirPatientES.AddString(_T("patient 4"));
	ListeChoisirPatientES.AddString(_T("patient 5"));
	ListeChoisirPatientES.AddString(_T("patient 6"));

	ListeChoisirSequence.SetCueBanner(_T("Choisir une sequence"));
	ListeChoisirSequence.AddString(_T("sequence 1"));
	ListeChoisirSequence.AddString(_T("sequence 2"));
	ListeChoisirSequence.AddString(_T("sequence 3"));
	ListeChoisirSequence.AddString(_T("sequence 4"));
	ListeChoisirSequence.AddString(_T("sequence 5"));
	ListeChoisirSequence.AddString(_T("sequence 6"));

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuExecutionSeance::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC
	switch (pWnd->GetDlgCtrlID())
	{
	case IDC_STATIC_CHOISIR_PATIENT_ES:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	case IDC_STATIC_CHOISIR_SEQUENCE:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	default:
		pDC->SetTextColor(NOIR);
		break;
	}

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuExecutionSeance::OnBnClickedButtonDebuterSeance()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CMenuExecutionSeance::OnBnClickedButtonRetourMenuPrincipalPs()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuExecutionSeance.ShowWindow(SW_HIDE);
	g_MenuPrincipal.ShowWindow(SW_SHOW);
}