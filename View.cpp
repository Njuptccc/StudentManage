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