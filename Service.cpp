#include"DataFuncdecl.h"
#include<algorithm>
/*
���ܣ�
¼��ѧ�š����������Ƴɼ���Ϣ��ͨ���������룬ѧ��Ϊ�����֣�����û������Ƿ���ȷ��
������󵯴���ʾ�û��������룬�������ִܷ����ļ�
��������
����ֵ����
*/
void InputInfor()
{
	FILE* fp = fopen("StudentInforFile.txt", "r");
	if (fp == NULL)
	{
		char ErrorMessage[64] = { "ѧ����Ϣ�ļ���ʧ�ܣ�" };
		HWND hwnd = GetHWnd();
		HWND hndtipsF = GetHWnd();
		int isok = MessageBox(hndtipsF, ErrorMessage, "��ʾ", MB_OK);
		return;
	}
	int cnt = 0;		//��ǰ��ȡ��ѧ������
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
���ܣ�
�ж�����ķ�����ʽ�Ƿ���ȷ��ҪΪ������
��������
����ֵ����
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
���ܣ�
����Ҫ����/�޸�/ɾ�������ڽṹ��������±�
��������
����ֵ��int���ͣ��ҵ��˷����±꣬û�ҵ�����-1
*/
int ReturnPosi()
{
	char s_Num[64];
	TCHAR InputWindowFI[] = _T("������ѧ�Ž���(����)(�޸�)(ɾ��)");
	InputBox(s_Num, 10, InputWindowFI);
	for (int i = 0; i < NowStudentNums; i++)
		if (strcmp(s_Num, StuArry[i].s_Num) == 0)
			return i;
	return -1;
}


/*
���ܣ�
����ReturnPosi()�����ķ���ֵ�����ѯ������ҵ��˵���PrintFoudInfor(int)������ӡ��δ�ҵ�������ʾ"���޴���"
��������
����ֵ����
*/
void FoudInfor()
{
	int pos = ReturnPosi();
	if (pos == -1)
	{
		HWND hndtipsF = GetHWnd();
		int isok = MessageBox(hndtipsF, "���޴���!", "��ʾ", MB_OK);
		return;
	}
	cleardevice();
	PrintFoudInfor(pos);
}


/*
���ܣ�
ɾ��ĳ��ѧ������Ϣ���Ƚ��в��ң��õ������±꣬Ȼ���������ɾ������
û�ҵ���ʾ���޴���
��������
����ֵ����
*/
void DeSomeStu()
{
	int pos = ReturnPosi();
	if (pos == -1)
	{
		HWND hndtipsF = GetHWnd();
		int isok = MessageBox(hndtipsF, "���޴���!", "��ʾ", MB_OK);
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
���ܣ�
����Ա��¼�����ļ��ж�ȡ����Ա�û������룬�������Ա�ṹ��
����������ʾ�û������û��������룬����ȷ��������Ա����
��������
����ֵ����
*/
void AdminSignIn()
{
	FILE* fp=fopen("Ad""AdminSignIn.txt", "r");
	if (fp == NULL)
	{
		char ErrorMessage[64] = { "�ļ���ʧ�ܣ�" };
		HWND hwnd = GetHWnd();
		HWND hndtipsF = GetHWnd();
		int isok = MessageBox(hndtipsF, ErrorMessage, "��ʾ", MB_OK);
		return;
	}
	fscanf(fp, "%s\t%s\t\n", AdminUser.UserName, AdminUser.PassWord);
	fclose(fp);
}


/*
���ܣ�
�������ĳɼ��������򣬲�������StuArry[]
��������
����ֵ����
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
���ܣ�
������ѧ�ɼ��������򣬲�������StuArry[]
��������
����ֵ����
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
���ܣ�
������ѧӢ��ɼ��������򣬲�������StuArry[]
��������
����ֵ����
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
���ܣ�
�����ֽܷ������򣬲�������StuArry[]
��������
����ֵ����
*/

bool cmp4(const Student& s1, const Student& s2)
{
	return s1.s_SumScore > s2.s_SumScore;
}
void SortAcSumScore()
{
	std::sort(StuArry, StuArry + NowStudentNums, cmp4);
}
