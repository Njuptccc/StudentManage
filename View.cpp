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