#include <stdio.h>
#include <string.h>
#define format "%d\n%s\n%f\n%f\n%f\n"

struct student
{
	int num;
	char name[20];
	float score[3];
};

void print(struct student *p)
{
	printf(format, p -> num, p -> name, p -> score[0], p -> score[1], p -> score[2]);
	printf("\n");
}

main()
{
	struct student stu;
	stu.num = 12345;
	strcpy(stu.name, "Li Li");
	stu.score[0] = 67.5;
	stu.score[1] = 89;
	stu.score[2] = 78.6;
	print(&stu);
}
