/*
���ߣ�ccc �±� �� Cuddles Emsire ������
ʱ�䣺2021.11.24
˵���������嶨�壬��������
*/
#pragma once
#undef UNICODE
#undef _UNICODE


#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
#include<ctype.h>


#define MaxNums 15  //���洢����

typedef struct Student
{
	char s_Num[64];//ѧ��
	char s_Name[64];//����
	char s_Chinese[64];//��ɼ���ֵ���ַ���ʽ�洢
	char s_Math[64];//��
	char s_English[64];//Ӣ
	double s_SumScore;//�ܷ�
}Student;

//�����ɼ��ṹ�壬��������
typedef struct Score
{
	double SuScore;
}Score;

//��������Ա�ṹ��
typedef struct Admin
{
	char UserName[64];
	char PassWord[64];
}Admin;

extern int NowStudentNums;//��ǰ�洢����
extern Student StuArry[];//����ѧ���ṹ������
extern Score SoArry[];//�����ɼ��ṹ�����飬��������
extern Admin AdminUser;//����һ������Ա�û������ݴ��ļ��ж�ȡ
extern int FlagAI;//��ʾȫ�����ݵ�ҳ����ת��ʶ
extern int FlagFPT;//��ѯ�ҵ�ҳ����ת��ʶ��1������ɾ�Ĳ���棬-1������ͨ�û�����






void AdminPage();//����Ա����
void AdminSignIn();//����Ա��¼
void CommonUserPage();//��ͨ�û�����
void SaveInfor();//�������ݵ��ļ���
void ReadInfor();//��ȡ�ļ��е���Ϣ
void ShowAllInfor();//��ʾ�������ݣ�ͨ��
void InputInfor();//¼����Ϣ��ͨ����������
void S1mplePrint();//����Ļ�ϴ�ӡ���ṹ���е�Ԫ��
void AdDeSeMoPage();//��ɾ��Ľ���
void DeleteStuInfor();//�������ɾ���ļ�
int ReturnPosi();//����Ҫ����/�޸�/ɾ�������ڽṹ����±�
void ModifyStudInfor();//�޸�ѧ����Ϣ
void FoudInfor();//��ѯ��Ϣ������ӡ
void PrintFoudInfor(int);
void DeSomeStu();//ɾ��ĳ��ѧ������Ϣ
void SortAcChinese();//�������ĳɼ���������
void SortAcMath();//������ѧ�ɼ���������
void SortAcEnglish();//����Ӣ��ɼ���������
void SortAcSumScore();//�����ֽܷ�������
bool ScoreFormat(char PerSuSc[]);//�ж�����ķ�����ʽ�Ƿ���ȷ
void FirstPage();//��ҳ����
void SaveInforModi();//Ĩ��ȫ�������ٱ��棬��Ҫ�����޸Ĺ���



