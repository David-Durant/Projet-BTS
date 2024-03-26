#pragma once
#include <string>

// boîte de dialogue de CBddDlg

class CBddDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CBddDlg)

private:
	CEdit CEditBddDlg;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	DECLARE_MESSAGE_MAP()

public:
	CBddDlg(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CBddDlg();
	virtual BOOL OnInitDialog();
	void TexteErreur(CString p_t);

	// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_BDD };
#endif
};
