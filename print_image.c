#include <stdio.h>

void drawDelta(int lines){
	for (int i = 1; i <= lines; i++){
		for (int k = 0; k < lines - i; k++)
			printf(" ");
		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i <= lines; i++){
		for (int k = 0; k < i; k++)
			printf(" ");
		for (int j = 1; j < 2 * (lines - i); j++)
			printf("*");
		printf("\n");
	}
}

int main(){
	int lines;
	scanf("%d", &lines);
	drawDelta(lines);
	return 0;
}

