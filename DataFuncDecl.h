/*
作者：ccc 奥宝 桃 Cuddles Emsire 北北怪
时间：2021.11.24
说明：数据体定义，函数声明
*/
#pragma once
#undef UNICODE
#undef _UNICODE


#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
#include<ctype.h>


#define MaxNums 15  //最大存储人数

typedef struct Student
{
	char s_Num[64];//学号
	char s_Name[64];//姓名
	char s_Chinese[64];//语，成绩数值用字符形式存储
	char s_Math[64];//数
	char s_English[64];//英
	double s_SumScore;//总分
}Student;

//声明成绩结构体，用于排序
typedef struct Score
{
	double SuScore;
}Score;

//声明管理员结构体
typedef struct Admin
{
	char UserName[64];
	char PassWord[64];
}Admin;

extern int NowStudentNums;//当前存储人数
extern Student StuArry[];//声明学生结构体数组
extern Score SoArry[];//声明成绩结构体数组，用于排序
extern Admin AdminUser;//声明一个管理员用户，数据从文件中读取
extern int FlagAI;//显示全部数据的页面跳转标识
extern int FlagFPT;//查询找到页面跳转标识，1返回增删改查界面，-1返回普通用户界面






void AdminPage();//管理员界面
void AdminSignIn();//管理员登录
void CommonUserPage();//普通用户界面
void SaveInfor();//保存数据到文件中
void ReadInfor();//读取文件中的信息
void ShowAllInfor();//显示所有数据，通用
void InputInfor();//录入信息，通过弹窗输入
void S1mplePrint();//在屏幕上打印出结构体中的元素
void AdDeSeMoPage();//增删查改界面
void DeleteStuInfor();//彻底清空删除文件
int ReturnPosi();//返回要查找/修改/删除人所在结构体的下标
void ModifyStudInfor();//修改学生信息
void FoudInfor();//查询信息，并打印
void PrintFoudInfor(int);
void DeSomeStu();//删除某个学生的信息
void SortAcChinese();//按照语文成绩进行排序
void SortAcMath();//按照数学成绩进行排序
void SortAcEnglish();//按照英语成绩进行排序
void SortAcSumScore();//按照总分进行排序
bool ScoreFormat(char PerSuSc[]);//判断输入的分数格式是否正确
void FirstPage();//首页界面
void SaveInforModi();//抹除全部数据再保存，主要用于修改功能



