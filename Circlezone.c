#include <stdio.h>
#include "math.h" 

main(){
	int h = 10;
	float x, y, d1, d2, d3, d4;
	scanf("%f, %f", &x, &y);
	d1 = pow(x - 2, 2) + pow(y - 2, 2);
	d2 = pow(x + 2, 2) + pow(y - 2, 2);
	d3 = pow(x + 2, 2) + pow(y + 2, 2);
	d4 = pow(x - 2, 2) + pow(y + 2, 2);
	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1)
		h = 0;
	printf("Height_value: %d", h);
	return 0;
}