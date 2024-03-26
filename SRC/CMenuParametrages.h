#pragma once


// boîte de dialogue de CMenuParametrages

class CMenuParametrages : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuParametrages)

private:
	CMFCButton BoutonParametrerMateriels, BoutonTesterMateriels, BoutonDefinirSequences, BoutonCreationBasePatients, BoutonSauvegarderBasePatients, BoutonMenuPrincipalP;


protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuParametrages(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuParametrages();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonParametrerMateriels();
	afx_msg void OnBnClickedButtonTesterMateriels();
	afx_msg void OnBnClickedButtonCreationBasePatients();
	afx_msg void OnBnClickedButtonSauvegarderBasePatients();
	afx_msg void OnBnClickedButtonRetourMenuPrincipalP();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_PARAMETRAGES };
#endif
};
