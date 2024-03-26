
// RMS_Dlg.cpp : fichier d'implémentation
//

#include "pch.h"
#include "framework.h"
#include "RMS.h"
#include "RMS_Dlg.h"
#include "afxdialogex.h"
#include "Globales.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// boîte de dialogue de CRMSDlg

CRMSDlg::CRMSDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_IHM_PAGE_FOND, pParent)
{
}

void CRMSDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CRMSDlg, CDialogEx)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// gestionnaires de messages de CRMSDlg

BOOL CRMSDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO: ajoutez ici une initialisation supplémentaire
	HICON hIcon = LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON));
	SetIcon(hIcon, FALSE);

	g_MenuPrincipal.Create(IDD_MENU_PRINCIPAL, this);
	g_MenuGestionPatients.Create(IDD_MENU_GESTION_PATIENTS, this);
	g_MenuDefinitionSequences.Create(IDD_MENU_DEFINITION_SEQUENCES, this);
	g_MenuExecutionSeance.Create(IDD_MENU_EXECUTION_SEANCE, this);
	g_MenuParametrages.Create(IDD_MENU_PARAMETRAGES, this);
	g_MenuCreerPatient.Create(IDD_MENU_CREER_PATIENT, this);
	g_MenuEffacerPatient.Create(IDD_MENU_EFFACER_PATIENT, this);
	g_MenuCreationBasePatient.Create(IDD_MENU_CREATION_BASE_PATIENT, this);
	g_MenuDefinitionUneSequence.Create(IDD_MENU_DEFINITION_UNE_SEQUENCE, this);
	g_MenuParamMateriels.Create(IDD_MENU_PARAM_MATERIELS, this);
	g_MenuEffacerSequence.Create(IDD_MENU_EFFACER_SEQUENCE, this);
	g_MenuHistoriqueResultats.Create(IDD_MENU_HISTORIQUE_RESULTATS, this);
	g_MenuModificationSequence.Create(IDD_MENU_MODIFICATION_SEQUENCE, this);
	g_MenuSauvegarderBasePatient.Create(IDD_MENU_SAUVEGARDER_BASE_PATIENT, this);
	g_MenuTesterMateriels.Create(IDD_MENU_TESTER_MATERIELS, this);

	this->SetBackgroundImage(IDB_FPRINCIPAL);
	this->SetWindowPos(NULL, 0, 0, this->m_sizeBkgrBitmap.cx + 15, this->m_sizeBkgrBitmap.cy + 39, NULL);

	g_MenuPrincipal.ShowWindow(SW_SHOW);

	return TRUE;  // retourne TRUE, sauf si vous avez défini le focus sur un contrôle
}


void CRMSDlg::OnClose()
{
	// TODO: ajoutez ici le code de votre gestionnaire de messages et/ou les paramètres par défaut des appels
	int MsgBoxError = MessageBoxW(L"Etes vous sur de vouloir quitter l'application?", L"Reeducation Membres Superieurs", MB_YESNO | MB_ICONQUESTION);

	if (MsgBoxError == IDYES)
		CDialogEx::OnClose();
}
