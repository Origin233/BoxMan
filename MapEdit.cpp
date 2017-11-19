/****************************************************
最后修改 2017.8.26 版本 Beta 未完工
****************************************************/
#include <iostream>
#include <windows.h>
using namespace std;


void begin()
{
	system("cls");
	int a = 0, b = 0;
	cout << "/****************************************/" << endl;
	cout << "请输入你想制作地图的行数(横):";
		cin >> a;
	cout << endl << "请输入你想制作地图的列数(竖):";
		cin >> b;

	system("cls");
	cout<< "/****************************************/" << endl;
	cout << "你的地图的最大行数:" << x <<"    "<< "你的地图的最大列数:" << y;
	
	//设置光标坐标
	int x = 0, y = 0;
	HANDLE hOut;
	COORD pos = { x,y };
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);  //取窗口句柄
	SetConsoleCursorPosition(hOut, pos);
}

int MapEditor()
{

	/***************开始文本*****************/
	system("cls");
	cout << "  推方块地图设计器Beta版\n";
	cout << "输入1查看说明 输入2开始使用\n";
	int a=0;
	cin >> a;
	if (a = 1)
	{
		cout << "本地图编辑器编辑地图时用数字0，1，2，3，4来代替空地，墙，箱子，目的地 和人\n";
		cout << "使用时要先输入你想制作地图的行数(横) 再输入列数(竖) 然后输入用1234代替的各种物品\n";
		cout << "注：编辑地图时可以使用回车键，用指定的按键退出编辑或保存。";

	}
	else if (a = 2)
	{
	}
	else
	{
		cout << "你输入的字符无法识别";
	}
	/****************************************/


	return 0;
}

