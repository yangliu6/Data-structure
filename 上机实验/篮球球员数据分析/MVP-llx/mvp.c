#pragma execution_character_set("utf-8")
/*
���ݽṹ�ϻ�ʵ�� �ۺ�ʵ����
����	������
�༶	�Ź�1501 
ѧ��	0121503490118
��ʦ	����
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
	
	//setlocale(LC_ALL,"Chinese_People's Republic of China.65001");//�趨�����ַ���utf-8��codepage=65001		��Ч��ԭ��δ֪
	system( "chcp 65001" );//���ñ���,�ɹ�
	system( "cls" );
	printf("\t== == == == == == == == ==\n");
	printf("\t���ݽṹ�ϻ�����-�ۺ�ʵ����\n");
	printf("\t== == == == == == == == ==\n\n");

	command();
	return 0;
}