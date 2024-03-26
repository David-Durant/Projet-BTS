// CMenuEffacerPatient.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuEffacerPatient.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuEffacerPatient

IMPLEMENT_DYNAMIC(CMenuEffacerPatient, CDialogEx)

CMenuEffacerPatient::CMenuEffacerPatient(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_EFFACER_PATIENT, pParent)
{

}

CMenuEffacerPatient::~CMenuEffacerPatient()
{
}

void CMenuEffacerPatient::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTE_CHOISIR_PATIENTS_EP, ListeChoisirPatientEP);
	DDX_Control(pDX, IDC_BUTTON_ABANDON_EP, BoutonAbandonEP);
	DDX_Control(pDX, IDC_BUTTON_EFFACER_PATIENT, BoutonEffacerPatient);
}


BEGIN_MESSAGE_MAP(CMenuEffacerPatient, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_EFFACER_PATIENT, &CMenuEffacerPatient::OnBnClickedButtonEffacerPatient)
	ON_BN_CLICKED(IDC_BUTTON_ABANDON_EP, &CMenuEffacerPatient::OnBnClickedButtonAbandonEp)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuEffacerPatient



BOOL CMenuEffacerPatient::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuEffacerPatient.SetBackgroundImage(IDB_FEFFACERPATIENT);
	BoutonAbandonEP.EnableWindowsTheming(FALSE);
	BoutonAbandonEP.SetFaceColor(ORANGE_CLAIR);
	BoutonEffacerPatient.EnableWindowsTheming(FALSE);
	BoutonEffacerPatient.SetFaceColor(ORANGE_CLAIR);

	ListeChoisirPatientEP.SetCueBanner(_T("Choisir un patient"));
	ListeChoisirPatientEP.AddString(_T("patient 1"));
	ListeChoisirPatientEP.AddString(_T("patient 2"));
	ListeChoisirPatientEP.AddString(_T("patient 3"));
	ListeChoisirPatientEP.AddString(_T("patient 4"));
	ListeChoisirPatientEP.AddString(_T("patient 5"));
	ListeChoisirPatientEP.AddString(_T("patient 6"));

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuEffacerPatient::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC
	switch (pWnd->GetDlgCtrlID())
	{
	case IDC_STATIC_CHOISIR_PATIENT_EP:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	default:
		pDC->SetTextColor(NOIR);
		break;
	}

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuEffacerPatient::OnBnClickedButtonEffacerPatient()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CMenuEffacerPatient::OnBnClickedButtonAbandonEp()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuEffacerPatient.ShowWindow(SW_HIDE);
	g_MenuGestionPatients.ShowWindow(SW_SHOW);
}
