// CMenuHistoriqueResultats.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuHistoriqueResultats.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuHistoriqueResultats

IMPLEMENT_DYNAMIC(CMenuHistoriqueResultats, CDialogEx)

CMenuHistoriqueResultats::CMenuHistoriqueResultats(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_HISTORIQUE_RESULTATS, pParent)
{

}

CMenuHistoriqueResultats::~CMenuHistoriqueResultats()
{
}

void CMenuHistoriqueResultats::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_RETOUR_HR, BoutonRetourHR);
	DDX_Control(pDX, IDC_BUTTON_AFFICHER_HISTORIQUE, BoutonAfficherHistorique);
	DDX_Control(pDX, IDC_LISTE_CHOISIR_PATIENTS_HR, ListePatientsHR);
	DDX_Control(pDX, IDC_STATIC_HISTORIQUE, StaticHistorique);
	DDX_Control(pDX, IDC_EDIT_HISTORIQUE, EditHistorique);
}


BEGIN_MESSAGE_MAP(CMenuHistoriqueResultats, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_AFFICHER_HISTORIQUE, &CMenuHistoriqueResultats::OnBnClickedButtonAfficherHistorique)
	ON_BN_CLICKED(IDC_BUTTON_RETOUR_HR, &CMenuHistoriqueResultats::OnBnClickedButtonRetourHr)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuHistoriqueResultats


BOOL CMenuHistoriqueResultats::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuHistoriqueResultats.SetBackgroundImage(IDB_FHISTORIQUERESULTATS);
	BoutonRetourHR.EnableWindowsTheming(FALSE);
	BoutonRetourHR.SetFaceColor(ORANGE_CLAIR);
	BoutonAfficherHistorique.EnableWindowsTheming(FALSE);
	BoutonAfficherHistorique.SetFaceColor(ORANGE_CLAIR);

	/*SB_Blanc.CreateSolidBrush(BLANC);
	SB_Noir.CreateSolidBrush(NOIR);*/

	SetWindowTheme(*(this->GetDlgItem(IDC_STATIC_HISTORIQUE)), L"aucun", L"aucun");
	SetWindowTheme(*(this->GetDlgItem(IDC_EDIT_HISTORIQUE)), L"aucun", L"aucun");

	ListePatientsHR.SetCueBanner(_T("Choisir un patient"));
	ListePatientsHR.AddString(_T("patient 1"));
	ListePatientsHR.AddString(_T("patient 2"));
	ListePatientsHR.AddString(_T("patient 3"));
	ListePatientsHR.AddString(_T("patient 4"));
	ListePatientsHR.AddString(_T("patient 5"));
	ListePatientsHR.AddString(_T("patient 6"));

	StaticHistorique.ShowWindow(SW_HIDE);
	EditHistorique.ShowWindow(SW_HIDE);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuHistoriqueResultats::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC
	int IDControleur = pWnd->GetDlgCtrlID();

	if (nCtlColor == CTLCOLOR_STATIC)  // tous les static mais pas les radio
	{
		switch (IDControleur)
		{
		case IDC_STATIC_CHOISIR_PATIENT_HR:
			pDC->SetTextColor(ORANGE_CLAIR);
			break;
		case IDC_EDIT_HISTORIQUE:
			pDC->SetTextColor(BLANC);
			pDC->SetBkColor(NOIR);
			break;
		default:
			pDC->SetTextColor(BLANC);
			pDC->SetBkMode(OPAQUE);
			pDC->SetBkColor(NOIR);
			break;
		}
	}

	if (nCtlColor == CTLCOLOR_EDIT)
	{
		switch (IDControleur)
		{
		case IDC_EDIT_HISTORIQUE:
			pDC->SetTextColor(BLANC);
			pDC->SetBkColor(NOIR);
			break;
		default:
			pDC->SetTextColor(BLANC);
			pDC->SetBkColor(NOIR);
			break;
		}
	}

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuHistoriqueResultats::OnBnClickedButtonAfficherHistorique()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle


	StaticHistorique.ShowWindow(SW_SHOW);
	EditHistorique.ShowWindow(SW_SHOW);
	EditHistorique.SetWindowTextW(TEXT("                                  ierpuvbqieubpurieqbvpieruvbpqievebpvibevp                               irbqveirpuvqbpiuebvqpiervbqpieurbvipqeubriqebiprubvqpiuerbviqdbvpiebvrqpiurbvpiqueevbiu\r\nqerbhvpirhqiprbveqvbbbbbbbbbbbbbbbbbbbbbbbbbbbepiqpqieeeeeeeeeeeeeeeeeeeeubvpqijbfvpjkqbpdbpriuehpiraavbnfvbwcvwhjdbiqprgfpuerpaiuhgiergtybfhbvozBOVBOiepbqgpebgpiruepubgepiugbpierugbpqieubreqgubrupugqbvepirpigveirvgqrgvpiurevgipqevgiergqveripqphvrghvqeivgqeuriqbugbqepirbgqeijbqrpqbgrigbueqiugbueqgbuerbgiqbgebvgbebivrbgiueruqbgriueqqqqqqqqbgieqgighqegbribgqpirgbqbgbveibvie\r\nrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrieeqqq\r\nuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuubncvcxnvbxcvcbvbcvbcvbcvxcbvcbvxbvcbvbcvvbcvvcvcbvxbcvnxbvxcnxbvbcxvcreitueritzuerituzpeoriutpeirutieuozptuer\r\npoirizituziezietuzietuitupazitupaituzaiutziptaupzietuitueptiauztuziptuaiutaiutpziutieutaiputiaputzipuatiaaozieuzotuzoeituzoituapoztuaziutoizeatugjdlksjgklsjlgjkdjfmgksdfjgsmkfjgdkjgkdlfjldksjgfjsldkfjgmlsdjgfkjgmskdfjgmksjgmdflgjksjdfjgsmljskmjgldkjgjsmdjg\r\nzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"));
}


void CMenuHistoriqueResultats::OnBnClickedButtonRetourHr()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuHistoriqueResultats.ShowWindow(SW_HIDE);
	g_MenuGestionPatients.ShowWindow(SW_SHOW);
}
