#include"DataFuncdecl.h"


/*
功能：
根据博客和原型图绘制首页界面，适当美化，当用户点击不同区域调用相应处理函数
参数：空
返回值：空
*/
void FirstPage()
{

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