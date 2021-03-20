// DialogShow.cpp : 实现文件
//

#include "stdafx.h"
#include "mfcDialog.h"
#include "DialogShow.h"
#include "afxdialogex.h"


// CDialogShow 对话框

IMPLEMENT_DYNAMIC(CDialogShow, CDialogEx)

CDialogShow::CDialogShow(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialogShow::IDD, pParent)
{

}

CDialogShow::~CDialogShow()
{
}

void CDialogShow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogShow, CDialogEx)
END_MESSAGE_MAP()


// CDialogShow 消息处理程序
