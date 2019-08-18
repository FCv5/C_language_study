#include <stdio.h>



int main(){
	int max(int x, int y, int z);
	int a, b, c, d;
	scanf("%d, %d, %d", &a, &b, &c);
	/**
	a=7;
	b=1;
	c=4;
	**/
	d = max(a, b, c);
	printf("max = %d", d);
}

int max(int x, int y, int z){
	int m;
	if(x > y)
		if(x > z)
			m = x;
		else
			m = z;
	else
		if(y > z)
			m = y;
		else
			m = z;
	return m;
}
