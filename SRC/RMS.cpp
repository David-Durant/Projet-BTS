
// RMS.cpp : définit les comportements de classe de l'application.
//

#include "pch.h"
#include "framework.h"
#include "RMS.h"
#include "RMS_Dlg.h"
#include "Globales.h"
#include "Constantes.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRMSApp

BEGIN_MESSAGE_MAP(CRMSApp, CWinApp)
END_MESSAGE_MAP()


// Construction de CRMSApp

CRMSApp::CRMSApp()
{
	// prend en charge le Gestionnaire de redémarrage
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: ajoutez ici du code de construction,
	// Placez toutes les initialisations significatives dans InitInstance
}


// Le seul et unique objet CRMSApp

CRMSApp theApp;


// Initialisation de CRMSApp

BOOL CRMSApp::InitInstance()
{
	// InitCommonControlsEx() est requis sur Windows XP si le manifeste de l'application
	// spécifie l'utilisation de ComCtl32.dll version 6 ou ultérieure pour activer les
	// styles visuels.  Dans le cas contraire, la création de fenêtres échouera.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// À définir pour inclure toutes les classes de contrôles communs à utiliser
	// dans votre application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	// Créer le gestionnaire de shell, si la boîte de dialogue contient
	// des contrôles d'arborescence ou de liste de shell.
	CShellManager *pShellManager = new CShellManager;

	// Active le gestionnaire visuel "natif Windows" pour activer les thèmes dans les contrôles MFC
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// Initialisation standard
	// Si vous n'utilisez pas ces fonctionnalités et que vous souhaitez réduire la taille
	// de votre exécutable final, vous devez supprimer ci-dessous
	// les routines d'initialisation spécifiques dont vous n'avez pas besoin.
	// Changez la clé de Registre sous laquelle nos paramètres sont enregistrés
	// TODO: modifiez cette chaîne avec des informations appropriées,
	// telles que le nom de votre société ou organisation
	SetRegistryKey(_T("Applications locales générées par AppWizard"));

	CRMSDlg dlg;

	//connexion à la base de données rms
	if (g_Bdd.BDDConnexion() == false)
	{
		g_BddDlg.Create(IDD_DIALOG_BDD);
		g_BddDlg.TexteErreur(g_Bdd.BDDRecupMessageErreur());
		g_BddDlg.ShowWindow(SW_SHOW);
		g_BddDlg.SetWindowPos(NULL, 0, 0, 530, 390, SWP_SHOWWINDOW);
	}
	m_pMainWnd = (CWnd*) &dlg;
	dlg.DoModal();
	m_pMainWnd = NULL;

	// Supprimer le gestionnaire de shell créé ci-dessus.
	if (pShellManager != nullptr)
	{
		delete pShellManager;
	}

#if !defined(_AFXDLL) && !defined(_AFX_NO_MFC_CONTROLS_IN_DIALOGS)
	ControlBarCleanUp();
#endif

	// Lorsque la boîte de dialogue est fermée, retourner FALSE afin de quitter
	//  l'application, plutôt que de démarrer la pompe de messages de l'application.
	return FALSE;
}

