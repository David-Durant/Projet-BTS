// CMenuCreerPatient.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuCreerPatient.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuCreerPatient

IMPLEMENT_DYNAMIC(CMenuCreerPatient, CDialogEx)

CMenuCreerPatient::CMenuCreerPatient(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_CREER_PATIENT, pParent)
{

}

CMenuCreerPatient::~CMenuCreerPatient()
{
}

void CMenuCreerPatient::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_CREER_PATIENT_P_CP, BoutonCreerPatient_CP);
	DDX_Control(pDX, IDC_BUTTON_ABANDON, BoutonAbandon);
}


BEGIN_MESSAGE_MAP(CMenuCreerPatient, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_ABANDON, &CMenuCreerPatient::OnBnClickedButtonAbandon)
	ON_BN_CLICKED(IDC_BUTTON_CREER_PATIENT_P_CP, &CMenuCreerPatient::OnBnClickedButtonCreerPatientPCp)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuCreerPatient


BOOL CMenuCreerPatient::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuCreerPatient.SetBackgroundImage(IDB_FCREERPATIENT);
	BoutonCreerPatient_CP.EnableWindowsTheming(FALSE);
	BoutonCreerPatient_CP.SetFaceColor(ORANGE_CLAIR);
	BoutonAbandon.EnableWindowsTheming(FALSE);
	BoutonAbandon.SetFaceColor(ORANGE_CLAIR);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuCreerPatient::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC

	switch (pWnd->GetDlgCtrlID())
	{
	case IDC_STATIC_CREER_PATIENT_NOM:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	case IDC_STATIC_CREER_PATIENT_PRENOM:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	case IDC_STATIC_CREER_PATIENT_DATE_NAISSANCE:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	default:
		pDC->SetTextColor(NOIR);
		break;
	}

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuCreerPatient::OnBnClickedButtonAbandon()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuCreerPatient.ShowWindow(SW_HIDE);
	g_MenuGestionPatients.ShowWindow(SW_SHOW);
}


void CMenuCreerPatient::OnBnClickedButtonCreerPatientPCp()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}
