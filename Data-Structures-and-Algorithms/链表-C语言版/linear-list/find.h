#pragma once
/*������ͷ�ļ�find.h������*/
void find(list *h)
{
	int k;
	list *p;
	p = h->next;
	printf("����Ҫ����ѧ����ѧ��:\n");
	scanf("%d", &k);
	while (p&&p->num != k) p = p->next;
	if (p) {
		printf("ѧ��\t����\t�ɼ�\n");
		printf("%d\t%s\t%d\n", p->num, p->name, p->score);
	}
	else printf("û�ҵ�!\n");
}
