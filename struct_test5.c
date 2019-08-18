#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)

struct student
{
	long num;
	float score;
	struct student *next;
};

int n;

struct student *creat()
{
	struct student *head;
	struct student *p1, *p2;
	n = 0;
	p1 = p2 = (struct student *)malloc(LEN);
	scanf("%1d, %f", &p1->num, &p1->score);
	head = NULL;
	
	while (p1->num != 0)
	{
		n++;
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct student *)malloc(LEN);
		scanf("%1d, %f", &p1->num, &p1->score);
	}
	p2 -> next = NULL;
	return(head);
}

void print(struct student *head)
{
	struct student *p;
	printf("\nNow, These %d records are:\n", n);
	p = head;
	if (head != NULL)
		do
		{
			printf("%1d %5.1f\n", p -> num, p -> score);
			p = p -> next;
		}while (p != NULL);
}
/**
struct student *del(struct student *head, long num)
{
	struct student *p1, *p2;
	if (head == NULL)
	{
		printf("\nlist null!\n");
		goto end;
	}
	p1 = head;
	while (num != p1 -> num && p1 -> next != NULL)
	{
		p2 = p1;
		p1 = p1 ->next;
	}
	if (num == p1 -> num)
	{
		if(p1 == head)
			head = p1 -> next;
		else
			p2 -> next = p1 -> next;
		printf("delete:%1d\n", num);
		n--;
	}
	else
		printf("%1d not been found!\n", num);
	end;
	return(head);
}

struct student *insert(struct student *head, *stud)
{
	struct student *p0, *p1, *p2;
	p1 = head;
	p0 = stud;
	if (head == NULL)
	{
		head = p0;
		p0 -> next = NULL;
	}
	else
	{
		while ((p0 -> num >p1 -> num) && (p1 -> next != NULL))
		{
			p2 = p1;
			p1 = p1 -> next;
		}
		if (p0 -> num <= p1 -> num)
		{
			if (head == p1)
				head = p0;
			else
			{
				p2 -> next = p0;
				p0 -> next = p1;
			}
		}
		else
		{
			p1 -> next = p0;
			p0 -> next = NULL;
		}
	}
	n++;
	return(head);
}
**/
main()
{
	struct student *head, stu;
	long del_num;
	printf("input records:\n");
	head = creat();
	print(head);
	/**
	printf("\ninput the deleted number:");
	scanf("%1d", &del_num);
	head = del(head, del_num);
	print(head);
	printf("\ninput the insert number:");
	scanf("%1d, %f", &stu.num, &stu.score);
	head = insert(head, &stu);
	print(head);
	**/
}