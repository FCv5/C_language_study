#include <stdio.h>

main()
{
	int array[101][101], i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &array[i][j]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == n - 1)
				printf("%d\n", array[j][i]);
			else
				printf("%d ", array[j][i]);
		}
	}
}