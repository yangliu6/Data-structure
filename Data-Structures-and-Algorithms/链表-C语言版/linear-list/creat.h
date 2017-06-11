#pragma once
/*头文件creat.h的内容*/
#include"hh.h"
list *create()
{
	list *head, *p, *r;
	int i, n;
	head = (list *)malloc(sizeof(list));
	head->next = NULL;
	r = head;
	printf("请输入学生人数:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		p = (list *)malloc(sizeof(list));
		printf("  -----     --------     ------\n");
		printf("输入学生的学号:\n");
		scanf("%d", &p->num);
		printf("输入学生的姓名:\n");
		scanf("%s", p->name);
		printf("输人学生的成绩:\n");
		scanf("%d", &p->score);
		p->next = NULL;
		r->next = p;
		r = r->next;
	}
	return(head);
}
