#include <stdio.h>

int polya(int n, float x)
{
	double j;
	if (n == 0)
		j = 1;
	else
		if (n == 1)
			j = x;
		else
			j = ((2.0 * n - 1) * x - polya(n - 1, x) - (n - 1) * polya(n - 2, x)) / n;
	return j;
}

main()
{
	int n;
	float x;
	double j = 0.0;
	scanf("%d, %f", &n, &x);
	j = polya(n, x);
	printf("%f\n", j);
	return 0;
}