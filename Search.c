#include <stdio.h>
main()
{
	int i[15] = {5, 6, 7, 9, 16, 19, 28, 34, 54, 76, 80, 90, 91, 97, 99};
	int m, mid, l = 0, r = 14;
	printf("Please enter a number:\n");
	scanf("%d", &m);
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (i[mid] == m)
		{
			printf("i[%d] = %d\n",mid, i[mid]);	
			break;
		}
		else
			if (m > i[mid])
				l = mid + 1;
			else
				r = mid - 1;
	}
	if (l > r)
		printf("Not Found");
	return 0;
}