#pragma once
#pragma execution_character_set("utf-8")
#include "diyOp.h"
static short isFileReaded = 0;

int command(void)
{
	struct NODE * playerList = {0};
	struct NODE * resList = { 0 };
	struct NODE * analy = { 0 };
	int cmd;
	do
	{
		printf ( "\n\n\t" );
		puts   ( "== == == == == == == == == == ==" );
		printf( "\n" );
		printf( "\t" );
		puts( "0-�˳�      1-����      2-��������" ); printf( "\n\t" );
		puts( "3-�鿴����  4-ѡ������  5-ͳ�Ʒ���" ); 
		printf ( "\n\t" );
		puts ( "== == == == == == == == == == ==" );
		printf( "\n\n" );
		puts ( "������ָ��" );
		printf( "\n" );
		scanf ( "%d", &cmd );

		switch ( cmd )
		{
			case 1:
				help ();
				break;
			case 2:
				playerList=fileRead ();
				if(playerList != 0)
				{
					puts( "�����Ѷ���ɹ����������˵�������playerList��" );
					printf( "\n" );
				}
				break;
			case 3:
				lookList(playerList);//�鿴����
				break;
			case 4:
				if(isFileReaded)
					resList=selectSort (playerList);
				else
				{
					printf( "\n" );
					puts( "����δ�������ݣ����������ִ�иò���" );
					printf( "\n" );
					break;
				}
			case 5:
				analy=analysis( playerList );//�鿴����
				break;
			default:
				break;
		}
	} while ( cmd );
	return cmd;
}