#include <stdio.h>

main(){
	int peach = 1;
	for (int t = 1; t < 10; t++)
		peach = (peach + 1) * 2;
	printf("Total peaches: %d", peach);
	return 0;
}