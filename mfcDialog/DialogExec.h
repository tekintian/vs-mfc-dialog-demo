#pragma once


// CDialogExec 对话框

class CDialogExec : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogExec)

public:
	CDialogExec(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialogExec();

// 对话框数据
	enum { IDD = IDD_EXEC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
