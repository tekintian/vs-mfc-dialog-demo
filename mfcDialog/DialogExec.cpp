// DialogExec.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mfcDialog.h"
#include "DialogExec.h"
#include "afxdialogex.h"


// CDialogExec �Ի���

IMPLEMENT_DYNAMIC(CDialogExec, CDialogEx)

CDialogExec::CDialogExec(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialogExec::IDD, pParent)
{

}

CDialogExec::~CDialogExec()
{
}

void CDialogExec::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogExec, CDialogEx)
END_MESSAGE_MAP()


// CDialogExec ��Ϣ�������
