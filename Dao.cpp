#include"DataFuncdecl.h"


/*
���ܣ�
�������ݵ��ļ��У����ѽṹ��д���ļ�
��������
����ֵ����
*/
void SaveInfor()
{
	//���������ѧ�Ŷ����ǿղ�д���ļ�
	if (strlen(StuArry[NowStudentNums].s_Num) != 0 && strlen(StuArry[NowStudentNums].s_Name)!= 0)
	{
		FILE*fp = fopen("StudentInforFile.txt","a");
			if(fp==NULL)
			{return;}
		fprintf(fp, "%s\t%s\t&s\t%s\t%s\t%lf\n",
			StuArry[NowStudentNums].s_Num,
			StuArry[NowStudentNums].s_Name,
			StuArry[NowStudentNums].s_Chinese,
			StuArry[NowStudentNums].s_Math,
			StuArry[NowStudentNums].s_English,
			StuArry[NowStudentNums].s_SumScore);
		fclose(fp);
		//�����������++
		NowStudentNums++;
	}

}


/*
���ܣ�
Ĩ��ȫ�������ٱ��棬��Ҫ�����޸Ĺ���
��������
����ֵ����
*/
void SaveInforModi()
{
	//��ɾ���������������ÿ����Բ��ܵ���֮ǰ��ɾ������
	remove("StudentInforFile.txt");
	//���ѧ�ź����������ǿղ�д���ļ�
	FILE* fp = fopen("StudentInforFile.txt", "a");
	if(fp==NULL)
	{
		return;
	}
	for (int i = 0;i < NowStudentNums;i++)
	{
		if (strlen(StuArry[i].s_Num) != 0 && strlen(StuArry[i].s_Name) != 0)
		{
			fprintf(fp, " %s\t%s\t%s\t%s\t%s\t%lf\n",
				StuArry[i].s_Num,
				StuArry[i].s_Name,
				StuArry[i].s_Chinese,
				StuArry[i].s_Math,
				StuArry[i].s_English,
				StuArry[i].s_SumScore);
		}
}
	fclose(fp);
}


/*
���ܣ�
��ȡ�ļ��е���Ϣ�����뵱ǰ�ṹ�������У�������NowStudentNums
��������
����ֵ����
*/
void ReadInfor()
{
	FILE* fp = fopen("StudentInforFile.txt", "r");
	int RecordNums;
	if(fp==NULL)
	{
		return;
	}
	//���ļ������ݶ�ȡ����ǰ�ṹ��������
	for (int i = 0;i < RecordNums;i++)
	{
		fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%lf\t\n",
			StuArry[i].s_Num,
			StuArry[i].s_Name,
			StuArry[i].s_Chinese,
			StuArry[i].s_Math,
			StuArry[i].s_English,
			StuArry[i].s_SumScore);
	}
	int FileStudentNums = 0;//�����ȵõ��ļ��е�����
	//��ȡ���ļ������ݵ���������
	for (int k = 0;k < RecordNums;k++)
	{
		if (strlen(StuArry[k].s_Name) != 0)
		{
			//��ǰ����FileStudentNums��������ȫ�ֱ����������ζ�ȡ��ʱ����������
			NowStudentNums = ++FileStudentNums;
		}
	}
	fclose(fp);
}


/*
���ܣ�
������գ�ɾ���ļ�
��������
����ֵ����
*/
void DeleteStuInfor()
{
	remove("StudentInforFile.txt");
	NowStudentNums = 0;
}