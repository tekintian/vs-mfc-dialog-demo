
// mfcDialogDlg.h : ͷ�ļ�
//

#pragma once

#include "DialogShow.h"

// CmfcDialogDlg �Ի���
class CmfcDialogDlg : public CDialogEx
{
// ����
public:
	CmfcDialogDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFCDIALOG_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	CDialogShow cdls;//��ģ̬�Ի������Զ���

	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();

};
