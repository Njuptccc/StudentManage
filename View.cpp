#include"DataFuncdecl.h"
#include<graphics.h>
#include<stdio.h>
#include<conio.h>//����_get()����
#include<stdlib.h>
#pragma warning(disable:4996)
/*
���ܣ�
���ݲ��ͺ�ԭ��ͼ������ҳ���棬�ʵ����������û������ͬ���������Ӧ������
��������
����ֵ����
*/
void FirstPage()
{
	//ֻҪ�������Ͷ�ȡ��������
	ReadInfor();
	//���ô��ڴ�С
	initgraph(860,560);
	HWND hWnd = GetHWnd();//��ȡ�������ƾ��
	SetWindowText(hWnd, "ѧ����Ϣ����ϵͳ");//���ڱ�����     //��������  ��ʾ�û����� ��MessageBox()����
	//������
	MOUSEMSG m1;
	//���õ�ǰ�豸ͼ�������������ʱ�ı���ģʽ
	IMAGE picture1;
	//����ͼƬ
	loadimage(&picture1, "E:\\easyx\\easyx����\\wallhaven-g8g1xe.png", 860,560);
	//���ͼƬ
	putimage(0, 0, &picture1);
	setbkmode(TRANSPARENT);
	//�����
	
	char FirstTitle[20] = { "ѧ���ɼ�����ϵͳ" };

	settextstyle(60, 0, "����");
	setfillcolor(BLACK);
	
	outtextxy(165, 20, FirstTitle);

	//С����
	fillrectangle(240, 250, 570, 200);
	fillrectangle(240, 350, 570, 300);
	fillrectangle(240, 450, 570, 400);
	
	setbkmode(TRANSPARENT);
	//����ѡ�������
	settextstyle(40, 0, "����");//����������ʽ

	//����ѡ��
	char FirstSelect1[20] = { "����Ա��������" };
	char FirstSelect2[20] = { "��ͨ�û���������" };
	char FirstSelect3[20] = { "�˳�����" };

	settextcolor(WHITE);//����������ɫ//������������ɫ ������Ĭ��Ϊ��ɫ��
	outtextxy(250, 210, FirstSelect1);
	outtextxy(250, 310, FirstSelect2);
	outtextxy(325, 410, FirstSelect3);
	

	//����������ѡ���������
	while (1)
	{
		m1 = GetMouseMsg();//��ȡ������
		if (m1.x >= 230 && m1.x <= 560 && m1.y >= 200 && m1.y <= 250)//����Ա
		{
			setlinecolor(RED);
			rectangle(240, 250, 570, 200);
			if (m1.uMsg == WM_LBUTTONDOWN)
			{
				//�������Ա��¼
				ShowAllInfor();
				//AdminSignIn();
			}
		}
		else if (m1.x >= 230 && m1.x <= 560 && m1.y >= 300 && m1.y <= 350)//��ͨ�û�
		{
			setlinecolor(RED);
			rectangle(240, 350, 570, 300);
			if (m1.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				CommonUserPage();
			}
		}
		else if (m1.x >= 230 && m1.x <= 560 && m1.y >= 400 && m1.y <= 450)//�˳�
		{
			setlinecolor(RED);
			rectangle(240, 450, 570, 400);
				if (m1.uMsg == WM_LBUTTONDOWN)
				{
					exit(0);
				}
		}
		else
		{
			setlinecolor(WHITE);
			rectangle(240, 250, 570, 200);
			rectangle(240, 350, 570, 300);
			rectangle(240, 450, 570, 400);
		}
	}
	
	_getch();//������ȴ���������
	closegraph();//�رմ���
}


/*
���ܣ�
���ݲ��ͺ�ԭ��ͼ���ƹ���Ա���棬�ʵ����������û������ͬ���������Ӧ������
��������
����ֵ����
*/
void AdminPage()
{

}


/*
���ܣ�
���ݲ��ͺ�ԭ��ͼ������ͨ�û����棬�ʵ����������û������ͬ���������Ӧ������
��������
����ֵ����
*/
void CommonUserPage()
{
	initgraph(860, 560);
	cleardevice();
	//���������������
	MOUSEMSG mouseEmsire1;


	IMAGE pictureEmsire1;
	loadimage(&pictureEmsire1, "./wallhaven-0qvp8r.jpg", 860, 560);//���·�����ǵð�ͼƬ�ŵ�ͬһ�ļ�����
	putimage(0, 0, &pictureEmsire1);
	setbkmode(TRANSPARENT);


	setfillcolor(BLACK);//�豸�����ɫ����ɫ
	setlinecolor(WHITE);//������ɫ����ɫ

	settextstyle(50, 0, "����");//���壺����
	outtextxy(50, 90, "��");
	outtextxy(150, 90, "ͨ");
	outtextxy(250, 90, "��");
	outtextxy(350, 90, "��");
	outtextxy(450, 90, "��");
	outtextxy(550, 90, "��");
	outtextxy(650, 90, "��");
	outtextxy(750, 90, "��");

	setbkmode(TRANSPARENT);

	//����ѡ��ı���
	fillrectangle(270, 240, 580, 285);
	fillrectangle(270, 370, 580, 415);
	fillrectangle(270, 500, 580, 545);

	setbkmode(TRANSPARENT);

	//����ѡ�������
	settextstyle(40, 0, "����");
	outtextxy(305, 245, "��ʾ��������");
	outtextxy(345, 375, "��ѯ����");
	outtextxy(385, 505, "����");
	//����������ѡ���������
	while (1)
	{
		mouseEmsire1 = GetMouseMsg();//��ȡ������
		if (mouseEmsire1.x >= 270 && mouseEmsire1.x <= 580 && mouseEmsire1.y >= 240 && mouseEmsire1.y <= 285)
		{
			//��ʾ����
			setlinecolor(RED);
			rectangle(270, 240, 580, 285);
			if (mouseEmsire1.uMsg == WM_LBUTTONDOWN)
			{
				//��ʾ��������
				FlagAI = -1;
				cleardevice();
				ShowAllInfor();
			}
		}
		else if (mouseEmsire1.x >= 270 && mouseEmsire1.x <= 580 && mouseEmsire1.y >= 370 && mouseEmsire1.y <= 415)
		{
			//��ѯ����
			setlinecolor(RED);
			rectangle(270, 370, 580, 415);
			if (mouseEmsire1.uMsg == WM_LBUTTONDOWN)
			{
				//��ѯ����
				FlagFPT = -1;
				FoudInfor();
				CommonUserPage();
			}
		}
		else if (mouseEmsire1.x >= 270 && mouseEmsire1.x <= 580 && mouseEmsire1.y >= 500 && mouseEmsire1.y <= 545)
		{
			//����
			setlinecolor(RED);
			rectangle(270, 500, 580, 545);
			if (mouseEmsire1.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				FirstPage();
			}
		}
		//��겻��ѡ��������ͣ
		else
		{
			setlinecolor(WHITE);//�������������ͣʱ��ɫҪ��һ��
			rectangle(270, 240, 580, 285);
			rectangle(270, 370, 580, 415);
			rectangle(270, 500, 580, 545);
		}
	}
}


/*
���ܣ�
���ݲ��ͺ�ԭ��ͼ������ɾ�Ĳ���棬�ʵ����������û������ͬ���������Ӧ������
��������
����ֵ����
*/
void AdDeSeMoPage()
{
	

	//������
	MOUSEMSG mouseEmsire3;

	//Ĭ�Ͻ��ᰴ���ܷ�����


	initgraph(860, 560);


	cleardevice();
	IMAGE pictureEmsire3;
	loadimage(&pictureEmsire3, "./wallhaven-n6yoj7.jpg", 860, 560);//���·�����ǵð�ͼƬ�ŵ�ͬһ�ļ�����
	putimage(0, 0, &pictureEmsire3);
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);//������ɫ����ɫ



	setfillcolor(YELLOW);
	fillrectangle(690, 90, 850, 140);//��
	fillrectangle(690, 190, 850, 240);//ɾ
	fillrectangle(690, 290, 850, 340);//��
	fillrectangle(690, 390, 850, 440);//��
	fillrectangle(690, 490, 850, 540);//���
	fillrectangle(690, 590, 850, 640);//����

	//��ͷ���ֲ���
	setbkmode(TRANSPARENT);
	settextstyle(30, 0, "����");
	outtextxy(0, 0, "����");
	outtextxy(100, 0, "ѧ��");
	outtextxy(200, 0, "����");
	outtextxy(300, 0, "����");
	outtextxy(400, 0, "��ѧ");
	outtextxy(500, 0, "Ӣ��");
	outtextxy(600, 0, "�ܷ�");
	outtextxy(740, 0, "ѡ��");
	outtextxy(740, 100, "���");
	outtextxy(740, 200, "ɾ��");
	outtextxy(740, 300, "����");
	outtextxy(740, 400, "�޸�");
	outtextxy(740, 500, "���");
	outtextxy(740, 600, "����");


	//��ӡ��ǰ�Ѿ��е���Ϣ������¼Ϊ�յ���ʾҲ��������
	S1mplePrint();

	//��������������
	while (1)
	{
		mouseEmsire3 = GetMouseMsg();
		if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 90 && mouseEmsire3.y <= 140)
		{

			setlinecolor(RED);
			rectangle(690, 90, 850, 140);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				//���
				InputInfor();
				cleardevice();
				//��ɲ����������롪��ˢ��
				AdDeSeMoPage();
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 190 && mouseEmsire3.y <= 240)
		{

			setlinecolor(RED);
			rectangle(690, 190, 850, 240);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				//ɾ��
				DeSomeStu();
				//��ɲ����������롪��ˢ��
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
				//��ѯ
				FoudInfor();
				//��ɲ����������롪��ˢ��
				AdDeSeMoPage();
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 390 && mouseEmsire3.y <= 440)
		{
			setlinecolor(RED);
			rectangle(690, 390, 850, 440);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				//�޸�
				ModifyStudInfor();
				//��ɲ����������롪��ˢ��
				AdDeSeMoPage();
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 490 && mouseEmsire3.y <= 540)
		{
			setlinecolor(RED);
			rectangle(690, 490, 850, 540);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				//��ֹ��ɾ��������������ʾ
				HWND hwndDel = GetHWnd();
				int isok = MessageBox(hwndDel, "ȷ�����?", "��ʾ", MB_OKCANCEL);
				if (isok == IDOK)
				{
					//������պ���
					DeleteStuInfor();
					//��ɲ����������롪��ˢ��
					AdDeSeMoPage();
					//������ʾ
					int tips1 = MessageBox(hwndDel, "��ճɹ���", "��ʾ", MB_OK);
				}
				else if (isok == IDCANCEL)
				{
					//���ȡ��������Ӧ
				}
			}
		}
		else if (mouseEmsire3.x >= 690 && mouseEmsire3.x <= 850 && mouseEmsire3.y >= 590 && mouseEmsire3.y <= 640)
		{
			//����
			setlinecolor(RED);
			rectangle(690, 590, 850, 640);
			if (mouseEmsire3.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				//��ɲ����������롪��ˢ��
				AdminPage();

			}
		}
		//��겻��ͣ
		else
		{
			setlinecolor(WHITE);
			rectangle(690, 90, 850, 140);//��
			rectangle(690, 190, 850, 240);//ɾ
			rectangle(690, 290, 850, 340);//��
			rectangle(690, 390, 850, 440);//��
			rectangle(690, 490, 850, 540);//���
			rectangle(690, 590, 850, 640);//����

		}
	}
}


/*
���ܣ�
����Ļ�ϵĶ�Ӧλ�ô�ӡ���ṹ���е�ÿһ��Ԫ��
��������
����ֵ����
*/
void S1mplePrint()
{

}


/*
���ܣ�
��ʾѧ�����ݽ��棬���ܰ�ťΪ�����ĿƳɼ�����ͷ��أ������û������ͬ������ò�ͬ������
��������
����ֵ����
*/
void ShowAllInfor()
{
	//������
	MOUSEMSG SA;
	initgraph(860, 560);
	//Ĭ��ֻ�Ǵ�ӡ���ݵ���Ļ��
	cleardevice();
	IMAGE picture2;
	loadimage(&picture2, "E:\\easyx\\easyx����\\wallhaven.jpg", 860, 560);
	putimage(0, 0, &picture2);

	setfillcolor(GREEN);
	setbkmode(TRANSPARENT);

	fillrectangle(690, 90, 850, 140);
	fillrectangle(690, 190, 850, 240);
	fillrectangle(690, 290, 850, 340);
	fillrectangle(690, 390, 850, 440);
	fillrectangle(690, 590, 850, 640);

	//��ͷ���ֲ���
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
		settextstyle(30, 0, "����");
	outtextxy(0, 0, "����");
	outtextxy(80, 0, "ѧ��");
	outtextxy(200, 0, "����");
	outtextxy(300, 0, "����");
	outtextxy(400, 0, "��ѧ");
	outtextxy(500, 0, "Ӣ��");
	outtextxy(600, 0, "�ܷ�");
	outtextxy(700, 0, "����ʽ");
	outtextxy(700, 100, "����������");
	outtextxy(700, 200, "����ѧ����");
	outtextxy(700, 300, "��Ӣ������");
	outtextxy(700, 400, "���ܷ�����");

	outtextxy(740, 600, "����");
	 
	S1mplePrint();//Ĭ��ֻ�ǵ����Ĵ�ӡ


	while (1)
	{
		SA = GetMouseMsg();
		if (SA.x >= 690 && SA.x <= 850 && SA.y >= 90 && SA.y <= 140)
		{
			//��������
			setlinecolor(RED);
				rectangle(690, 90, 850, 140);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				SortAcChinese();
				//ˢ����������
				ShowAllInfor();
			}
		}
		else if (SA.x >= 690 && SA.x <= 850 && SA.y >= 190 && SA.y <= 240)
		{
			//����ѧ��
			setlinecolor(RED);
			rectangle(690, 190, 850, 240);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				SortAcMath();
				//ˢ����������
				ShowAllInfor();
			}
		}
		else if (SA.x >= 690 && SA.x <= 850 && SA.y >= 290 && SA.y <= 340)
		{
			//��Ӣ����
			setlinecolor(RED);
			rectangle(690, 290, 850, 340);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				SortAcEnglish();
				//ˢ����������
				ShowAllInfor();
			}
		}
		else if (SA.x >= 690 && SA.x <= 850 && SA.y >= 390 && SA.y <= 440)
		{
			//�����ܷ���
			setlinecolor(RED);
			rectangle(690, 390, 850, 440);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				SortAcSumScore();
				//ˢ����������
				ShowAllInfor();
			}

		}
		else if (SA.x >= 690 && SA.x <= 580 && SA.y >= 590 && SA.y <= 640)
		{
			//����
			setlinecolor(RED);
			rectangle(690, 590, 850, 640);
			if (SA.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				//�жϴ��Ǹ����ڵ������
				if (FlagAI == 1)
				{
					AdminPage();
				}
				else if (FlagAI == -1)
				{
					CommonUserPage();
				}
			}
		}
		else
		{
			setlinecolor(WHITE);
			rectangle(690, 90, 850, 140);
			rectangle(690, 190, 850, 240);
			rectangle(690, 290, 850, 340);
			rectangle(690, 390, 850, 440);
			rectangle(690, 590, 850, 640);

		}
		
		
	}
}





/*
���ܣ�
��ӡ�������˵���Ϣ���棬�û��������ʱ����FlagFPT��ֵ�ж�Ӧ�÷��ص��Ǹ�����
������Position �������������±�
����ֵ����
*/
void PrintFoudInfor(int Position)
{
	initgraph(860, 560);
	cleardevice();
	//������
	MOUSEMSG mouseEmsire2;

	IMAGE pictureEmsire2;
	loadimage(&pictureEmsire2, "./wallhaven-ey7wyo.jpg", 860, 760);//���·�����ǵð�ͼƬ�ŵ�ͬһ�ļ�����
	putimage(0, 0, &pictureEmsire2);

	setfillcolor(YELLOW);//�豸�����ɫ����ɫ
	settextcolor(BLACK);//������ɫ����ɫ

	fillrectangle(690, 490, 850, 540);
	setbkmode(TRANSPARENT);

	//��ͷ���ֲ���

	settextstyle(30, 0, "����");
	outtextxy(20, 50, "ѧ��");
	outtextxy(180, 50, "����");
	outtextxy(330, 50, "����");
	outtextxy(480, 50, "��ѧ");
	outtextxy(630, 50, "Ӣ��");
	outtextxy(780, 50, "�ܷ�");
	outtextxy(740, 500, "����");

	//��ӡ����������Ϣ
	//ѧ��
	outtextxy(40, 140, StuArry[Position].s_Num);
	//����
	outtextxy(200, 140, StuArry[Position].s_Name);
	//����
	outtextxy(300, 140, StuArry[Position].s_Chinese);
	//��ѧ
	outtextxy(400, 140, StuArry[Position].s_Math);
	//Ӣ��
	outtextxy(500, 140, StuArry[Position].s_English);
	//�ܷ�
	char SuSo[20];//С���������λ
	outtextxy(600, 140, SuSo);
	sprintf(SuSo, "%.2f", StuArry[Position].s_SumScore);

	while (1)
	{
		mouseEmsire2 = GetMouseMsg();
		if (mouseEmsire2.x >= 690 && mouseEmsire2.x <= 850 && mouseEmsire2.y >= 490 && mouseEmsire2.y <= 540)
		{
			//����
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
		//��겻��ѡ����
		else
		{
			setlinecolor(WHITE);
			rectangle(690, 490, 850, 540);
		}
	}
}




/*
���ܣ�
�޸�ѧ����Ϣ����ȡѧ���±�����������޸�ǰѧ���ɼ���֮�󵯳����뵯�����û������������ݣ�
�޸ĺ��޸ĵ�������������棬�������ļ��У��û���������򷵻ص���ɾ�Ĳ����
��������
����ֵ����
*/
void ModifyStudInfor()
{

}



int main(void)
{
	FirstPage();
	return 0;
}