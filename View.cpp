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
	initgraph(860, 560, EW_SHOWCONSOLE);

	cleardevice();

	MOUSEMSG m2;

	cleardevice();
	//载入背景图片，图片可更改
	IMAGE imgt;
	loadimage(&imgt, "D:\\picture\\wallhaven-0qvp8r.jpg", 860, 560);
	putimage(0, 0, &imgt);
	setfillcolor(BLACK);//图形填充颜色全定了，可改变
	//设置标题
	setbkmode(TRANSPARENT);//保证字体无背景
	char SecondTitle1[5] = { "管" };
	char SecondTitle2[5] = { "理" };
	char SecondTitle3[5] = { "员" };
	char SecondTitle4[5] = { "操" };
	char SecondTitle5[5] = { "作" };
	char SecondTitle6[5] = { "界" };
	char SecondTitle7[5] = { "面" };
	//输出标题
	settextstyle(50, 0, "楷体");
	outtextxy(235, 50, SecondTitle1);
	outtextxy(295, 50, SecondTitle2);
	outtextxy(345, 50, SecondTitle3);
	outtextxy(405, 50, SecondTitle4);
	outtextxy(465, 50, SecondTitle5);
	outtextxy(525, 50, SecondTitle6);
	outtextxy(585, 50, SecondTitle7);

	setbkmode(TRANSPARENT);
	fillrectangle(270, 240, 580, 285);
	fillrectangle(270, 370, 580, 415);
	fillrectangle(270, 500, 580, 545);

	setbkmode(TRANSPARENT);
	settextstyle(40, 0, "楷体");

	//三个选项
	char SecondSelect1[20] = { "显示所有数据" };
	char SecondSelect2[20] = { "增删查改数据" };
	char SecondSelect3[20] = { "返回" };


	outtextxy(305, 245, SecondSelect1);
	outtextxy(305, 375, SecondSelect2);
	outtextxy(385, 505, SecondSelect3);

	//进入主界面选项操作界面
	while (1)
	{
		m2 = GetMouseMsg();//获取鼠标操作
		if (m2.x >= 270 && m2.x <= 580 && m2.y >= 240 && m2.y <= 285)
		{
			setlinecolor(RED);
			rectangle(270, 240, 580, 285);
			if (m2.uMsg == WM_LBUTTONDOWN)
			{
				//显示所有数据
			//	FlagAI = 1;
				cleardevice();
				//	ShowAllInfor();

			}
		}
		else if (m2.x >= 270 && m2.x <= 580 && m2.y >= 370 && m2.y <= 415)
		{
			setlinecolor(RED);
			rectangle(270, 370, 580, 415);
			if (m2.uMsg == WM_LBUTTONDOWN)
			{
				//增删查改界面
				cleardevice();
				//	AdDeSeMoPage();
			}
		}
		else if (m2.x >= 270 && m2.x <= 580 && m2.y >= 500 && m2.y <= 545)
		{
			setlinecolor(RED);
			rectangle(270, 500, 580, 545);
			if (m2.uMsg == WM_LBUTTONDOWN)
			{
				//返回
				cleardevice();
				//	FirstPage();
			}
		}
		//鼠标不在上面悬停
		else
		{
			setlinecolor(WHITE);
			rectangle(270, 240, 580, 285);
			rectangle(270, 370, 580, 415);
			rectangle(270, 500, 580, 545);
		}
	}
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
	if (NowStudentNum == 0)
	{
		//setbkcolor(RED);
		settextstyle(50, 0, "楷体");
		outtextxy(200, 200, "当前记录为空！");
		return;
	}
	for (int q = 1; q < NowStudentNum; q++)
	{
		//顺序
		settextstyle(30, 0, "楷体");
		char Num[5];
		sprintf(Num, "%d", q);

		//缩放字体
		settextstyle(25, 0, "楷体");

		//学号
		outtextxy(80, 40 + 40 * q, StuArry[q - 1].s_Num);
		//姓名
		outtextxy(200, 40 + 40 * q, StuArry[q - 1].s_Name);
		//语文成绩
		outtextxy(300, 40 + 40 * q, StuArry[q - 1].s_Chinese);
		//数学成绩
		outtextxy(400, 40 + 40 * q, StuArry[q - 1].s_Math);
		//英语成绩
		outtextxy(500, 40 + 40 * q, StuArry[q - 1].s_English);
		//输出总分
		if (strlen(StuArry[q - 1].s_Name) != 0)
		{
			outtextxy(0, 40 + 40 * q, Nums);
			char SuSo[20];
			sprintf(SuSo, "%.2f", StuArry[q - 1].s_SumScore);//小数点后保留两位
			outtextxy(600, 40 + 40 * q, SuSo);
		}
	}
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

}




/*
功能：
修改学生信息，获取学生下标后界面上输出修改前学生成绩，之后弹出输入弹窗，用户重新输入内容，
修改后将修改的内容输出到界面，并存入文件中，用户点击返回则返回到增删改查界面
参数：空
返回值：空
*/
//修改学生信息，找到返回下标，重新给他赋值，保存，否则直接弹窗警告
void ModifyStudInfor()
{
	//直接套用上面查找的操作，在此基础上加一行修改前
	//因为需要得到要修改人在结构体数组中的位置-下标，所以不能将函数直接拿过来用，得粘贴过来
	//定义一个变量用来接收下标
	int TempModi = ReturnPosi();
	if (TempModi == -1)//没找到
	{
		//获取窗口句柄
		HWND hndtipsM = GetHWnd();
		//用一个字符数组来总结句子
		int isok = MessageBox(hndtipsM, "查无此人!", "提示", MB_OK);
	}
	else//找到了这个学生进行下面的操作
	{
		cleardevice();
		//鼠标操作
		MOUSEMSG Modi;
		initgraph(860, 560);



		IMAGE picture2;
		loadimage(&picture2, "D:\\picture\\p2.jpg", 860, 560);
		putimage(0, 0, &picture2);


		setfillcolor(GREEN);
		fillrectangle(690, 590, 850, 640);

		//表头文字部分
		setbkmode(TRANSPARENT);
		settextstyle(50, 0, "黑体");
		outtextxy(40, 40, "修改前");
		outtextxy(40, 290, "修改后");
		settextstyle(30, 0, "黑体");
		outtextxy(40, 100, "学号");
		outtextxy(150, 100, "姓名");
		outtextxy(300, 100, "语文");
		outtextxy(450, 100, "数学");
		outtextxy(600, 100, "英语");
		outtextxy(750, 100, "总分");
		outtextxy(780, 600, "返回");

		outtextxy(40, 350, "学号");
		outtextxy(150, 350, "姓名");
		outtextxy(300, 350, "语文");
		outtextxy(450, 350, "数学");
		outtextxy(600, 350, "英语");
		outtextxy(750, 350, "总分");

		//打印被查找人的信息
		//学号
		outtextxy(40, 190, StuArry[TempModi].s_Num);
		//姓名
		outtextxy(180, 190, StuArry[TempModi].s_Name);
		//语文成绩
		outtextxy(300, 190, StuArry[TempModi].s_Chinese);
		//数学成绩
		outtextxy(450, 190, StuArry[TempModi].s_Math);
		//英语成绩
		outtextxy(600, 190, StuArry[TempModi].s_English);
		//输出总分
		if (strlen(StuArry[TempModi].s_Name) != 0)
		{
			char SuSo1[20];
			sprintf(SuSo1, "%.2f", StuArry[TempModi].s_SumScore);//小数点后保留两位
			outtextxy(750, 190, SuSo1);
		}







		//加入输入弹窗——重新书写内容

		//修改学号
		while (1)
		{
			//用于接收输入的学号，先覆盖进去
			char TempModiNums[64];

			TCHAR InputWindow0[] = _T("请输入该学生的学号");
			InputBox(TempModiNums, 9, InputWindow0);

			if (strcmp(TempModiNums, StuArry[TempModi].s_Num) == 0)//如果输入的学号和本身位置的学号相同
			{
				//不作出变化,直接break
				break;
			}
			else//如果输入的学号和本身位置的学号不同，则需要判断与整个结构体中是否有重复的
			{
				int FlagInput3 = 0;

				int nums = strlen(TempModiNums);

				//判断输入的是否是纯数字
				for (int i = 0; i < nums; i++)
				{
					if (TempModiNums[i] >= '0' && TempModiNums[i] <= '9')//如果不是数字
					{

					}
					else
					{
						FlagInput3 = 1;
						HWND hwndInput3 = GetHWnd();
						int isok = MessageBox(hwndInput3, "输入格式有误，请重新输入", "提示", MB_OK);
						break;
					}
				}

				if (FlagInput3 == 0)
				{
					//为什么这里新输入的学号，会显示在结构体数组中存在，
					//因为这是修改函数，上面输入的学号已经覆盖到了他应该取得位置，
					/*
					思路1.先别把要该的值覆盖进去，先进行判断
							判断完成符合条件最后再把值赋给它，
					思路2.将原本的学生结构体数组复制一份
							 在新的结构体数组中遍历判断


							 //这里选择第一种
					*/
					//判断是否输入重复
					int FlagInput4 = 0;
					for (int i = 0; i < NowStudentNums; i++)
					{
						if (strcmp(TempModiNums, StuArry[i].s_Num) == 0)
						{
							FlagInput4 = 1;
							break;
						}
					}
					if (FlagInput4 == 1)
					{
						HWND hwndInput4 = GetHWnd();
						int isok = MessageBox(hwndInput4, "该学生已经存在，请重新输入", "提示", MB_OK);
					}
					else if (FlagInput4 == 0)
					{
						//覆盖
						memcpy(TempModiNums, StuArry[TempModi].s_Num, nums);
						break;
					}
				}
			}
		}

		//修改姓名
		TCHAR InputWindow1[] = _T("请输入该学生的姓名");
		InputBox(StuArry[TempModi].s_Name, 10, InputWindow1);

		//输入语文成绩
		while (1)
		{
			TCHAR InputWindow2[] = _T("请输入该学生的语文成绩");
			InputBox(StuArry[TempModi].s_Chinese, 4, InputWindow2);

			if (ScoreFormat(StuArry[TempModi].s_Chinese))//为真跳出循环
			{
				break;
			}

		}





		//输入数学成绩
		while (1)
		{
			TCHAR InputWindow3[] = _T("请输入该学生的数学成绩");
			InputBox(StuArry[TempModi].s_Math, 4, InputWindow3);

			if (ScoreFormat(StuArry[TempModi].s_Math))//为真跳出循环
			{
				break;
			}

		}


		//输入英语成绩
		while (1)
		{
			TCHAR InputWindow4[] = _T("请输入该学生的英语成绩");
			InputBox(StuArry[TempModi].s_English, 4, InputWindow4);

			if (ScoreFormat(StuArry[TempModi].s_English))//为真跳出循环
			{
				break;
			}

		}

		//计算总分
		StuArry[TempModi].s_SumScore =
			atof(StuArry[TempModi].s_Chinese) +
			atof(StuArry[TempModi].s_Math) +
			atof(StuArry[TempModi].s_English);

		//打印被查找人的信息
		//学号
		outtextxy(40, 390, StuArry[TempModi].s_Num);
		//姓名
		outtextxy(150, 390, StuArry[TempModi].s_Name);
		//语文成绩
		outtextxy(300, 390, StuArry[TempModi].s_Chinese);
		//数学成绩
		outtextxy(450, 390, StuArry[TempModi].s_Math);
		//英语成绩
		outtextxy(600, 390, StuArry[TempModi].s_English);
		//输出总分-加一个限制条件
		if (strlen(StuArry[TempModi].s_Name) != 0)
		{
			char SuSo2[20];
			sprintf(SuSo2, "%.2lf", StuArry[TempModi].s_SumScore);//小数点后保留两位
			outtextxy(750, 390, SuSo2);
		}

		//保存文件
		SaveInforModi();





		while (1)
		{
			Modi = GetMouseMsg();
			if (Modi.x >= 775 && Modi.x <= 840 && Modi.y >= 510 && Modi.y <= 540)
			{
				//返回
				setlinecolor(RED);
				setlinecolor(RED);

				rectangle(775, 510, 840, 540);
				if (Modi.uMsg == WM_LBUTTONDOWN)
				{
					cleardevice();
					//回到增删查改界面
					AdDeSeMoPage();

					//辅助测试——显示当前人数
					/*char temptps[5];
					sprintf(temptps, "%d", NowStudentNums);


					HWND hwndTemp = GetHWnd();
					int tips2 = MessageBox(hwndTemp, temptps, "提示", MB_OK);*/
				}
			}
			//鼠标不悬停
			else
			{
				setlinecolor(WHITE);

				rectangle(775, 510, 840, 540);

			}
		}
	}


int main(void)
{
	FirstPage();
	return 0;
}