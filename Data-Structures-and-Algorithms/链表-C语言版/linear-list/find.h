#pragma once
/*以下是头文件find.h的内容*/
void find(list *h)
{
	int k;
	list *p;
	p = h->next;
	printf("输入要查找学生的学号:\n");
	scanf("%d", &k);
	while (p&&p->num != k) p = p->next;
	if (p) {
		printf("学号\t姓名\t成绩\n");
		printf("%d\t%s\t%d\n", p->num, p->name, p->score);
	}
	else printf("没找到!\n");
}
