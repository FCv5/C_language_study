#include <stdio.h>

void move(char holenein, char setzenein)
{
	printf("%c-->%c\n", holenein, setzenein);
}

void hanoi(int n, char ein, char zwei, char drei)
{
	if (n == 1)
	{
		move (ein, drei);
	}
	else
	{
		hanoi(n - 1, ein, drei, zwei);
		move (ein, drei);
		hanoi(n - 1, zwei, ein, drei);
	}
}

main()
{
	int m;
	printf("input the number of diskes:\n");
	scanf("%d", &m);
	printf("The step to moving %3d diskes:\n", m);
	hanoi(m, 'A', 'B', 'C');
}