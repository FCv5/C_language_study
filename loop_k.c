#include <stdio.h>
#include "math.h"

main(){
	float sum = 0.0, sum_100 = 0.0, sum_50 = 0.0, sum_10 = 0.0;
	for(int k = 1; k <= 10; k++)
		sum_10 = sum_10 + 1.0 / k;
	for(int k = 1; k <= 50; k++)
		sum_50 = sum_50 + pow(k, 2);
	for(int k = 1; k <= 100; k++)
		sum_100 = sum_100 + k;
	sum = sum_100 + sum_50 + sum_10;
	printf("k = %4.4f", sum);
	return 0;
}