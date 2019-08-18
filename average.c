#include <stdio.h>

float _average(float array[10])
{
	float aver, sum = array[0];
	for (int i = 1; i < 10; i++)
	{
		sum = sum + array[i];
		aver = sum / 10;
	}
	return(aver);
}

int main()
{
	float aver, score[10];
	printf("input 10 scores: \n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	printf("\n");
	aver = _average(score);
	printf("average score is %5.2f\n", aver);
}