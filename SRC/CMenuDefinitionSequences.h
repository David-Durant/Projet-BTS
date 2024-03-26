#pragma once


// boîte de dialogue de CMenuDefinitionSequences

class CMenuDefinitionSequences : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuDefinitionSequences)

private:
	CMFCButton BoutonMenuPrincipalDS, BoutonDefinitionUneSequence, BoutonModificationSequence, BoutonEffacementSequence;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CMenuDefinitionSequences(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuDefinitionSequences();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonRetourMenuPrincipalDs();
	afx_msg void OnBnClickedButtonDefinitionUneSequence();
	afx_msg void OnBnClickedButtonEffacementSequence();
	afx_msg void OnBnClickedButtonModificationSequence();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_DEFINITION_SEQUENCES };
#endif
};
