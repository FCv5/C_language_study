#include <stdio.h>

#define CHANGE 1

main()
{
	char string[100];
	char i;
	printf("Bitte gehen Sie Charakter:\n");
	gets(string);
	printf("Das ist ausgaben Charakter:\n");
	#if(CHANGE)
		for (i = 0; string[i] != '\0'; i++)
		{
				if(string[i] >= 'a' && string[i] < 'z' || string[i] >= 'A' && string[i] < 'Z')
					string[i]++;
				else
					if(string[i] == 'z' || string[i] == 'Z')
						string[i] -= 25;
		}
	#endif
	printf("%s", string);
}