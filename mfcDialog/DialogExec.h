#pragma once


// CDialogExec �Ի���

class CDialogExec : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogExec)

public:
	CDialogExec(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogExec();

// �Ի�������
	enum { IDD = IDD_EXEC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
