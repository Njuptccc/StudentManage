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
	initgraph(860, 560);
	cleardevice();
	//定义第三个鼠标操作
	MOUSEMSG mouseEmsire1;


	IMAGE pictureEmsire1;
	loadimage(&pictureEmsire1, "./wallhaven-0qvp8r.jpg", 860, 560);//相对路径，记得把图片放到同一文件夹下
	putimage(0, 0, &pictureEmsire1);
	setbkmode(TRANSPARENT);


	setfillcolor(BLACK);//设备填充颜色：黑色
	setlinecolor(WHITE);//画线颜色：白色

	settextstyle(50, 0, "楷体");//字体：楷体
	outtextxy(50, 90, "普");
	outtextxy(150, 90, "通");
	outtextxy(250, 90, "用");
	outtextxy(350, 90, "户");
	outtextxy(450, 90, "操");
	outtextxy(550, 90, "作");
	outtextxy(650, 90, "界");
	outtextxy(750, 90, "面");

	setbkmode(TRANSPARENT);

	//三个选项的背景
	fillrectangle(270, 240, 580, 285);
	fillrectangle(270, 370, 580, 415);
	fillrectangle(270, 500, 580, 545);

	setbkmode(TRANSPARENT);

	//三个选项的文字
	settextstyle(40, 0, "楷体");
	outtextxy(305, 245, "显示所有数据");
	outtextxy(345, 375, "查询数据");
	outtextxy(385, 505, "返回");
	//进入主界面选项操作界面
	while (1)
	{
		mouseEmsire1 = GetMouseMsg();//获取鼠标操作
		if (mouseEmsire1.x >= 270 && mouseEmsire1.x <= 580 && mouseEmsire1.y >= 240 && mouseEmsire1.y <= 285)
		{
			//显示数据
			setlinecolor(RED);
			rectangle(270, 240, 580, 285);
			if (mouseEmsire1.uMsg == WM_LBUTTONDOWN)
			{
				//显示所有数据
				FlagAI = -1;
				cleardevice();
				ShowAllInfor();
			}
		}
		else if (mouseEmsire1.x >= 270 && mouseEmsire1.x <= 580 && mouseEmsire1.y >= 370 && mouseEmsire1.y <= 415)
		{
			//查询数据
			setlinecolor(RED);
			rectangle(270, 370, 580, 415);
			if (mouseEmsire1.uMsg == WM_LBUTTONDOWN)
			{
				//查询数据
				FlagFPT = -1;
				FoudInfor();
				CommonUserPage();
			}
		}
		else if (mouseEmsire1.x >= 270 && mouseEmsire1.x <= 580 && mouseEmsire1.y >= 500 && mouseEmsire1.y <= 545)
		{
			//返回
			setlinecolor(RED);
			rectangle(270, 500, 580, 545);
			if (mouseEmsire1.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				FirstPage();
			}
		}
		//鼠标不在选项上面悬停
		else
		{
			setlinecolor(WHITE);//与鼠标在上面悬停时颜色要不一样
			rectangle(270, 240, 580, 285);
			rectangle(270, 370, 580, 415);
			rectangle(270, 500, 580, 545);
		}
	}
}


/*
功能：
根据博客和原型图绘制增删改查界面，适当美化，当用户点击不同区域调用相应处理函数
参数：空
返回值：空
*/
void AdDeSeMoPage()
{
	

	//鼠标操作
	MOUSEMSG mouseEmsire3;

	//默认将会按照总分排序


	initgraph(860, 560);


	cleardevice();
	IMAGE pictureEmsire3;
	loadimage(&pictureEmsire3, "./wallhaven-n6yoj7.jpg", 860, 560);//相对路径，记得把图片放到同一文件夹下
	putimage(0, 0, &pictureEmsire3);
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);//文字颜色：黑色



	setfillcolor(YELLOW);
	fillrectangle(690, 90, 850, 140);//增
	fillrectangle(690, 190, 850, 240);//删
	fillrectangle(690, 290, 850, 340);//查
	fillrectangle(690, 390, 850, 440);//改
	fillrectangle(690, 490, 850, 540);//清空
	fillrectangle(690, 590, 850, 640);//返回

	//表头文字部分
	setbkmode(TRANSPARENT);
	settextstyle(30, 0, "楷体");
	outtextxy(0, 0, "排名");
	outtextxy(100, 0, "学号");
	outtextxy(200, 0, "姓名");
	outtextxy(300, 0, "语文");
	outtextxy(400, 0, "数学");
	outtextxy(500, 0, "英语");
	outtextxy(600, 0, "总分");
	outtextxy(740, 0, "选项");
	outtextxy(740, 100, "添加");
	outtextxy(740, 200, "删除");
	outtextxy(740, 300, "查找");
	outtextxy(740, 400, "修改");
	outtextxy(740, 500, "清空");
	outtextxy(740, 600, "返回");


	//打印当前已经有的信息——记录为空的提示也在这里面
	S1mplePrint();

	//进入鼠标操作环节
	while (1)
	{
		mouseEmsire3 = GetMouseMsg();
		if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 90 && mouseEmsire3.y <= 140)
		{

			setlinecolor(RED);
			rectangle(690, 90, 850, 140);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				//添加
				InputInfor();
				cleardevice();
				//完成操作重新载入——刷新
				AdDeSeMoPage();
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 190 && mouseEmsire3.y <= 240)
		{

			setlinecolor(RED);
			rectangle(690, 190, 850, 240);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				//删除
				DeSomeStu();
				//完成操作重新载入——刷新
				AdDeSeMoPage();
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 290 && mouseEmsire3.y <= 340)
		{

			setlinecolor(RED);
			rectangle(690, 290, 850, 340);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				FlagFPT = 1;
				//查询
				FoudInfor();
				//完成操作重新载入——刷新
				AdDeSeMoPage();
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 390 && mouseEmsire3.y <= 440)
		{
			setlinecolor(RED);
			rectangle(690, 390, 850, 440);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				//修改
				ModifyStudInfor();
				//完成操作重新载入——刷新
				AdDeSeMoPage();
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 490 && mouseEmsire3.y <= 540)
		{
			setlinecolor(RED);
			rectangle(690, 490, 850, 540);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				//防止误删——弹窗加以提示
				HWND hwndDel = GetHWnd();
				int isok = MessageBox(hwndDel, "确认清空?", "提示", MB_OKCANCEL);
				if (isok == IDOK)
				{
					//调用清空函数
					DeleteStuInfor();
					//完成操作重新载入——刷新
					AdDeSeMoPage();
					//弹窗提示
					int tips1 = MessageBox(hwndDel, "清空成功！", "提示", MB_OK);
				}
				else if (isok == IDCANCEL)
				{
					//点击取消不做反应
				}
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 590 && mouseEmsire3.y <= 640)
		{
			//返回
			setlinecolor(RED);
			rectangle(690, 590, 850, 640);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				//完成操作重新载入——刷新
				AdminPage();

			}
		}
		//鼠标不悬停
		else
		{
			setlinecolor(WHITE);
			rectangle(690, 90, 850, 140);//增
			rectangle(690, 190, 850, 240);//删
			rectangle(690, 290, 850, 340);//查
			rectangle(690, 390, 850, 440);//改
			rectangle(690, 490, 850, 540);//清空
			rectangle(690, 590, 850, 640);//返回

		}
	}
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
	initgraph(860, 560);
	cleardevice();
	//鼠标操作
	MOUSEMSG mouseEmsire2;

	IMAGE pictureEmsire2;
	loadimage(&pictureEmsire2, "./wallhaven-ey7wyo.jpg", 860, 760);//相对路径，记得把图片放到同一文件夹下
	putimage(0, 0, &pictureEmsire2);

	setfillcolor(YELLOW);//设备填充颜色：蓝色
	settextcolor(BLACK);//文字颜色：黑色

	fillrectangle(690, 490, 850, 540);
	setbkmode(TRANSPARENT);

	//表头文字部分

	settextstyle(30, 0, "楷体");
	outtextxy(20, 50, "学号");
	outtextxy(180, 50, "姓名");
	outtextxy(330, 50, "语文");
	outtextxy(480, 50, "数学");
	outtextxy(630, 50, "英语");
	outtextxy(780, 50, "总分");
	outtextxy(740, 500, "返回");

	//打印被查找人信息
	//学号
	outtextxy(40, 140, StuArry[Position].s_Num);
	//姓名
	outtextxy(200, 140, StuArry[Position].s_Name);
	//语文
	outtextxy(300, 140, StuArry[Position].s_Chinese);
	//数学
	outtextxy(400, 140, StuArry[Position].s_Math);
	//英语
	outtextxy(500, 140, StuArry[Position].s_English);
	//总分
	char SuSo[20];//小数点后保留两位
	outtextxy(600, 140, SuSo);
	sprintf(SuSo, "%.2f", StuArry[Position].s_SumScore);

	while (1)
	{
		mouseEmsire2 = GetMouseMsg();
		if (mouseEmsire2.x >= 690 && mouseEmsire2.x <= 850 && mouseEmsire2.y >= 490 && mouseEmsire2.y <= 540)
		{
			//返回
			setlinecolor(RED);
			rectangle(690, 490, 850, 540);
			if (FlagFPT == WM_LBUTTONDOWN)
			{
				cleardevice();
				if (FlagFPT == 1)
				{
					AdDeSeMoPage();
				}
				else if (FlagFPT == -1)
				{
					CommonUserPage();
				}
			}
		}
		//鼠标不在选项上
		else
		{
			setlinecolor(WHITE);
			rectangle(690, 490, 850, 540);
		}
	}
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