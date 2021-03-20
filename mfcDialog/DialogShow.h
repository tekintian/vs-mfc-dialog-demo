#pragma once


// CDialogShow 对话框

class CDialogShow : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogShow)

public:
	CDialogShow(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialogShow();

// 对话框数据
	enum { IDD = IDD_MFCDIALOG_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
