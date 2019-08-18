#include <stdio.h>

#define divistor(a, b) (a % b)

main()
{
	int a, b, p;
	printf("bitte gehe zwei Nummer ein:\n");
	scanf("%d, %d", &a, &b);
	printf("Their remainder:\n");
	p = divistor(a, b);
	printf("%d", p);
	return 0;
}