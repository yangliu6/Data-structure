#pragma once
void output(list *h)
{
	list *p;
	p = h->next;
	while (p != NULL)
	{
		printf("ѧ��\t����\t�ɼ�\t\n");
		printf("%d\t%s\t%d\n", p->num, p->name, p->score);
		p = p->next;
	}
}
