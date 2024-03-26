#pragma once


// boîte de dialogue de CMenuModificationSequence

class CMenuModificationSequence : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuModificationSequence)

private:
	CComboBox ListeChoisirSequenceMS, ListeChoisirEtapeMS;
	CMFCButton BoutonRetourMS, BoutonEffacerMS, BoutonEnregistrerMS;
	CEdit EditNumeroBouton, EditDuree;
	CStatic StaticEtapeMS, StaticNumeroBoutonMS, StaticDureeMS;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuModificationSequence(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuModificationSequence();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButtonRetourMs();
	afx_msg void OnBnClickedButtonEffacerMs();
	afx_msg void OnBnClickedButtonEnregistrerMs();
	afx_msg void OnCbnSelendokListeChoisirSequenceMs();
	afx_msg void OnCbnSelendokListeChoisirEtapeMs();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_MODIFICATION_SEQUENCE };
#endif
};
