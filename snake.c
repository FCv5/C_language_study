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

void welcome();						//主界面
void gotoxy(int x, int y);			//光标跳转

char name[30];

int main()
{
	system("color 0B");
	welcome();
	return 0;
}

void welcome()
{
	
	gotoxy(15, 5);
	printf("/**********************************************/");
	gotoxy(20, 6);
	printf("Please enter your name to start the game:");
	scanf("%s", &name);
	system("cls");
}

void gotoxy(int x, int y)
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}