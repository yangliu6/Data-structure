#pragma once
list *insert(list *h)
{
	list *p, *q, *r, *head;
	head = r = h;
	p = h->next;
	q = (list *)malloc(sizeof(list));
	printf("  ----------------------------------\n");
	printf("���������ѧ����ѧ��:\n");
	scanf("%d", &q->num);
	printf("��������:\n");
	scanf("%s", q->name);
	printf("����ɼ�:\n");
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
