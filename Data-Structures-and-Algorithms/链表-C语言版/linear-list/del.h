#pragma once
/*������ͷ�ļ�del.h������*/
list *del(list *h)
{
	int k;
	list *p, *q;
	q = h;
	p = h->next;
	printf("�������ɾ��ѧ����ѧ��:\n");
	scanf("%d", &k);
	while (p&&p->num != k)
	{
		q = p;
		p = p->next;
	}
	if (p) {
		q->next = p->next;
		free(p);
	}
	else printf("û�����ѧ���ɼ����޷�ɾ��!\n");
	return(h);
}
