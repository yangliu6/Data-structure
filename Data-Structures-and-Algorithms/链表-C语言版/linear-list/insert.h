#pragma once
list *insert(list *h)
{
	list *p, *q, *r, *head;
	head = r = h;
	p = h->next;
	q = (list *)malloc(sizeof(list));
	printf("  ----------------------------------\n");
	printf("输入待插入学生的学号:\n");
	scanf("%d", &q->num);
	printf("输入姓名:\n");
	scanf("%s", q->name);
	printf("输入成绩:\n");
	scanf("%d", &q->score);
		q->next = NULL;
	while (p)
	{
		r = p;
		p = p->next;
	}
	r->next = q;
	r = r->next;
	return(head);
}
