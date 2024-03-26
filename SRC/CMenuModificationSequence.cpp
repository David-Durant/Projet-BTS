// CMenuModificationSequence.cpp : fichier d'implémentation
//

#include "pch.h"
#include "RMS.h"
#include "CMenuModificationSequence.h"
#include "afxdialogex.h"
#include "Globales.h"
#include "Constantes.h"

// boîte de dialogue de CMenuModificationSequence

IMPLEMENT_DYNAMIC(CMenuModificationSequence, CDialogEx)

CMenuModificationSequence::CMenuModificationSequence(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MENU_MODIFICATION_SEQUENCE, pParent)
{

}

CMenuModificationSequence::~CMenuModificationSequence()
{
}

void CMenuModificationSequence::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTE_CHOISIR_SEQUENCE_MS, ListeChoisirSequenceMS);
	DDX_Control(pDX, IDC_LISTE_CHOISIR_ETAPE_MS, ListeChoisirEtapeMS);
	DDX_Control(pDX, IDC_BUTTON_RETOUR_MS, BoutonRetourMS);
	DDX_Control(pDX, IDC_BUTTON_EFFACER_MS, BoutonEffacerMS);
	DDX_Control(pDX, IDC_BUTTON_ENREGISTRER_MS, BoutonEnregistrerMS);
	DDX_Control(pDX, IDC_EDIT_NUMERO_BOUTON, EditNumeroBouton);
	DDX_Control(pDX, IDC_EDIT_DUREE, EditDuree);
	DDX_Control(pDX, IDC_STATIC_CHOISIR_ETAPE_MS, StaticEtapeMS);
	DDX_Control(pDX, IDC_STATIC_NUMERO_BOUTON, StaticNumeroBoutonMS);
	DDX_Control(pDX, IDC_STATIC_DUREE, StaticDureeMS);
}


BEGIN_MESSAGE_MAP(CMenuModificationSequence, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_RETOUR_MS, &CMenuModificationSequence::OnBnClickedButtonRetourMs)
	ON_BN_CLICKED(IDC_BUTTON_EFFACER_MS, &CMenuModificationSequence::OnBnClickedButtonEffacerMs)
	ON_BN_CLICKED(IDC_BUTTON_ENREGISTRER_MS, &CMenuModificationSequence::OnBnClickedButtonEnregistrerMs)
	ON_CBN_SELENDOK(IDC_LISTE_CHOISIR_SEQUENCE_MS, &CMenuModificationSequence::OnCbnSelendokListeChoisirSequenceMs)
	ON_CBN_SELENDOK(IDC_LISTE_CHOISIR_ETAPE_MS, &CMenuModificationSequence::OnCbnSelendokListeChoisirEtapeMs)
END_MESSAGE_MAP()


// gestionnaires de messages de CMenuModificationSequence

BOOL CMenuModificationSequence::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Ajoutez ici une initialisation supplémentaire
	g_MenuModificationSequence.SetBackgroundImage(IDB_FMODIFICATIONSEQUENCE);
	BoutonRetourMS.EnableWindowsTheming(FALSE);
	BoutonRetourMS.SetFaceColor(ORANGE_CLAIR);
	BoutonEffacerMS.EnableWindowsTheming(FALSE);
	BoutonEffacerMS.SetFaceColor(JAUNE);
	BoutonEnregistrerMS.EnableWindowsTheming(FALSE);
	BoutonEnregistrerMS.SetFaceColor(JAUNE);

	ListeChoisirSequenceMS.SetCueBanner(_T("sequence x"));
	ListeChoisirSequenceMS.AddString(_T("sequence 1"));
	ListeChoisirSequenceMS.AddString(_T("sequence 2"));
	ListeChoisirSequenceMS.AddString(_T("sequence 3"));
	ListeChoisirSequenceMS.AddString(_T("sequence 4"));
	ListeChoisirSequenceMS.AddString(_T("sequence 5"));
	ListeChoisirSequenceMS.AddString(_T("sequence 6"));

	ListeChoisirEtapeMS.SetCueBanner(_T("etape x"));
	ListeChoisirEtapeMS.AddString(_T("etape 1"));
	ListeChoisirEtapeMS.AddString(_T("etape 2"));
	ListeChoisirEtapeMS.AddString(_T("etape 3"));
	ListeChoisirEtapeMS.AddString(_T("etape 4"));
	ListeChoisirEtapeMS.AddString(_T("etape 5"));
	ListeChoisirEtapeMS.AddString(_T("etape 6"));

	EditNumeroBouton.SetCueBanner(_T("x"));
	EditDuree.SetCueBanner(_T("(Secondes)"));

	ListeChoisirEtapeMS.ShowWindow(SW_HIDE);
	EditNumeroBouton.ShowWindow(SW_HIDE);
	EditDuree.ShowWindow(SW_HIDE);
	BoutonEffacerMS.ShowWindow(SW_HIDE);
	BoutonEnregistrerMS.ShowWindow(SW_HIDE);
	StaticDureeMS.ShowWindow(SW_HIDE);
	StaticEtapeMS.ShowWindow(SW_HIDE);
	StaticNumeroBoutonMS.ShowWindow(SW_HIDE);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION : les pages de propriétés OCX devraient retourner FALSE
}

HBRUSH CMenuModificationSequence::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Modifier ici les attributs du DC
	switch (pWnd->GetDlgCtrlID())
	{
	case IDC_STATIC_CHOISIR_SEQUENCE_MS:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	case IDC_STATIC_CHOISIR_ETAPE_MS:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	case IDC_STATIC_NUMERO_BOUTON:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	case IDC_STATIC_DUREE:
		pDC->SetTextColor(ORANGE_CLAIR);
		break;
	default:
		pDC->SetTextColor(NOIR);
		break;
	}

	// TODO:  Retourner un autre pinceau si le pinceau par défaut n'est pas souhaité
	return hbr;
}



void CMenuModificationSequence::OnBnClickedButtonRetourMs()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	ListeChoisirEtapeMS.ShowWindow(SW_HIDE);
	EditNumeroBouton.ShowWindow(SW_HIDE);
	EditDuree.ShowWindow(SW_HIDE);
	BoutonEffacerMS.ShowWindow(SW_HIDE);
	BoutonEnregistrerMS.ShowWindow(SW_HIDE);
	StaticDureeMS.ShowWindow(SW_HIDE);
	StaticEtapeMS.ShowWindow(SW_HIDE);
	StaticNumeroBoutonMS.ShowWindow(SW_HIDE);

	g_MenuModificationSequence.ShowWindow(SW_HIDE);
	g_MenuDefinitionSequences.ShowWindow(SW_SHOW);
}


void CMenuModificationSequence::OnBnClickedButtonEffacerMs()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	EditNumeroBouton.ShowWindow(SW_HIDE);
	EditDuree.ShowWindow(SW_HIDE);
	BoutonEffacerMS.ShowWindow(SW_HIDE);
	BoutonEnregistrerMS.ShowWindow(SW_HIDE);
	StaticDureeMS.ShowWindow(SW_HIDE);
	StaticNumeroBoutonMS.ShowWindow(SW_HIDE);
}


void CMenuModificationSequence::OnBnClickedButtonEnregistrerMs()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
}


void CMenuModificationSequence::OnCbnSelendokListeChoisirSequenceMs()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	StaticEtapeMS.ShowWindow(SW_SHOW);
	ListeChoisirEtapeMS.ShowWindow(SW_SHOW);
}


void CMenuModificationSequence::OnCbnSelendokListeChoisirEtapeMs()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	EditNumeroBouton.ShowWindow(SW_SHOW);
	EditDuree.ShowWindow(SW_SHOW);
	BoutonEffacerMS.ShowWindow(SW_SHOW);
	BoutonEnregistrerMS.ShowWindow(SW_SHOW);
	StaticDureeMS.ShowWindow(SW_SHOW);
	StaticNumeroBoutonMS.ShowWindow(SW_SHOW);
}
