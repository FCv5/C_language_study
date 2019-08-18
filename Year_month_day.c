#include <stdio.h>

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int total(int y, int m, int d)
{
	int days, i;
	if (m > 2 && y % 4 == 0)
		days = 1;
	else
		days = 0;
	for (i = 0; i < m - 1; i++)
		days += month[i];
	days += d;
	return days;
}

main()
{
	int year, month, day, days;
	printf("Bitte gehen Sie das Jahr ein:\n");
	scanf("%d", &year);
	printf("Bitte gehen Sie das Monat ein:\n");
	scanf("%d", &month);
	printf("Bitte gehen Sie das Tag ein:\n");
	scanf("%d", &day);
	printf("Am ist der %d.%d.%d\n", day, month, year);
	days = total(year, month, day);
	printf("Hier ist der %d Tag des Jahres %d!\n", days, year);
}