#include <stdio.h>
	
main(){
	int x, y = 0;
	for (x = 1; x <= 100; x ++)
		y = y + x;
	printf("y = %d\n", y);

	int i, sum;
	i = 1;
	sum = 0;
	while (i <= 100){
		sum = sum + i;
		i++;
	}
	printf("sum = %d\n", sum);
}
