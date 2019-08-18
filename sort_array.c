#include <stdio.h>

void sort(int array[], int n)
{
	int j, k, t, i;
	for (i = 0; j < n - 1; i++)
	{
		k = 1;
		for (j = i + 1; j < n; j++)
			if (array[j] < array[k])
				k = j;
		t = array[k]; array[k] = array[i]; array[i] = t;
	}
}

main()
{
	int a[10];
	printf("enter the array:\n");
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	sort(a, 10);
	printf("the sorted array: \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}
}