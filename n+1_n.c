#include <stdio.h>

main(){
	int f1 = 1, f2 = 1, sum;
	sum = f1 + f2;
	for(int k = 1; k < 10; k ++){
		f1 = f1 + f2;
		sum += f1;
		f2 = f2 + f1;
		sum += f2;
	}
	printf("sum = %d", sum);
}