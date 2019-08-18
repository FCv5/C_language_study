#include <stdio.h>

int inv(int a[3], int n)
{
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < 2 - i; k++)
			if (a[k] > a[k + 1])
			{
				j = a[k];
				a[k] = a[k + 1];
				a[k + 1] = j;
			}
	}
}

main()
{
	int *p, a[3], i;
	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	printf("\nThe original array:");
	for (p = a; p < (a + 3); p++)
		printf(" %d", *p);
	inv(a, i);
	printf("\nThe inverted array:");
	for (p = a; p < (a + 3); p++)
		printf(" %d", *p);
}