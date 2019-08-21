#include <stdio.h>

#define Ten 10
#define Hundred 10 * 10
#define Thousand 10 * 10 * 10

main()
{
	int end;
	int a, b, c, d;
	for (a = 0; a <= 9; a++)
		for (b = 0; b <= 9; b++)
			for (c = 0; c <= 9; c++)
				for (d = 0; d <= 9; d++)
				{
					if ((c * Hundred + d * Ten + c) + (a * Hundred + b * Ten + c) == (a * Thousand + b * Hundred + c * Ten + d))
					{
						end = (a * Thousand + b * Hundred + c * Ten + d);
						printf("Diese vier nummmer sind:\na = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
						printf("und das Ende ist: %d\n", end);
					}
				}
}