#pragma once


// boîte de dialogue de CMenuSauvegarderBasePatient

class CMenuSauvegarderBasePatient : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuSauvegarderBasePatient)

private:
	CMFCButton BoutonAdandonSBP;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuSauvegarderBasePatient(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuSauvegarderBasePatient();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButtonAbandonSbp();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_SAUVEGARDER_BASE_PATIENT };
#endif
};
