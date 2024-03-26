#pragma once


// boîte de dialogue de CMenuHistoriqueResultats

class CMenuHistoriqueResultats : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuHistoriqueResultats)

private:
	CMFCButton BoutonRetourHR, BoutonAfficherHistorique;
	CComboBox ListePatientsHR;
	CStatic StaticHistorique;
	CEdit EditHistorique;
	//CBrush SB_Blanc, SB_Noir;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuHistoriqueResultats(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuHistoriqueResultats();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButtonRetourHr();
	afx_msg void OnBnClickedButtonAfficherHistorique();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_HISTORIQUE_RESULTATS };
#endif
};
