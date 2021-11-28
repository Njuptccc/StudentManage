#include"DataFuncdecl.h"
#include<algorithm>
/*
功能：
录入学号、姓名、各科成绩信息，通过弹窗输入，学号为纯数字，检测用户输入是否正确，
如果错误弹窗提示用户重新输入，并计算总分存入文件
参数：空
返回值：空
*/
void InputInfor()
{
	FILE* fp = fopen("StudentInforFile.txt", "r");
	if (fp == NULL)
	{
		char ErrorMessage[64] = { "学生信息文件打开失败！" };
		HWND hwnd = GetHWnd();
		HWND hndtipsF = GetHWnd();
		int isok = MessageBox(hndtipsF, ErrorMessage, "提示", MB_OK);
		return;
	}
	int cnt = 0;		//当前读取的学生人数
	while (cnt <= MaxNums && fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%lf\t\n",
		StuArry[cnt].s_Num,
		StuArry[cnt].s_Name,
		StuArry[cnt].s_Chinese,
		StuArry[cnt].s_Math,
		StuArry[cnt].s_English,
		&StuArry[cnt].s_SumScore
	))
		cnt++;
	NowStudentNums = cnt;
	fclose(fp);
}


/*
功能：
判断输入的分数格式是否正确，要为纯数字
参数：空
返回值：空
*/
bool ScoreFormat(char PerSuSc[])
{
	int length = strlen(PerSuSc);
	for (int i = 0; i < length; i++)
		if (!isdigit(PerSuSc[i]))
			return false;
	return true;
}


/*
功能：
返回要查找/修改/删除人所在结构体数组的下标
参数：空
返回值：int类型，找到了返回下标，没找到返回-1
*/
int ReturnPosi()
{
	char s_Num[64];
	TCHAR InputWindowFI[] = _T("请输入学号进行(查找)(修改)(删除)");
	InputBox(s_Num, 10, InputWindowFI);
	for (int i = 0; i < NowStudentNums; i++)
		if (strcmp(s_Num, StuArry[i].s_Num) == 0)
			return i;
	return -1;
}


/*
功能：
根据ReturnPosi()函数的返回值输出查询结果，找到了调用PrintFoudInfor(int)函数打印，未找到弹窗提示"查无此人"
参数：空
返回值：空
*/
void FoudInfor()
{
	int pos = ReturnPosi();
	if (pos == -1)
	{
		HWND hndtipsF = GetHWnd();
		int isok = MessageBox(hndtipsF, "查无此人!", "提示", MB_OK);
		return;
	}
	cleardevice();
	PrintFoudInfor(pos);
}


/*
功能：
删除某个学生的信息，先进行查找，得到返回下标，然后进行数组删除操作
没找到提示查无此人
参数：空
返回值：空
*/
void DeSomeStu()
{
	int pos = ReturnPosi();
	if (pos == -1)
	{
		HWND hndtipsF = GetHWnd();
		int isok = MessageBox(hndtipsF, "查无此人!", "提示", MB_OK);
		return;
	}
	if (pos == NowStudentNums - 1)
	{
		StuArry[pos].s_Num = "";
		StuArry[pos].s_Name = "";
		StuArry[pos].s_Chinese = "";
		StuArry[pos].s_Math = "";
		StuArry[pos].s_English = "";
		StuArry[pos].s_SumScore = 0;
		NowStudentNums--;
		return;
	}
	for (int i = pos; i < NowStudentNums; i++)
	{
		strcpy(StuArry[pos].s_Num, StuArry[pos + 1].s_Num);
		strcpy(StuArry[pos].s_Name, StuArry[pos + 1].s_Name);
		strcpy(StuArry[pos].s_Chinese, StuArry[pos + 1].s_Chinese);
		strcpy(StuArry[pos].s_Math, StuArry[pos + 1].s_Math);
		strcpy(StuArry[pos].s_English, StuArry[pos + 1].s_English);
		strcpy(StuArry[pos].s_SumScore, StuArry[pos + 1].s_SumScore);
	}
	NowStudentNums--;
}


/*
功能：
管理员登录，从文件中读取管理员用户名密码，存入管理员结构体
弹出弹窗提示用户输入用户名和密码，都正确则进入管理员界面
参数：空
返回值：空
*/
void AdminSignIn()
{
	FILE* fp=fopen("Ad""AdminSignIn.txt", "r");
	if (fp == NULL)
	{
		char ErrorMessage[64] = { "文件打开失败！" };
		HWND hwnd = GetHWnd();
		HWND hndtipsF = GetHWnd();
		int isok = MessageBox(hndtipsF, ErrorMessage, "提示", MB_OK);
		return;
	}
	fscanf(fp, "%s\t%s\t\n", AdminUser.UserName, AdminUser.PassWord);
	fclose(fp);
}


/*
功能：
按照语文成绩进行排序，操作对象StuArry[]
参数：空
返回值：空
*/

bool cmp1(const Student& s1, const Student& s2)
{
	int len1 = strlen(s1.s_Chinese), len2 = strlen(s2.s_Chinese);
	if (len1 != len2)
		return len1 > len2;
	return strcmp(s1.s_Chinese, s2.s_Chinese) > 0;
}

void SortAcChinese()
{
	std::sort(StuArry, StuArry + NowStudentNums, cmp1);
}


/*
功能：
按照数学成绩进行排序，操作对象StuArry[]
参数：空
返回值：空
*/
bool cmp2(const Student& s1, const Student& s2)
{
	int len1 = strlen(s1.s_Math), len2 = strlen(s2.s_Math);
	if (len1 != len2)
		return len1 > len2;
	return strcmp(s1.s_Math, s2.s_Math) > 0;
}
void SortAcMath()
{
	std::sort(StuArry, StuArry + NowStudentNums, cmp2);
}


/*
功能：
按照数学英语成绩进行排序，操作对象StuArry[]
参数：空
返回值：空
*/
bool cmp3(const Student& s1, const Student& s2)
{
	int len1 = strlen(s1.s_English), len2 = strlen(s2.s_English);
	if (len1 != len2)
		return len1 > len2;
	return strcmp(s1.s_English, s2.s_English) > 0;
}
void SortAcEnglish()
{
	std::sort(StuArry, StuArry + NowStudentNums, cmp3);
}


/*
功能：
按照总分进行排序，操作对象StuArry[]
参数：空
返回值：空
*/

bool cmp4(const Student& s1, const Student& s2)
{
	return s1.s_SumScore > s2.s_SumScore;
}
void SortAcSumScore()
{
	std::sort(StuArry, StuArry + NowStudentNums, cmp4);
}
