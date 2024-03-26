
// RMS_Dlg.h : fichier d'en-tête
//

#pragma once


// boîte de dialogue de CRMSDlg
class CRMSDlg : public CDialogEx
{
// Construction
public:
	CRMSDlg(CWnd* pParent = nullptr);	// constructeur standard
	afx_msg void OnClose();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IHM_PAGE_FOND };
#endif

// Implémentation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV
	// Fonctions générées de la table des messages
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
};
