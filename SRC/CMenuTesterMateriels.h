#pragma once


// boîte de dialogue de CMenuTesterMateriels

class CMenuTesterMateriels : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuTesterMateriels)

private:
	CMFCButton BoutonAdandonTM;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuTesterMateriels(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuTesterMateriels();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButtonAbandonTm();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_TESTER_MATERIELS };
#endif
};
