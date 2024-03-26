// CMenuDefinitionUneSequence.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuDefinitionUneSequence.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuDefinitionUneSequence

IMPLEMENT_DYNAMIC(CMenuDefinitionUneSequence, CDialogEx)

CMenuDefinitionUneSequence::CMenuDefinitionUneSequence(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_DEFINITION_UNE_SEQUENCE, pParent)
{

}

CMenuDefinitionUneSequence::~CMenuDefinitionUneSequence()
{
}

void CMenuDefinitionUneSequence::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_ENREGISTRER_UNE_SEQUENCE, BoutonEnregistrerUneSequence);
	DDX_Control(pDX, IDC_BUTTON_ABANDON_UNE_SEQUENCE, BoutonAbandonUneSequence);
	DDX_Control(pDX, IDC_BUTTON_SIMULER_UNE_SEQUENCE, BoutonSimulerSequence);
	DDX_Control(pDX, IDC_BUTTON_ETAPE_SUIVANTE, BoutonEtapeSuivante);
	DDX_Control(pDX, IDC_RADIO_1S, BoutonTemps1s);
	DDX_Control(pDX, IDC_RADIO_2S, BoutonTemps2s);
	DDX_Control(pDX, IDC_RADIO_3S, BoutonTemps3s);
	DDX_Control(pDX, IDC_RADIO_4S, BoutonTemps4s);
	DDX_Control(pDX, IDC_RADIO_5S, BoutonTemps5s);
	DDX_Control(pDX, IDC_RADIO_10S, BoutonTemps10s);
	DDX_Control(pDX, IDC_RADIO_15S, BoutonTemps15s);
	DDX_Control(pDX, IDC_RADIO_20S, BoutonTemps20s);
	DDX_Control(pDX, IDC_RADIO_25S, BoutonTemps25s);
	DDX_Control(pDX, IDC_RADIO_30S, BoutonTemps30s);
	DDX_Control(pDX, IDC_RADIO_AUTRES, BoutonTempsAutres);
	DDX_Control(pDX, IDC_EDIT_AUTRES_ZONE, TempsEdit);
	DDX_Control(pDX, IDC_STATIC_TEMPS, StaticTemps);
	DDX_Control(pDX, IDC_CHECK1, BoutonEsclave[0]);
	DDX_Control(pDX, IDC_CHECK2, BoutonEsclave[1]);
	DDX_Control(pDX, IDC_CHECK3, BoutonEsclave[2]);
	DDX_Control(pDX, IDC_CHECK4, BoutonEsclave[3]);
	DDX_Control(pDX, IDC_CHECK5, BoutonEsclave[4]);
	DDX_Control(pDX, IDC_CHECK6, BoutonEsclave[5]);
	DDX_Control(pDX, IDC_CHECK7, BoutonEsclave[6]);
	DDX_Control(pDX, IDC_CHECK8, BoutonEsclave[7]);
	DDX_Control(pDX, IDC_CHECK9, BoutonEsclave[8]);
	DDX_Control(pDX, IDC_CHECK10, BoutonEsclave[9]);
	DDX_Control(pDX, IDC_CHECK11, BoutonEsclave[10]);
	DDX_Control(pDX, IDC_CHECK12, BoutonEsclave[11]);
	DDX_Control(pDX, IDC_STATIC_ETAPE_NUMERO, StaticEtape);
}


BEGIN_MESSAGE_MAP(CMenuDefinitionUneSequence, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_RADIO_1S, &CMenuDefinitionUneSequence::OnBnClickedRadio1s)
	ON_BN_CLICKED(IDC_RADIO_2S, &CMenuDefinitionUneSequence::OnBnClickedRadio2s)
	ON_BN_CLICKED(IDC_RADIO_3S, &CMenuDefinitionUneSequence::OnBnClickedRadio3s)
	ON_BN_CLICKED(IDC_RADIO_4S, &CMenuDefinitionUneSequence::OnBnClickedRadio4s)
	ON_BN_CLICKED(IDC_RADIO_5S, &CMenuDefinitionUneSequence::OnBnClickedRadio5s)
	ON_BN_CLICKED(IDC_RADIO_10S, &CMenuDefinitionUneSequence::OnBnClickedRadio10s)
	ON_BN_CLICKED(IDC_RADIO_15S, &CMenuDefinitionUneSequence::OnBnClickedRadio15s)
	ON_BN_CLICKED(IDC_RADIO_20S, &CMenuDefinitionUneSequence::OnBnClickedRadio20s)
	ON_BN_CLICKED(IDC_RADIO_25S, &CMenuDefinitionUneSequence::OnBnClickedRadio25s)
	ON_BN_CLICKED(IDC_RADIO_30S, &CMenuDefinitionUneSequence::OnBnClickedRadio30s)
	ON_BN_CLICKED(IDC_RADIO_AUTRES, &CMenuDefinitionUneSequence::OnBnClickedRadioAutres)
	ON_BN_CLICKED(IDC_CHECK1, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK2, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK3, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK4, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK5, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK6, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK7, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK8, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK9, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK10, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK11, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_CHECK12, &CMenuDefinitionUneSequence::OnBnClickedCheck)
	ON_BN_CLICKED(IDC_RADIO_1S, &CMenuDefinitionUneSequence::OnBnClickedRadio1s)
	ON_BN_CLICKED(IDC_RADIO_2S, &CMenuDefinitionUneSequence::OnBnClickedRadio2s)
	ON_BN_CLICKED(IDC_RADIO_3S, &CMenuDefinitionUneSequence::OnBnClickedRadio3s)
	ON_BN_CLICKED(IDC_RADIO_4S, &CMenuDefinitionUneSequence::OnBnClickedRadio4s)
	ON_BN_CLICKED(IDC_RADIO_5S, &CMenuDefinitionUneSequence::OnBnClickedRadio5s)
	ON_BN_CLICKED(IDC_RADIO_10S, &CMenuDefinitionUneSequence::OnBnClickedRadio10s)
	ON_BN_CLICKED(IDC_RADIO_15S, &CMenuDefinitionUneSequence::OnBnClickedRadio15s)
	ON_BN_CLICKED(IDC_RADIO_20S, &CMenuDefinitionUneSequence::OnBnClickedRadio20s)
	ON_BN_CLICKED(IDC_RADIO_25S, &CMenuDefinitionUneSequence::OnBnClickedRadio25s)
	ON_BN_CLICKED(IDC_RADIO_30S, &CMenuDefinitionUneSequence::OnBnClickedRadio30s)
	ON_BN_CLICKED(IDC_RADIO_AUTRES, &CMenuDefinitionUneSequence::OnBnClickedRadioAutres)
	ON_BN_CLICKED(IDC_BUTTON_ETAPE_SUIVANTE, &CMenuDefinitionUneSequence::OnBnClickedButtonEtapeSuivante)
	ON_BN_CLICKED(IDC_BUTTON_ABANDON_UNE_SEQUENCE, &CMenuDefinitionUneSequence::OnBnClickedButtonAbandonUneSequence)
END_MESSAGE_MAP()



void CMenuDefinitionUneSequence::InitBoutonsEsclaves()
{
	int i;

	BoutonEsclaveBitMapOFF.LoadBitmap(IDB_BOUTON_ESCLAVE_ETEINT);

	for (i = 0; i < NB_MAXI_BOUTONS_ESCLAVES; i++)
	{
		BoutonEsclaveBitMapON[i].LoadBitmap(MFC_IDB_1erBOUTONESCLAVE + i);
		BoutonEsclave[i].SetBitmap((HBITMAP)BoutonEsclaveBitMapOFF.GetSafeHandle());
		BoutonEsclave[i].SetCheck(0);

	}
}


void CMenuDefinitionUneSequence::AfficheBoutonsEsclaves()
{
	int i;
	unsigned int espacement = (750 - 100 - (30 * NB_BOUTONS_ESCLAVES)) / (NB_BOUTONS_ESCLAVES - 1);

	for (i = 0; i < NB_BOUTONS_ESCLAVES; i++)
	{
		BoutonEsclave[i].MoveWindow(50 + ((30 + espacement) * i), 200, 50, 50, 1);
		BoutonEsclave[i].ShowWindow(SW_SHOW);
	}
}



BOOL CMenuDefinitionUneSequence::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuDefinitionUneSequence.SetBackgroundImage(IDB_FDEFINITIONUNESEQUENCE);
	BoutonEnregistrerUneSequence.EnableWindowsTheming(FALSE);
	BoutonEnregistrerUneSequence.SetFaceColor(ORANGE_CLAIR);
	BoutonAbandonUneSequence.EnableWindowsTheming(FALSE);
	BoutonAbandonUneSequence.SetFaceColor(ORANGE_CLAIR);
	BoutonSimulerSequence.EnableWindowsTheming(FALSE);
	BoutonSimulerSequence.SetFaceColor(JAUNE);
	BoutonEtapeSuivante.EnableWindowsTheming(FALSE);
	BoutonEtapeSuivante.SetFaceColor(JAUNE);

	InitBoutonsEsclaves();
	AfficheBoutonsEsclaves();

	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_1S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_2S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_3S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_4S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_5S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_10S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_15S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_20S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_25S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_30S)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_RADIO_AUTRES)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_STATIC_TEMPS)), L"aucun", L"aucun");

	TempsEdit.SetCueBanner(_T("Temps"));
	TempsEdit.ShowWindow(SW_HIDE);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuDefinitionUneSequence::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC
	int IDControleur = pWnd->GetDlgCtrlID();
	
	if (nCtlColor == CTLCOLOR_STATIC)  // tous les static mais pas les radio
	{
		switch (IDControleur) 
		{
		case IDC_RADIO_1S:
		case IDC_RADIO_2S:
		case IDC_RADIO_3S:
		case IDC_RADIO_4S:
		case IDC_RADIO_5S:
		case IDC_RADIO_10S:
		case IDC_RADIO_15S:
		case IDC_RADIO_20S:
		case IDC_RADIO_25S:
		case IDC_RADIO_30S:
		case IDC_RADIO_AUTRES:
			pDC->SetTextColor(JAUNE);
			pDC->SetBkColor(NOIR);
			break;
		default:
			pDC->SetTextColor(BLANC);
			pDC->SetBkMode(OPAQUE);
			pDC->SetBkColor(NOIR);
			break;
		}
	}
	
	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuDefinitionUneSequence::OnBnClickedCheck()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle

	int i;
	UINT selectionBoutonEsclave;

	for (i = 0; i < NB_BOUTONS_ESCLAVES; i++)
	{
		selectionBoutonEsclave = BoutonEsclave[i].GetState();
		if ((selectionBoutonEsclave & BST_CHECKED) != 0)
		{
			BoutonEsclave[i].SetBitmap((HBITMAP)BoutonEsclaveBitMapON[i].GetSafeHandle());
			if (BoutonEsclaveActif < NB_MAXI_BOUTONS_ESCLAVES)
			{
				BoutonEsclave[BoutonEsclaveActif].SetBitmap((HBITMAP)BoutonEsclaveBitMapOFF.GetSafeHandle());
				BoutonEsclave[BoutonEsclaveActif].SetCheck(0);
			}
			BoutonEsclaveActif = i;
		}
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio1s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps1s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio2s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps2s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio3s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps3s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio4s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps4s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio5s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps5s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio10s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps10s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio15s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps15s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio20s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps20s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio25s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps25s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadio30s()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTemps30s.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedRadioAutres()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	if (BoutonTempsAutres.GetCheck() == 1)
	{
		TempsEdit.ShowWindow(SW_SHOW);
	}
	else
	{
		TempsEdit.ShowWindow(SW_HIDE);
	}
}


void CMenuDefinitionUneSequence::OnBnClickedButtonEtapeSuivante()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	NbreBoutonEtape;

	CString textEtape;
	textEtape.Format(_T("%d"), NbreEtape);

	StaticEtape.SetWindowTextW(L"Etape numero " + textEtape);
	NbreEtape++;
}


void CMenuDefinitionUneSequence::OnBnClickedButtonAbandonUneSequence()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuDefinitionUneSequence.ShowWindow(SW_HIDE);
	g_MenuDefinitionSequences.ShowWindow(SW_SHOW);
}