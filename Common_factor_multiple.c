#include <stdio.h>

int array(int a, int b)
{
	int i, t;
	if (a <= 0 || b <= 0)
		return -1;
	t = a < b ? a : b;
	for (i = t; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;		
			break;
		}
	}
	return 1;
}

int raary(int a, int b){
	int max, j;
	if (a > b)
		max = a;
	else
		max = b;
	for (j = max; j > 0; j++)
		if(j % a == 0 && j % b == 0)
		{
			return j;
			break;
		}
}
		
main()
{
	int factor, multiple, k, j;
	printf("Please enter a common factor:\n");
	scanf("%d", &factor);
	printf("Please enter a common multiple:\n");
	scanf("%d", &multiple);
	k = array(factor, multiple);
	j = raary(factor, multiple);
	if (k != -1)
	{
		printf("the  maximum common factor of %d and %d is %d\n", factor, multiple, k);
		printf("the  minimum common multiple of %d and %d is %d\n", factor, multiple, j);
	}
	else
		printf("They are not common factor\n");
}