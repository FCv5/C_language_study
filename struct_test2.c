#include <stdio.h>
#include <string.h>

main()
{
	struct student
	{
		long int num;
		char name[20];
		char sex;
		float score;
	};
	struct student stu_1;
	struct student *p;
	p = &stu_1;
	stu_1.num = 89101;
	strcpy(stu_1.name, "Li Lin");
	stu_1.sex = 'M';
	stu_1.score = 89.5;
	printf("No. :%1d\nname:%s\nsex:%c\nscore:%1.1f\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
	printf("\nNo. :%1d\nname:%s\nsex:%c\nscore:%1.1f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
}