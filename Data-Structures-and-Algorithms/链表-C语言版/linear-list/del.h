#pragma once
/*以下是头文件del.h的内容*/
list *del(list *h)
{
	int k;
	list *p, *q;
	q = h;
	p = h->next;
	printf("请输入待删除学生的学号:\n");
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
	else printf("没有这个学生成绩，无法删除!\n");
	return(h);
}
