#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

int main()
{
	mciSendString("open C:\\Users\\Administrator\\Desktop\\test_c\\testsound.mp3", NULL, 0, NULL);
	mciSendString("play C:\\Users\\Administrator\\Desktop\\test_c\\testsound.mp3", NULL, 0, NULL);
	return 0;
}