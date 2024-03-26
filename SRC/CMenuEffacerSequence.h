#pragma once


// boîte de dialogue de CMenuEffacerSequence

class CMenuEffacerSequence : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuEffacerSequence)

private:
	CComboBox ListeEffacerSequence;
	CMFCButton BoutonEffacerSequence, BoutonAbandonES;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonAbandonEs();
	afx_msg void OnBnClickedButtonEffacerSequence();
	DECLARE_MESSAGE_MAP()

public:
	CMenuEffacerSequence(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuEffacerSequence();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_EFFACER_SEQUENCE };
#endif
};
