#include <stdio.h>

main()
{
	struct student
	{
		int num;
		char name[20];
		float score;
	};
	struct student stu[4];
	struct student *p;
	int i, temp = 0;
	float max;
	for (i = 0; i < 4; i++)
		scanf("%d %s %f", &stu[i].num, &stu[i].name, &stu[i].score);
		for (max = stu[0].score, i = 1; i < 4; i++)
			if (stu[i].score > max)
			{
				max = stu[i].score;
				temp = 1;
			}
		p = stu + temp;
		printf("\n The maximun score:\n");
		printf("No.:%d\nName:%s\nScore:%4.1f\n", p -> num, p -> name, p -> score);
}