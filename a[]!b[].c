#include <stdio.h>

int large_(int x, int y)
{
	int flag;
	if (x > y)
		flag = 1;
	else
		if (x < y)
			flag = -1;
		else
			flag = 0;
	return (flag);
}

main()
{
	int a[10], b[10], i, n = 0, m = 0, k = 0;
	
	printf("Enter array a:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);	
	}
	printf("\n");
	printf("Enter array b:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("\n");
	
	for (i = 0; i < 10; i++)
	{
		if (large_(a[i], b[i]) == 1)
			n = n + 1;
		else
			if (large_(a[i], b[i]) == 0)
				m = m + 1;
			else
				k = k + 1;
	}
	printf("a[i] > a[i] %d times\na[i] = b[i] %d times\na[i] < b[i] %d times\n", n, m, k);
	if (n > k)
		printf("array a is larger than array b\n");
	else
		if (n < k)
			printf("array a is smaller than array b\n");
		else
			printf("array a is equal to array b\n");
}

