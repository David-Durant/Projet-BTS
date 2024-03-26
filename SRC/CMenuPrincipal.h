#pragma once


// boîte de dialogue de CMenuPrincipal

class CMenuPrincipal : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuPrincipal)

private:
	CMFCButton BoutonGestionPatients, BoutonDefinitionSequences, BoutonExecutionSeance, BoutonParametrages, BoutonFinProgramme;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuPrincipal(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuPrincipal();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonGestionPatients();
	afx_msg void OnBnClickedButtonDefinitionSequences();
	afx_msg void OnBnClickedButtonExecutionSeance();
	afx_msg void OnBnClickedButtonParametrages();
	afx_msg void OnBnClickedButtonFinProgramme();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_PRINCIPAL };
#endif
};
