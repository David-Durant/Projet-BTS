#pragma once


// boîte de dialogue de CMenuParamMateriels

class CMenuParamMateriels : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuParamMateriels)

private:
	CMFCButton BoutonParamMaterielEnreg, BoutonParamMaterielAbandon;
	CEdit ValeurParamNombreBoutonEsclave;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuParamMateriels(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuParamMateriels();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonEnregParamMateriels();
	afx_msg void OnBnClickedButtonAbandonParamMateriels();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_PARAM_MATERIELS };
#endif
};
