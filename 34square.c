#include <stdio.h>

int max_value(int array[][4])
{
	int max;
	max = array[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			if (array[i][j] > max)
				max = array[i][j];
	}
	return(max);
}

main()
{
	static int a[3][4] = {{1, 3, 5, 7}, {2, 4, 6, 8}, {15, 17, 34, 12}};
	printf("max value is %d\n", max_value(a));
	return 0;
}