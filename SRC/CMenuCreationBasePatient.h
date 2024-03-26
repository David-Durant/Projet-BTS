#pragma once
#include <atlstr.h>
#include <string>

// boîte de dialogue de CMenuCreationBasePatient

class CMenuCreationBasePatient : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuCreationBasePatient)

private:
	CMFCButton BoutonAbandonCBP, BoutonCreer;
	CEdit EditIdentifiantBDD, EditMDPBDD;
	CString TexteID, TexteMDP, MessageErreurConnexion;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuCreationBasePatient(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuCreationBasePatient();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButtonAbandonCbp();
	afx_msg void OnBnClickedButtonCreer();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_CREATION_BASE_PATIENT };
#endif
};
