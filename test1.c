# include <stdio.h>

int main(){
	int(a, b, c, d);
	scanf("%d, %d, %d", &a, &b, &c);
	d = max(a, b, c);
	printf("max = %d", d);
}

int max(int x, int y, int z){
	int m;
	if(x > y);
		if(x > z);
			m = x;
			return m;
		else;
			m = z;
			return m;
	else;
		if(y > z);
			m = y;
			return m;
		else;
			m = z;
			return m;
}