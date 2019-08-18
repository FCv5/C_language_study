#include <stdio.h>
#include <math.h>

float j;
int a1(float a, float b, float c)
{
	float k = -b / (2 * a);
return k;	
}

int a2(float a, float b, float c)
{
	float k = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	j = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	return k;
}

main()
{
	float a, b, c, i;
	printf("Please enter a, b,c to count a*x^2+bx+c:\n");
	scanf("%f, %f, %f", &a, &b, &c);
	c = pow(b, 2) - 4 * a * c;
	if (c <= 0.0000001 && c >= -0.0000001)
	{
		i = a1(a, b, c);
		printf("the root is:%5.2f\n", i);
	}
	else
		if (c > 0)
		{
			i = a2(a, b, c);
			printf("the roots are:%5.2f, %5.2f\n", i, j);
		}
		else
			printf("No root!\n");
}