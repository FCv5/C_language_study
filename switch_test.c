#include <stdio.h>

main(){
	int x;
	scanf("%d", &x);
	if(x < 1)
		printf("y = %d\n", x);
	if(x >= 1 && x < 10)
		printf("y = %d\n", 2 * x - 1);
	if (x >= 10)
		printf("y = %d\n", 3 * x - 11);
	return 0;
}