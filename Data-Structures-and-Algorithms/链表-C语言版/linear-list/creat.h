#pragma once
/*ͷ�ļ�creat.h������*/
#include"hh.h"
list *create()
{
	list *head, *p, *r;
	int i, n;
	head = (list *)malloc(sizeof(list));
	head->next = NULL;
	r = head;
	printf("������ѧ������:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		p = (list *)malloc(sizeof(list));
		printf("  -----     --------     ------\n");
		printf("����ѧ����ѧ��:\n");
		scanf("%d", &p->num);
		printf("����ѧ��������:\n");
		scanf("%s", p->name);
		printf("����ѧ���ĳɼ�:\n");
		scanf("%d", &p->score);
		p->next = NULL;
		r->next = p;
		r = r->next;
	}
	return(head);
}
