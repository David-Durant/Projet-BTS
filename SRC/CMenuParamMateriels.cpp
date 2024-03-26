// CMenuParamMateriels.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuParamMateriels

IMPLEMENT_DYNAMIC(CMenuParamMateriels, CDialogEx)

CMenuParamMateriels::CMenuParamMateriels(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_PARAM_MATERIELS, pParent)
{

}

CMenuParamMateriels::~CMenuParamMateriels()
{
}

void CMenuParamMateriels::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_ENREG_PARAM_MATERIELS, BoutonParamMaterielEnreg);
	DDX_Control(pDX, IDC_BUTTON_ABANDON_PARAM_MATERIELS, BoutonParamMaterielAbandon);
	DDX_Control(pDX, IDC_EDIT_NB_BOUTON_ESCLAVE, ValeurParamNombreBoutonEsclave);
}


BEGIN_MESSAGE_MAP(CMenuParamMateriels, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_ENREG_PARAM_MATERIELS, &CMenuParamMateriels::OnBnClickedButtonEnregParamMateriels)
	ON_BN_CLICKED(IDC_BUTTON_ABANDON_PARAM_MATERIELS, &CMenuParamMateriels::OnBnClickedButtonAbandonParamMateriels)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuParamMateriels


BOOL CMenuParamMateriels::OnInitDialog()
{
	CDialogEx::OnInitDialog();


	g_MenuParamMateriels.SetBackgroundImage(IDB_FPARAMMATERIELS);
	BoutonParamMaterielEnreg.EnableWindowsTheming(FALSE);
	BoutonParamMaterielEnreg.SetFaceColor(ORANGE_CLAIR);
	BoutonParamMaterielAbandon.EnableWindowsTheming(FALSE);
	BoutonParamMaterielAbandon.SetFaceColor(ORANGE_CLAIR);



	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuParamMateriels::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	switch (pWnd->GetDlgCtrlID())
	{
	case IDC_STATIC_TEXTE_NB_BOUTON_ESCLAVE:
		pDC->SetTextColor(BLANC);
		break;
	case IDC_STATIC_ADRESSE_IP:
		pDC->SetTextColor(BLANC);
		break;
	default:
		pDC->SetTextColor(NOIR);
		break;
	}

	return hbr;
}


void CMenuParamMateriels::OnBnClickedButtonEnregParamMateriels()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CMenuParamMateriels::OnBnClickedButtonAbandonParamMateriels()
{
	g_MenuParamMateriels.ShowWindow(SW_HIDE);
	g_MenuParametrages.ShowWindow(SW_SHOW);
}