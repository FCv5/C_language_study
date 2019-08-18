#include <stdio.h>

int prime(int pri)
{
	int i = 2;
	if (pri <= 2)
		return -1;
	else
	{
		for (i = 2; i < pri; i++)
			if (pri % i == 0)
				return pri;
			else
				return -1;
	}
}

main()
{
	int num, i;
	printf("Please enter a number:");
	scanf("%d", &num);
	printf("\n");
	i = prime(num);
	if (i != -1)
		printf("%d is prime_number:\n", num);
	else
		printf("%d is not prime_number:\n", num);
}