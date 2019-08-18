# include<stdio.h>

main(){
	float c, F;
	scanf("%f", &F);
	c = 5 * (F - 32) / 9;
	printf("The degrees:, %5.2f", c);
	return 0;
} 