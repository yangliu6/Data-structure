#include "stdafx.h"
/*������������*/
#include"creat.h"
#include"find.h"
#include"insert.h"
#include"output.h"
#include"del.h"
main()
{
	list *p;
	int k; /*����ѭ���ı�־*/
	while (1)
	{
		printf("  ----------------------------------\n");
		printf("  |       ѧ���ɼ�����             |\n");
		printf("  |�ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ�|\n");
		printf("  |       1.�Ǽǳɼ�               |\n");
		printf("  |       2.��ѯ�ɼ�               |\n");
		printf("  |       3:����ɼ�               |\n");
		printf("  |       4.ɾ���ɼ�               |\n");
		printf("  |       5.�������ѧ���ɼ�       |\n");
		printf("  |       0.�˳�����               |\n");
		printf("  ----------------------------------\n");
		printf("  ���������ѡ��\n");
		scanf("%d", &k);
		switch (k)
		{
		case 1: p = create();  break;
		case 2: find(p);     break;
		case 3: p = insert(p); break;
		case 4: p = del(p);    break;
		case 5: output(p);   break;
		case 0: exit(0);
		default: printf("ѡ��������¿�ʼ!\n");
		}
	}
}
