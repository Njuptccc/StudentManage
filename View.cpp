#include"DataFuncdecl.h"


/*
���ܣ�
���ݲ��ͺ�ԭ��ͼ������ҳ���棬�ʵ����������û������ͬ���������Ӧ������
��������
����ֵ����
*/
void FirstPage()
{

}


/*
���ܣ�
���ݲ��ͺ�ԭ��ͼ���ƹ���Ա���棬�ʵ����������û������ͬ���������Ӧ������
��������
����ֵ����
*/
void AdminPage()
{
	initgraph(860, 560, EW_SHOWCONSOLE);

	cleardevice();

	MOUSEMSG m2;

	cleardevice();
	//���뱳��ͼƬ��ͼƬ�ɸ���
	IMAGE imgt;
	loadimage(&imgt, "D:\\picture\\wallhaven-0qvp8r.jpg", 860, 560);
	putimage(0, 0, &imgt);
	setfillcolor(BLACK);//ͼ�������ɫȫ���ˣ��ɸı�
	//���ñ���
	setbkmode(TRANSPARENT);//��֤�����ޱ���
	char SecondTitle1[5] = { "��" };
	char SecondTitle2[5] = { "��" };
	char SecondTitle3[5] = { "Ա" };
	char SecondTitle4[5] = { "��" };
	char SecondTitle5[5] = { "��" };
	char SecondTitle6[5] = { "��" };
	char SecondTitle7[5] = { "��" };
	//�������
	settextstyle(50, 0, "����");
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
	settextstyle(40, 0, "����");

	//����ѡ��
	char SecondSelect1[20] = { "��ʾ��������" };
	char SecondSelect2[20] = { "��ɾ�������" };
	char SecondSelect3[20] = { "����" };


	outtextxy(305, 245, SecondSelect1);
	outtextxy(305, 375, SecondSelect2);
	outtextxy(385, 505, SecondSelect3);

	//����������ѡ���������
	while (1)
	{
		m2 = GetMouseMsg();//��ȡ������
		if (m2.x >= 270 && m2.x <= 580 && m2.y >= 240 && m2.y <= 285)
		{
			setlinecolor(RED);
			rectangle(270, 240, 580, 285);
			if (m2.uMsg == WM_LBUTTONDOWN)
			{
				//��ʾ��������
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
				//��ɾ��Ľ���
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
				//����
				cleardevice();
				//	FirstPage();
			}
		}
		//��겻��������ͣ
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
���ܣ�
���ݲ��ͺ�ԭ��ͼ������ͨ�û����棬�ʵ����������û������ͬ���������Ӧ������
��������
����ֵ����
*/
void CommonUserPage()
{

}


/*
���ܣ�
���ݲ��ͺ�ԭ��ͼ������ɾ�Ĳ���棬�ʵ����������û������ͬ���������Ӧ������
��������
����ֵ����
*/
void AdDeSeMoPage()
{

}


/*
���ܣ�
����Ļ�ϵĶ�Ӧλ�ô�ӡ���ṹ���е�ÿһ��Ԫ��
��������
����ֵ����
*/
void S1mplePrint()
{
	if (NowStudentNum == 0)
	{
		//setbkcolor(RED);
		settextstyle(50, 0, "����");
		outtextxy(200, 200, "��ǰ��¼Ϊ�գ�");
		return;
	}
	for (int q = 1; q < NowStudentNum; q++)
	{
		//˳��
		settextstyle(30, 0, "����");
		char Num[5];
		sprintf(Num, "%d", q);

		//��������
		settextstyle(25, 0, "����");

		//ѧ��
		outtextxy(80, 40 + 40 * q, StuArry[q - 1].s_Num);
		//����
		outtextxy(200, 40 + 40 * q, StuArry[q - 1].s_Name);
		//���ĳɼ�
		outtextxy(300, 40 + 40 * q, StuArry[q - 1].s_Chinese);
		//��ѧ�ɼ�
		outtextxy(400, 40 + 40 * q, StuArry[q - 1].s_Math);
		//Ӣ��ɼ�
		outtextxy(500, 40 + 40 * q, StuArry[q - 1].s_English);
		//����ܷ�
		if (strlen(StuArry[q - 1].s_Name) != 0)
		{
			outtextxy(0, 40 + 40 * q, Nums);
			char SuSo[20];
			sprintf(SuSo, "%.2f", StuArry[q - 1].s_SumScore);//С���������λ
			outtextxy(600, 40 + 40 * q, SuSo);
		}
	}
}


/*
���ܣ�
��ʾѧ�����ݽ��棬���ܰ�ťΪ�����ĿƳɼ�����ͷ��أ������û������ͬ������ò�ͬ������
��������
����ֵ����
*/
void ShowAllInfor()
{


}





/*
���ܣ�
��ӡ�������˵���Ϣ���棬�û��������ʱ����FlagFPT��ֵ�ж�Ӧ�÷��ص��Ǹ�����
������Position �������������±�
����ֵ����
*/
void PrintFoudInfor(int Position)
{

}




/*
���ܣ�
�޸�ѧ����Ϣ����ȡѧ���±�����������޸�ǰѧ���ɼ���֮�󵯳����뵯�����û������������ݣ�
�޸ĺ��޸ĵ�������������棬�������ļ��У��û���������򷵻ص���ɾ�Ĳ����
��������
����ֵ����
*/
//�޸�ѧ����Ϣ���ҵ������±꣬���¸�����ֵ�����棬����ֱ�ӵ�������
void ModifyStudInfor()
{
	//ֱ������������ҵĲ������ڴ˻����ϼ�һ���޸�ǰ
	//��Ϊ��Ҫ�õ�Ҫ�޸����ڽṹ�������е�λ��-�±꣬���Բ��ܽ�����ֱ���ù����ã���ճ������
	//����һ���������������±�
	int TempModi = ReturnPosi();
	if (TempModi == -1)//û�ҵ�
	{
		//��ȡ���ھ��
		HWND hndtipsM = GetHWnd();
		//��һ���ַ��������ܽ����
		int isok = MessageBox(hndtipsM, "���޴���!", "��ʾ", MB_OK);
	}
	else//�ҵ������ѧ����������Ĳ���
	{
		cleardevice();
		//������
		MOUSEMSG Modi;
		initgraph(860, 560);



		IMAGE picture2;
		loadimage(&picture2, "D:\\picture\\p2.jpg", 860, 560);
		putimage(0, 0, &picture2);


		setfillcolor(GREEN);
		fillrectangle(690, 590, 850, 640);

		//��ͷ���ֲ���
		setbkmode(TRANSPARENT);
		settextstyle(50, 0, "����");
		outtextxy(40, 40, "�޸�ǰ");
		outtextxy(40, 290, "�޸ĺ�");
		settextstyle(30, 0, "����");
		outtextxy(40, 100, "ѧ��");
		outtextxy(150, 100, "����");
		outtextxy(300, 100, "����");
		outtextxy(450, 100, "��ѧ");
		outtextxy(600, 100, "Ӣ��");
		outtextxy(750, 100, "�ܷ�");
		outtextxy(780, 600, "����");

		outtextxy(40, 350, "ѧ��");
		outtextxy(150, 350, "����");
		outtextxy(300, 350, "����");
		outtextxy(450, 350, "��ѧ");
		outtextxy(600, 350, "Ӣ��");
		outtextxy(750, 350, "�ܷ�");

		//��ӡ�������˵���Ϣ
		//ѧ��
		outtextxy(40, 190, StuArry[TempModi].s_Num);
		//����
		outtextxy(180, 190, StuArry[TempModi].s_Name);
		//���ĳɼ�
		outtextxy(300, 190, StuArry[TempModi].s_Chinese);
		//��ѧ�ɼ�
		outtextxy(450, 190, StuArry[TempModi].s_Math);
		//Ӣ��ɼ�
		outtextxy(600, 190, StuArry[TempModi].s_English);
		//����ܷ�
		if (strlen(StuArry[TempModi].s_Name) != 0)
		{
			char SuSo1[20];
			sprintf(SuSo1, "%.2f", StuArry[TempModi].s_SumScore);//С���������λ
			outtextxy(750, 190, SuSo1);
		}







		//�������뵯������������д����

		//�޸�ѧ��
		while (1)
		{
			//���ڽ��������ѧ�ţ��ȸ��ǽ�ȥ
			char TempModiNums[64];

			TCHAR InputWindow0[] = _T("�������ѧ����ѧ��");
			InputBox(TempModiNums, 9, InputWindow0);

			if (strcmp(TempModiNums, StuArry[TempModi].s_Num) == 0)//��������ѧ�źͱ���λ�õ�ѧ����ͬ
			{
				//�������仯,ֱ��break
				break;
			}
			else//��������ѧ�źͱ���λ�õ�ѧ�Ų�ͬ������Ҫ�ж��������ṹ�����Ƿ����ظ���
			{
				int FlagInput3 = 0;

				int nums = strlen(TempModiNums);

				//�ж�������Ƿ��Ǵ�����
				for (int i = 0; i < nums; i++)
				{
					if (TempModiNums[i] >= '0' && TempModiNums[i] <= '9')//�����������
					{

					}
					else
					{
						FlagInput3 = 1;
						HWND hwndInput3 = GetHWnd();
						int isok = MessageBox(hwndInput3, "�����ʽ��������������", "��ʾ", MB_OK);
						break;
					}
				}

				if (FlagInput3 == 0)
				{
					//Ϊʲô�����������ѧ�ţ�����ʾ�ڽṹ�������д��ڣ�
					//��Ϊ�����޸ĺ��������������ѧ���Ѿ����ǵ�����Ӧ��ȡ��λ�ã�
					/*
					˼·1.�ȱ��Ҫ�õ�ֵ���ǽ�ȥ���Ƚ����ж�
							�ж���ɷ�����������ٰ�ֵ��������
					˼·2.��ԭ����ѧ���ṹ�����鸴��һ��
							 ���µĽṹ�������б����ж�


							 //����ѡ���һ��
					*/
					//�ж��Ƿ������ظ�
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
						int isok = MessageBox(hwndInput4, "��ѧ���Ѿ����ڣ�����������", "��ʾ", MB_OK);
					}
					else if (FlagInput4 == 0)
					{
						//����
						memcpy(TempModiNums, StuArry[TempModi].s_Num, nums);
						break;
					}
				}
			}
		}

		//�޸�����
		TCHAR InputWindow1[] = _T("�������ѧ��������");
		InputBox(StuArry[TempModi].s_Name, 10, InputWindow1);

		//�������ĳɼ�
		while (1)
		{
			TCHAR InputWindow2[] = _T("�������ѧ�������ĳɼ�");
			InputBox(StuArry[TempModi].s_Chinese, 4, InputWindow2);

			if (ScoreFormat(StuArry[TempModi].s_Chinese))//Ϊ������ѭ��
			{
				break;
			}

		}





		//������ѧ�ɼ�
		while (1)
		{
			TCHAR InputWindow3[] = _T("�������ѧ������ѧ�ɼ�");
			InputBox(StuArry[TempModi].s_Math, 4, InputWindow3);

			if (ScoreFormat(StuArry[TempModi].s_Math))//Ϊ������ѭ��
			{
				break;
			}

		}


		//����Ӣ��ɼ�
		while (1)
		{
			TCHAR InputWindow4[] = _T("�������ѧ����Ӣ��ɼ�");
			InputBox(StuArry[TempModi].s_English, 4, InputWindow4);

			if (ScoreFormat(StuArry[TempModi].s_English))//Ϊ������ѭ��
			{
				break;
			}

		}

		//�����ܷ�
		StuArry[TempModi].s_SumScore =
			atof(StuArry[TempModi].s_Chinese) +
			atof(StuArry[TempModi].s_Math) +
			atof(StuArry[TempModi].s_English);

		//��ӡ�������˵���Ϣ
		//ѧ��
		outtextxy(40, 390, StuArry[TempModi].s_Num);
		//����
		outtextxy(150, 390, StuArry[TempModi].s_Name);
		//���ĳɼ�
		outtextxy(300, 390, StuArry[TempModi].s_Chinese);
		//��ѧ�ɼ�
		outtextxy(450, 390, StuArry[TempModi].s_Math);
		//Ӣ��ɼ�
		outtextxy(600, 390, StuArry[TempModi].s_English);
		//����ܷ�-��һ����������
		if (strlen(StuArry[TempModi].s_Name) != 0)
		{
			char SuSo2[20];
			sprintf(SuSo2, "%.2lf", StuArry[TempModi].s_SumScore);//С���������λ
			outtextxy(750, 390, SuSo2);
		}

		//�����ļ�
		SaveInforModi();





		while (1)
		{
			Modi = GetMouseMsg();
			if (Modi.x >= 775 && Modi.x <= 840 && Modi.y >= 510 && Modi.y <= 540)
			{
				//����
				setlinecolor(RED);
				setlinecolor(RED);

				rectangle(775, 510, 840, 540);
				if (Modi.uMsg == WM_LBUTTONDOWN)
				{
					cleardevice();
					//�ص���ɾ��Ľ���
					AdDeSeMoPage();

					//�������ԡ�����ʾ��ǰ����
					/*char temptps[5];
					sprintf(temptps, "%d", NowStudentNums);


					HWND hwndTemp = GetHWnd();
					int tips2 = MessageBox(hwndTemp, temptps, "��ʾ", MB_OK);*/
				}
			}
			//��겻��ͣ
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