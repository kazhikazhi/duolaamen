#include<graphics.h> //����ͼ�ο�ͷ�ļ�
#include<conio.h> //ͨ������̨���������������������ĺ�������Ҫ��һЩ�û�ͨ�������̲����Ķ�Ӧ����
		//���糣�õ�getch()�������������ͷ�ļ��ﶨ���
#define PI 3.1415926
void DrawHead();
void Body();
void main()
{
	initgraph(640,480);
	setbkcolor(WHITE);
	cleardevice();
	DrawHead();
	Body();
	_getch();
	closegraph();
}
void DrawHead()
{
	//��ͷ
	setorigin(320,120);
	setfillcolor(RGB(7,190,234));
	setlinecolor(BLACK);
	fillroundrect(-130,-120,130,120,240,260);
	//����
	setfillcolor(WHITE);
	fillellipse(-100,-40,100,110);
	//�۾�
	fillroundrect(-50,-60,0,0,40,50);
	fillroundrect(0,-60,50,0,40,50);
	//����
	setfillcolor(BLACK);
	fillcircle(-15,-15,7);
	fillcircle(15,-15,7);
	//����
	setfillcolor(RGB(201,62,0));
	fillcircle(0,0,10);
	//����
	line(0,10,0,80);
	//��
	arc(-70,80,70,-50,PI*5/4,PI*7/4);
	//����
	line(-68,0,-35,20);
	line(-75,30,-35,30);
	line(-68,60,-35,40);
	line(68,0,35,20);
	line(75,30,35,30);
	line(68,60,35,40);
	
}
void Body()
{
	setorigin(320,120);
	//�ֱ�
	line(-62,110,-120,140);
	line(62,110,120,140);
	line(-77,150,-110,166);
	line(77,150,110,166);
	//��
	line(-77,140,-77,240);
	line(77,140,77,240);
	arc(-10,230,10,250,0,PI);
	//��
	setfillcolor(WHITE);
	fillcircle(-120,155,21);
	fillcircle(120,155,21);
	//��
	fillroundrect(-85,240,-2,255,30,30);
	fillroundrect(85,240,2,255,30,30);
	//���������ɫ
	setfillcolor(RGB(7,190,234));
	floodfill(0,200,BLACK);
	//��Ƥ
	setfillcolor(WHITE);
	fillcircle(0,165,60);
	solidrectangle(-100,100,100,115);
	pie(-45,110,45,205,PI,0);
	//����
	//����
	setfillcolor(RGB(169,38,0));
	fillroundrect(-80,100,80,115,12,12);
	//��������
	setfillcolor(RGB(245,237,38));
	fillcircle(0,120,13);
	//�����ϵĶ�
	setfillcolor(BLACK);
	fillcircle(0,124,2);
	setlinestyle(PS_SOLID,3);
	line(0,126,0,133);
	//�����ϵ���·
	setlinestyle(PS_SOLID,1);
	line(-10,114,10,114);
	line(-12,116,12,116);
}