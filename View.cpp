#include"DataFuncdecl.h"
#include<graphics.h>
#include<stdio.h>
#include<conio.h>//调用_get()函数
#include<stdlib.h>
#pragma warning(disable:4996)
/*
功能：
根据博客和原型图绘制首页界面，适当美化，当用户点击不同区域调用相应处理函数
参数：空
返回值：空
*/
void FirstPage()
{
	//只要进入程序就读取储存人数
	ReadInfor();
	//设置窗口大小
	initgraph(860,560);
	HWND hWnd = GetHWnd();//获取窗口名称句柄
	SetWindowText(hWnd, "学生信息管理系统");//窗口标题名     //弹出窗口  提示用户操作 用MessageBox()函数
	//鼠标操作
	MOUSEMSG m1;
	//设置当前设备图案填充和文字输出时的背景模式
	IMAGE picture1;
	//载入图片
	loadimage(&picture1, "E:\\easyx\\easyx基础\\wallhaven-g8g1xe.png", 860,560);
	//输出图片
	putimage(0, 0, &picture1);
	setbkmode(TRANSPARENT);
	//大标题
	
	char FirstTitle[20] = { "学生成绩管理系统" };

	settextstyle(60, 0, "楷体");
	setfillcolor(BLACK);
	
	outtextxy(165, 20, FirstTitle);

	//小标题
	fillrectangle(240, 250, 570, 200);
	fillrectangle(240, 350, 570, 300);
	fillrectangle(240, 450, 570, 400);
	
	setbkmode(TRANSPARENT);
	//三个选项的文字
	settextstyle(40, 0, "楷体");//设置字体样式

	//三个选项
	char FirstSelect1[20] = { "管理员操作界面" };
	char FirstSelect2[20] = { "普通用户操作界面" };
	char FirstSelect3[20] = { "退出程序" };

	settextcolor(WHITE);//设置文字颜色//需设置字体颜色 不设置默认为白色。
	outtextxy(250, 210, FirstSelect1);
	outtextxy(250, 310, FirstSelect2);
	outtextxy(325, 410, FirstSelect3);
	

	//进入主界面选择操作界面
	while (1)
	{
		m1 = GetMouseMsg();//获取鼠标操作
		if (m1.x >= 230 && m1.x <= 560 && m1.y >= 200 && m1.y <= 250)//管理员
		{
			setlinecolor(RED);
			rectangle(240, 250, 570, 200);
			if (m1.uMsg == WM_LBUTTONDOWN)
			{
				//加入管理员登录
				ShowAllInfor();
				//AdminSignIn();
			}
		}
		else if (m1.x >= 230 && m1.x <= 560 && m1.y >= 300 && m1.y <= 350)//普通用户
		{
			setlinecolor(RED);
			rectangle(240, 350, 570, 300);
			if (m1.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				CommonUserPage();
			}
		}
		else if (m1.x >= 230 && m1.x <= 560 && m1.y >= 400 && m1.y <= 450)//退出
		{
			setlinecolor(RED);
			rectangle(240, 450, 570, 400);
				if (m1.uMsg == WM_LBUTTONDOWN)
				{
					exit(0);
				}
		}
		else
		{
			setlinecolor(WHITE);
			rectangle(240, 250, 570, 200);
			rectangle(240, 350, 570, 300);
			rectangle(240, 450, 570, 400);
		}
	}
	
	_getch();//运行完等待，不闪退
	closegraph();//关闭窗口
}


/*
功能：
根据博客和原型图绘制管理员界面，适当美化，当用户点击不同区域调用相应处理函数
参数：空
返回值：空
*/
void AdminPage()
{

}


/*
功能：
根据博客和原型图绘制普通用户界面，适当美化，当用户点击不同区域调用相应处理函数
参数：空
返回值：空
*/
void CommonUserPage()
{

}


/*
功能：
根据博客和原型图绘制增删改查界面，适当美化，当用户点击不同区域调用相应处理函数
参数：空
返回值：空
*/
void AdDeSeMoPage()
{
	

}


/*
功能：
在屏幕上的对应位置打印出结构体中的每一个元素
参数：空
返回值：空
*/
void S1mplePrint()
{

}


/*
功能：
显示学生数据界面，功能按钮为按照四科成绩排序和返回，根据用户点击不同区域调用不同排序函数
参数：空
返回值：空
*/
void ShowAllInfor()
{
	//鼠标操作
	MOUSEMSG SA;
	initgraph(860, 560);
	//默认只是打印数据到屏幕上
	cleardevice();
	IMAGE picture2;
	loadimage(&picture2, "E:\\easyx\\easyx基础\\wallhaven.jpg", 860, 560);
	putimage(0, 0, &picture2);

	setfillcolor(GREEN);
	setbkmode(TRANSPARENT);

	fillrectangle(690, 90, 850, 140);
	fillrectangle(690, 190, 850, 240);
	fillrectangle(690, 290, 850, 340);
	fillrectangle(690, 390, 850, 440);
	fillrectangle(690, 590, 850, 640);

	//表头文字部分
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
		settextstyle(30, 0, "黑体");
	outtextxy(0, 0, "排名");
	outtextxy(80, 0, "学号");
	outtextxy(200, 0, "姓名");
	outtextxy(300, 0, "语文");
	outtextxy(400, 0, "数学");
	outtextxy(500, 0, "英语");
	outtextxy(600, 0, "总分");
	outtextxy(700, 0, "排序方式");
	outtextxy(700, 100, "按语文排序");
	outtextxy(700, 200, "按数学排序");
	outtextxy(700, 300, "按英语排序");
	outtextxy(700, 400, "按总分排序");

	outtextxy(740, 600, "返回");
	 
	S1mplePrint();//默认只是单纯的打印


	while (1)
	{
		SA = GetMouseMsg();
		if (SA.x >= 690 && SA.x <= 850 && SA.y >= 90 && SA.y <= 140)
		{
			//按语文排
			setlinecolor(RED);
				rectangle(690, 90, 850, 140);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				SortAcChinese();
				//刷新重新载入
				ShowAllInfor();
			}
		}
		else if (SA.x >= 690 && SA.x <= 850 && SA.y >= 190 && SA.y <= 240)
		{
			//按数学排
			setlinecolor(RED);
			rectangle(690, 190, 850, 240);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				SortAcMath();
				//刷新重新载入
				ShowAllInfor();
			}
		}
		else if (SA.x >= 690 && SA.x <= 850 && SA.y >= 290 && SA.y <= 340)
		{
			//按英语排
			setlinecolor(RED);
			rectangle(690, 290, 850, 340);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				SortAcEnglish();
				//刷新重新载入
				ShowAllInfor();
			}
		}
		else if (SA.x >= 690 && SA.x <= 850 && SA.y >= 390 && SA.y <= 440)
		{
			//按照总分排
			setlinecolor(RED);
			rectangle(690, 390, 850, 440);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				SortAcSumScore();
				//刷新重新载入
				ShowAllInfor();
			}

		}
		else if (SA.x >= 690 && SA.x <= 580 && SA.y >= 590 && SA.y <= 640)
		{
			//返回
			setlinecolor(RED);
			rectangle(690, 590, 850, 640);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				//判断从那个窗口点进来的
				if (FlagAI == 1)
				{
					AdminPage();
				}
				else if (FlagAI == -1)
				{
					CommonUserPage();
				}
			}
		}
		else
		{
			setlinecolor(WHITE);
			rectangle(690, 90, 850, 140);
			rectangle(690, 190, 850, 240);
			rectangle(690, 290, 850, 340);
			rectangle(690, 390, 850, 440);
			rectangle(690, 590, 850, 640);

		}
		
		
	}
}





/*
功能：
打印被查找人的信息界面，用户点击返回时根据FlagFPT的值判断应该返回到那个界面
参数：Position 被查找人所在下标
返回值：空
*/
void PrintFoudInfor(int Position)
{

}




/*
功能：
修改学生信息，获取学生下标后界面上输出修改前学生成绩，之后弹出输入弹窗，用户重新输入内容，
修改后将修改的内容输出到界面，并存入文件中，用户点击返回则返回到增删改查界面
参数：空
返回值：空
*/
void ModifyStudInfor()
{

}



int main(void)
{
	FirstPage();
	return 0;
}