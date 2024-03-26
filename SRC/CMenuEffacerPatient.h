#pragma once


// boîte de dialogue de CMenuEffacerPatient

class CMenuEffacerPatient : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuEffacerPatient)

private:
	CComboBox ListeChoisirPatientEP;
	CMFCButton BoutonAbandonEP, BoutonEffacerPatient;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButtonEffacerPatient();
	afx_msg void OnBnClickedButtonAbandonEp();
	DECLARE_MESSAGE_MAP()

public:
	CMenuEffacerPatient(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuEffacerPatient();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_EFFACER_PATIENT };
#endif
};
