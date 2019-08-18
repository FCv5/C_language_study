#include <stdio.h>
#include <stdlib.h>


main(){
	int line, num = 1;
	int n, m;
	printf("Please input the number: ");
	scanf("%d", &line);
	printf("1 \n");
	for (n = 2; n <= line; num = 1, n++){
		printf("1 ");
		for (m = 1; m < n - 1; m++)
			printf("%d ", num = (n - m) * num / m);
		printf("1 \n");
	}
	return 0;
}

/*
const int line = 10;
main(){
	int n, a[line][line], i;
	for (i = 0; i < line; i++){
		a[i][0] = 1;
		a[i][i] = 1;
		for (n = 1; n < i; n++)
			a[i][n] = a[i - 1][n - 1] + a[i - 1][n];
	}
	for (i = 0; i < line; i++){

		for (n = 0; n < line - i - 1; n++)
			printf(" ");
		for (n = 0; n <= i; n++)
			printf("%-5d", a[i][n]);
		printf("\n");
	}
}
*/