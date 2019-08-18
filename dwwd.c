#include <stdio.h>
#include <string.h>

main()
{
	char a[] = {"China"}, b[] = {"Chiana"};
	if (strcmp(a, b) == 0)
		printf("Yes");
	else
		printf("No");
	strcpy(b, a);
	if (strcmp(a, b) == 0)
		printf("Yes");
	else
		printf("No");
}