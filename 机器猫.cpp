#include<graphics.h> //引用图形库头文件
#include<conio.h> //通过控制台进行数据输入和数据输出的函数，主要是一些用户通过按键盘产生的对应操作
		//比如常用的getch()函数就是在这个头文件里定义的
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
	//画头
	setorigin(320,120);
	setfillcolor(RGB(7,190,234));
	setlinecolor(BLACK);
	fillroundrect(-130,-120,130,120,240,260);
	//画脸
	setfillcolor(WHITE);
	fillellipse(-100,-40,100,110);
	//眼睛
	fillroundrect(-50,-60,0,0,40,50);
	fillroundrect(0,-60,50,0,40,50);
	//眼球
	setfillcolor(BLACK);
	fillcircle(-15,-15,7);
	fillcircle(15,-15,7);
	//鼻子
	setfillcolor(RGB(201,62,0));
	fillcircle(0,0,10);
	//人中
	line(0,10,0,80);
	//嘴
	arc(-70,80,70,-50,PI*5/4,PI*7/4);
	//胡子
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
	//手臂
	line(-62,110,-120,140);
	line(62,110,120,140);
	line(-77,150,-110,166);
	line(77,150,110,166);
	//腿
	line(-77,140,-77,240);
	line(77,140,77,240);
	arc(-10,230,10,250,0,PI);
	//手
	setfillcolor(WHITE);
	fillcircle(-120,155,21);
	fillcircle(120,155,21);
	//脚
	fillroundrect(-85,240,-2,255,30,30);
	fillroundrect(85,240,2,255,30,30);
	//身体填充颜色
	setfillcolor(RGB(7,190,234));
	floodfill(0,200,BLACK);
	//肚皮
	setfillcolor(WHITE);
	fillcircle(0,165,60);
	solidrectangle(-100,100,100,115);
	pie(-45,110,45,205,PI,0);
	//铃铛
	//绳子
	setfillcolor(RGB(169,38,0));
	fillroundrect(-80,100,80,115,12,12);
	//铃铛外形
	setfillcolor(RGB(245,237,38));
	fillcircle(0,120,13);
	//铃铛上的洞
	setfillcolor(BLACK);
	fillcircle(0,124,2);
	setlinestyle(PS_SOLID,3);
	line(0,126,0,133);
	//铃铛上的纹路
	setlinestyle(PS_SOLID,1);
	line(-10,114,10,114);
	line(-12,116,12,116);
}