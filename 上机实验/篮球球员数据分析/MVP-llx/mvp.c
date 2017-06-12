#pragma execution_character_set("utf-8")
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
#include <ctype.h>
#include <locale.h>

#include "function.h"

#include "listNode.h"
#include "player.h"

#include "command.h"
#include "fileRead.h"
#include "contExec.h"
#include "kmp.h"
#include "help.h"
#include "selectSort.h"
#include "listAdd.h"

static short isSorted = 0;
int main(void)
{
	
	//setlocale(LC_ALL,"Chinese_People's Republic of China.65001");//设定编码字符集utf-8的codepage=65001		无效。原因未知
	system( "chcp 65001" );//设置编码,成功
	system( "cls" );
	printf("\t== == == == == == == == ==\n");
	printf("\t数据结构上机试验-综合实验四\n");
	printf("\t== == == == == == == == ==\n\n");

	command();
	return 0;
}