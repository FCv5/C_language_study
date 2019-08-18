#include <stdio.h>

float max = 0, min = 0;
float value(float array[], int n)
{
	float ave, sum = array[0];
	max = min = array[0];
	for (int i = 1; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
		sum = sum + array[i];
	}
	ave = sum / n;
	return (ave);
}

int main()
{
	float score[10], ave;
	int i;
	printf("Please enter ten numbers:\n");
	for (i = 0; i < 10; i++)
		scanf("%f", &score[i]);
	ave = value(score, 10);
	printf("The max_munber is:%10.2f\nThe min_number is:%10.2f\nThe average number is:%10.2f\n", max, min, ave);
	return 0;
}