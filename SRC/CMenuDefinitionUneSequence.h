#pragma once

#include "Constantes.h"

// boîte de dialogue de CMenuDefinitionUneSequence

class CMenuDefinitionUneSequence : public CDialogEx
{
	DECLARE_DYNAMIC(CMenuDefinitionUneSequence)

private:
	CMFCButton BoutonEnregistrerUneSequence, BoutonAbandonUneSequence, BoutonSimulerSequence, BoutonEtapeSuivante;
	CButton BoutonTemps1s, BoutonTemps2s, BoutonTemps3s, BoutonTemps4s, BoutonTemps5s, BoutonTemps10s, BoutonTemps15s, BoutonTemps20s, BoutonTemps25s, BoutonTemps30s, BoutonTempsAutres;
	CStatic StaticTemps, StaticEtape;
	CEdit TempsEdit;
	CBitmap BoutonEsclaveBitMapOFF;
	CBitmap BoutonEsclaveBitMapON[NB_MAXI_BOUTONS_ESCLAVES];
	CButton BoutonEsclave[NB_MAXI_BOUTONS_ESCLAVES];
	int BoutonEsclaveActif = NB_MAXI_BOUTONS_ESCLAVES;
	unsigned int NbreEtape = 2;
	unsigned int NbreBoutonEtape = NB_BOUTONS_ESCLAVES;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	void InitBoutonsEsclaves();
	void AfficheBoutonsEsclaves();
	DECLARE_MESSAGE_MAP()

public:
	CMenuDefinitionUneSequence(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CMenuDefinitionUneSequence();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedRadio1s();
	afx_msg void OnBnClickedRadio2s();
	afx_msg void OnBnClickedRadio3s();
	afx_msg void OnBnClickedRadio4s();
	afx_msg void OnBnClickedRadio5s();
	afx_msg void OnBnClickedRadio10s();
	afx_msg void OnBnClickedRadio15s();
	afx_msg void OnBnClickedRadio20s();
	afx_msg void OnBnClickedRadio25s();
	afx_msg void OnBnClickedRadio30s();
	afx_msg void OnBnClickedRadioAutres();
	afx_msg void OnBnClickedCheck();
	afx_msg void OnBnClickedButtonEtapeSuivante();
	afx_msg void OnBnClickedButtonAbandonUneSequence();

	// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MENU_DEFINITION_UNE_SEQUENCE };
#endif
};
