#include <stdio.h>
#include <math.h>

#define s(a, b, c) ((0.5) * ((a) + (b) + (c)))
#define area(s, a, b, c) sqrt((s) * ((s) - (a)) * ((s) - (b)) * ((s) - (c)))

main()
{
	float a, b, c, s1, area1;
	printf("Please input the three sides of the triangle:\n");
	scanf("%f, %f, %f", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > c))
	{
		s1 = s(a, b, c);
		area1 = area(s1, a, b, c);
		printf("The area of triangle is:%3.2f\n", area1);
	}
	else
		printf("The triangle is invalid!\n");
	return 0;
}