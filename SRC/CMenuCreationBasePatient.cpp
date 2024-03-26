// CMenuCreationBasePatient.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuCreationBasePatient.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"


// boîte de dialogue de CMenuCreationBasePatient

IMPLEMENT_DYNAMIC(CMenuCreationBasePatient, CDialogEx)

CMenuCreationBasePatient::CMenuCreationBasePatient(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_CREATION_BASE_PATIENT, pParent)
{

}

CMenuCreationBasePatient::~CMenuCreationBasePatient()
{
}

void CMenuCreationBasePatient::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_ABANDON_CBP, BoutonAbandonCBP);
	DDX_Control(pDX, IDC_BUTTON_CREER, BoutonCreer);
	DDX_Control(pDX, IDC_EDIT_IDENTIFIANT_BDD, EditIdentifiantBDD);
	DDX_Control(pDX, IDC_EDIT_MDP_BDD, EditMDPBDD);
}


BEGIN_MESSAGE_MAP(CMenuCreationBasePatient, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_ABANDON_CBP, &CMenuCreationBasePatient::OnBnClickedButtonAbandonCbp)
	ON_BN_CLICKED(IDC_BUTTON_CREER, &CMenuCreationBasePatient::OnBnClickedButtonCreer)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuCreationBasePatient


BOOL CMenuCreationBasePatient::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuCreationBasePatient.SetBackgroundImage(IDB_FCREATIONBASEPATIENT);
	BoutonAbandonCBP.EnableWindowsTheming(FALSE);
	BoutonAbandonCBP.SetFaceColor(ORANGE_CLAIR);
	BoutonCreer.EnableWindowsTheming(FALSE);
	BoutonCreer.SetFaceColor(ORANGE_CLAIR);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}


HBRUSH CMenuCreationBasePatient::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC

	switch (pWnd->GetDlgCtrlID())
	{
	case IDC_STATIC_IDENTIFIANT_BDD:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	case IDC_STATIC_MDP_BDD:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	default:
		pDC->SetTextColor(NOIR);
		break;
	}

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}


void CMenuCreationBasePatient::OnBnClickedButtonAbandonCbp()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	g_MenuCreationBasePatient.ShowWindow(SW_HIDE);
	g_MenuParametrages.ShowWindow(SW_SHOW);
}


void CMenuCreationBasePatient::OnBnClickedButtonCreer()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle

	EditIdentifiantBDD.GetWindowTextW(TexteID);
	EditMDPBDD.GetWindowTextW(TexteMDP);

	if (g_Bdd.BDDRecupEstConnecte() == true)		// si on est connecte il faut se deconnecte pour utiliser l'admin
		g_Bdd.BDDDeconnexion();

	if (g_Bdd.BDDConnexionAdmin(TexteID, TexteMDP) == true)	// connexion bdd utilisateur root ou admin
	{
		g_Bdd.BDDCreerTraitement();
		
		g_Bdd.BDDCreerBaseRMS();
		g_Bdd.BDDDeconnexion();

		if (g_Bdd.BDDConnexion() == false)
		{
			// dialogbox ou messagebox avec messg erreur bdd RMS/CquiLeBoss
			MessageBoxW(L"Erreur connexion BDD", L"Reeducation Membres Superieurs", MB_OK);
		}
	}
	else
	{
		//cas ou la connexion ne fonctionne pas avec le compte root/admin et le mot de passe rentrer dans le menu
		//Messagebox ou dialogbox genre erreur mauvais identifiant root ou admin de la bdd
		MessageBoxW(L"Erreur mauvais identifiant ID/MTP root entree", L"Reeducation Membres Superieurs", MB_OK);
	}
}
