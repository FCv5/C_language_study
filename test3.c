#include <stdio.h>
#include <string.h>

main(){
	int a, b, c, d, e;
	a = 12, b = 13, c = 11, d = 321, e = 3213;
	printf("%x\n%x\n%x\n%x\n%x\n", &a, &b, &c, &d, &e); 
}