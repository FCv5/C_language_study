#include <stdio.h>
#include "math.h"

main(){
	float pi, i, n, s;
	s = 1;
	pi = 0;
	i = 1;
	n = 1;
	while (fabs(i) >= 0.000001){
		pi = pi + i;
		n = n + 2;
		s = -s;
		i = s / n;
	}
	pi = pi * 4;
	printf("pi = %10.6f\n", pi);
}