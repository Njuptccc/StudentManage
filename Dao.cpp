#include"DataFuncdecl.h"


/*
功能：
保存数据到文件中，即把结构体写入文件
参数：空
返回值：空
*/
void SaveInfor()
{
	//如果姓名和学号都不是空才写入文件
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
		//保存完毕人数++
		NowStudentNums++;
	}

}


/*
功能：
抹除全部数据再保存，主要用于修改功能
参数：空
返回值：空
*/
void SaveInforModi()
{
	//先删掉，但不将人数置空所以不能调用之前的删除函数
	remove("StudentInforFile.txt");
	//如果学号和姓名都不是空才写入文件
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
功能：
读取文件中的信息，存入当前结构体数组中，并更新NowStudentNums
参数：空
返回值：空
*/
void ReadInfor()
{
	FILE* fp = fopen("StudentInforFile.txt", "r");
	int RecordNums;
	if(fp==NULL)
	{
		return;
	}
	//将文件中数据读取到当前结构体数组中
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
	int FileStudentNums = 0;//辅助先得到文件中的人数
	//读取出文件中数据的人数个数
	for (int k = 0;k < RecordNums;k++)
	{
		if (strlen(StuArry[k].s_Name) != 0)
		{
			//当前人数FileStudentNums不能设置全局变量，否则多次读取的时候会出现问题
			NowStudentNums = ++FileStudentNums;
		}
	}
	fclose(fp);
}


/*
功能：
彻底清空，删除文件
参数：空
返回值：空
*/
void DeleteStuInfor()
{
	remove("StudentInforFile.txt");
	NowStudentNums = 0;
}