#pragma once


// boîte de dialogue de CMenuGestionPatients

class CMenuGestionPatients : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuGestionPatients)

private:
	CMFCButton BoutonCreerPatient, BoutonHistoriqueResultats, BoutonEffacerPatient, BoutonMenuPrincipalGP;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuGestionPatients(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuGestionPatients();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonCreerPatient();
	afx_msg void OnBnClickedButtonHistoriqueResultats();
	afx_msg void OnBnClickedButtonEffacerPatient();
	afx_msg void OnBnClickedButtonRetourMenuPrincipalGp();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_GESTION_PATIENTS };
#endif	
};
