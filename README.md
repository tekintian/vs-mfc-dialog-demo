# Visual Studio MFC Dialog demo

对话框的标题  caption

单击后找到属性对话框的 Caption选项修改即可

双击后直接给对象添加处理事件

 

##对话框创建

新建项目 visual c++ -> MFC -> MFC应用程序--> 下一步--> 基于对话框 -->... 完成

创建完成后进入资源视图 2种方式  1种在视图-->其他窗口 -->资源视图 进入;

另外一种直接在 解决方案管理器 --> 资源文件 里面点击 .rc文件进入



为某个对话框添加处理类, 这里的对话框相当于QT的 ui; 处理类相当于 qt的 .h和.cpp文件

在包含的时候如果名称以 C开头的话, 包含的时候可以省略 C  如这里的 CDialogExec



包含的时候需要省略开头的C  #include "DialogExec.h"



实例化的时候就是你的类名  CDialogExec 不可省略 C



## 模态对话框

使用对象 .DoModal() 即可显示模态对话框



~~~cpp
#include "DialogExec.h"

//模态对话框显示
void CmfcDialogDlg::OnBnClickedButton1()
{
	CDialogExec dlg;
	//模态方式弹出对话框
	dlg.DoModal();
}
~~~





## 非模态对话框

非模态对话框 显示方式为先将对话框 CDialogShow定义为成员属性 cdls 然后使用对话框的ID通过 create 创建后再 showWindow展示窗口

注意这里的create同一个对象只能初始化一次,所以 必须将其放到专门的类初始化方法OnInitDialog() 中



**.h头文件定义**

~~~h
#include "DialogShow.h"
//...other

protected:
  CDialogShow cdls;//非模态对话框属性定义

~~~



**.cpp源码实现**

~~~cpp
BOOL CmfcDialogDlg::OnInitDialog()
{
  //...

  // TODO: 在此添加额外的初始化代码

  //通过资源ID 资源视图中的对话框名称 IDD_SHOW 创建窗口

  cdls.Create(IDD_SHOW);

  //...

}

//显示非模态对话框
void CmfcDialogDlg::OnBnClickedButton2()
{
	cdls.ShowWindow(SW_SHOWNORMAL); //显示窗口
}
~~~



 









