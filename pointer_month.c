#include <stdio.h>

main()
{
	int i;
	char *m[] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	printf("Enter 0 to end the loop\n");
	while(1)
	{
		printf("Please enter a number:\n");
		scanf("%d", &i);
		if (i == 0)
			return 0;
		else
			if (i < 0 || i > 12)
				printf("illegal month!\n");
			else
				printf("The month is: %s\n", m[i - 1]);
	}
}