#pragma once


// CDialogShow �Ի���

class CDialogShow : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogShow)

public:
	CDialogShow(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogShow();

// �Ի�������
	enum { IDD = IDD_MFCDIALOG_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
