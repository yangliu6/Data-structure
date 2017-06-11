#include "stdafx.h"
/*以下是主程序*/
#include"creat.h"
#include"find.h"
#include"insert.h"
#include"output.h"
#include"del.h"
main()
{
	list *p;
	int k; /*控制循环的标志*/
	while (1)
	{
		printf("  ----------------------------------\n");
		printf("  |       学生成绩管理             |\n");
		printf("  |＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿|\n");
		printf("  |       1.登记成绩               |\n");
		printf("  |       2.查询成绩               |\n");
		printf("  |       3:插入成绩               |\n");
		printf("  |       4.删除成绩               |\n");
		printf("  |       5.输出所有学生成绩       |\n");
		printf("  |       0.退出程序               |\n");
		printf("  ----------------------------------\n");
		printf("  请输入你的选择\n");
		scanf("%d", &k);
		switch (k)
		{
		case 1: p = create();  break;
		case 2: find(p);     break;
		case 3: p = insert(p); break;
		case 4: p = del(p);    break;
		case 5: output(p);   break;
		case 0: exit(0);
		default: printf("选择错误，重新开始!\n");
		}
	}
}
