#include <stdio.h>

void constring(char str1[], char str2[], char str[]);
int main(void){
	char str1[100], str2[100], str[200];
	gets(str1);
	gets(str2);
	constring(str1, str2, str);
	printf("%s\n", str);
}

void constring(char str1[], char str2[], char str[]){
	int i, j;
	for (i = 0; str1[i] != '\0'; i++)
		str2[i] = str1[i];
	for (j = 0; str[j] != '\0'; j++)
		str2[i + j] = str[j];
	str2[i + j] = '\0';
}