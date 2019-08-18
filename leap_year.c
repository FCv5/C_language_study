#include <stdio.h>

#define LEAP_YEAR(y) (y % 4 == 0)

main()
{
	int year;
	printf("Bitte gehen Sie Jahr ein:\n");
	scanf("%d", &year);
	if (LEAP_YEAR(year))
		printf("%d ist ein Schaltjahr", year);
	else
		printf("%d ist nicht ein Schaltjahr", year);
	return 0;
}