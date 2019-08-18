#include <stdio.h>

main(){
	int i;
	scanf("%d", &i);
	if(i > 1 && i % 2 == 0 && i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
		printf("%d is not a prime number\n", i);
	else
		printf("%d is a prime number\n", i);
}