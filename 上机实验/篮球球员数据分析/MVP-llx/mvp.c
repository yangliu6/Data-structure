/*
数据结构上机实验 综合实验四
姓名	李令新
班级	信管1501 
学号	0121503490118
老师	燕翔
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

#include "listNode.h"
#include "player.h"

#include "command.h"
#include "fileRead.h"
#include "contExec.h"
#include "kmp.h"

static short isFileReaded = 0;
static short isSorted = 0;
int main(void)
{
	system("cls");

	printf("\t===============\n");
	printf("\t数据结构上机试验-综合实验四\n");
	printf("\t===============\n\n");

	command();
	return 0;
}