#include"DataFuncdecl.h"


/*
功能：
录入学号、姓名、各科成绩信息，通过弹窗输入，学号为纯数字，检测用户输入是否正确，
如果错误弹窗提示用户重新输入，并计算总分存入文件
参数：空
返回值：空
*/
void InputInfor()
{

}


/*
功能：
判断输入的分数格式是否正确，要为纯数字
参数：空
返回值：空
*/
bool ScoreFormat(char PerSuSc[])
{

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

}


/*
功能：
按照语文成绩进行排序，操作对象StuArry[]
参数：空
返回值：空
*/
void SortAcChinese()
{

}


/*
功能：
按照数学成绩进行排序，操作对象StuArry[]
参数：空
返回值：空
*/
void SortAcMath()
{

}


/*
功能：
按照数学英语成绩进行排序，操作对象StuArry[]
参数：空
返回值：空
*/
void SortAcEnglish()
{

}


/*
功能：
按照总分进行排序，操作对象StuArry[]
参数：空
返回值：空
*/
void SortAcSumScore()
{

}
