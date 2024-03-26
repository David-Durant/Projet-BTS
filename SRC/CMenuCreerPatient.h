#pragma once


// boîte de dialogue de CMenuCreerPatient

class CMenuCreerPatient : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuCreerPatient)

private:
	CMFCButton BoutonCreerPatient_CP, BoutonAbandon;
	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuCreerPatient(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuCreerPatient();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButtonAbandon();
	afx_msg void OnBnClickedButtonCreerPatientPCp();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_CREER_PATIENT };
#endif
};
