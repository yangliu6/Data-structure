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
	printf("\t���ݽṹ�ϻ�����-�ۺ�ʵ����\n");
	printf("\t===============\n\n");

	command();
	return 0;
}