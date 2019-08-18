#include <stdio.h>
#include "math.h"

main(){
float a, b, c, disc, x1, x2, realpart, imagpart;
scanf("%f, %f, %f", &a, &b, &c);
printf("The quation");
if (fabs(a) <= 0.000001)
	printf("is not quadratic");
else
	disc = b * b - 4 * a * c;
if (fabs(disc) <= 0.000001)
	printf("has two equal roots:%8.4f\n", -b / (2 * a));
else if (disc > 0.000001)
	{x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);
	printf("has distinct real roots:%8.4f and %8.4f\n", x1, x2);
	}
else
	{realpart = -b / (2 * a);
	imagpart = sqrt(-disc) / (2 * a);
	printf("has complex roots:\n");
	printf("%8.4f + %8.4f\n", realpart, imagpart);
	printf("%8.4f - %8.4f\n", realpart, imagpart);
	}
}