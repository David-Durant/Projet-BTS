#pragma once


// boîte de dialogue de CMenuExecutionSeance

class CMenuExecutionSeance : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuExecutionSeance)

private:
	CMFCButton BoutonDebuterSeance, BoutonMenuPrincipalPS;
	CComboBox ListeChoisirPatientES, ListeChoisirSequence;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuExecutionSeance(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuExecutionSeance();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonDebuterSeance();
	afx_msg void OnBnClickedButtonRetourMenuPrincipalPs();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_EXECUTION_SEANCE };
#endif
};
