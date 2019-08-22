#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

#define up 'w'
#define down 's'
#define left 'a'
#define right 'd'
#define pause 'p'

void gotoxy(int x, int y);			//光标跳转
void welcome();						//主界面
void gamescreen();					//游戏界面
void xyframe(int x, int y);			//边框字符打印

/*全局变量和预处理*/
char name[30];

/*主函数*/
int main()
{
	system("color 0B");
	welcome();
	gamescreen();
	system("pause");
	system("cls");
	return 0;
}

/*光标跳转（完全照网上的我不是特别清楚。。。）*/
void gotoxy(int x, int y)
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}

/*k开始界面（利用gotoxy函数进行打印）*/
void welcome()
{
	gotoxy(15, 5);
	printf("/***************************************************/");
	gotoxy(30, 6);
	printf("Welcome to the snake!!!");
	gotoxy(15, 7);
	printf("The arrow keys are: w s a d. And the pause bottom: p");
	gotoxy(22, 10);
	printf("Eat more food to win higher score!!!\x2\x2\x2");
	gotoxy(18, 8);
	printf("Please enter your name to start the game:");
	scanf("%s", &name);
	system("cls");
}

/*打印游戏界面，i是一个循环变量，此处用来打印边框*/
void gamescreen()
{
	int i;
	for (i = 0; i < 58; i += 2)		//进行边框打印
	{
		xyframe(i, 0);			//以下边框打印用xyframe函数
		xyframe(i, 26);	
	}
	for (i = 1; i < 26; i++)
	{
		xyframe(0, i);
		xyframe(56, i);
	}
}

/*边框字符打印*/
void xyframe(int x, int y)
{
	gotoxy(x, y);
	printf("*");	
}