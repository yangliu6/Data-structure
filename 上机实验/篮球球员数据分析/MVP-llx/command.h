#pragma once
#pragma execution_character_set("utf-8")
static short isFileReaded = 0;

void command(void)
{
	struct NODE * playerList = {0};
	struct NODE * resList = { 0 };
	int cmd;
	do
	{
		printf ( "\n\n\t" );
		printf ( "== == == == == == == == ==\n" );

		printf ( "\t0-�˳�\t" );
		printf ( "1-����\t" );
		printf ( "2-��������" );
		printf ( "\n\n" );
		printf ( "\t3-ѡ������" );

		printf ( "\n\t" );
		printf ( "== == == == == == == == ==\n\n" );
		printf ( "������ָ��\n" );
		scanf ( "%d", &cmd );

		switch ( cmd )
		{
			case 1:
				help ();
				break;
			case 2:
				playerList=contExec(fileRead ());
				break;
			case 3:
				if(isFileReaded)
					resList=selectSort (playerList);
				else
				{
					printf( "\n����δ�������ݣ����������ִ�иò���\n" );
					break;
				}

			default:
				;
		}
		if(playerList != 0)
		{
			printf( "�����Ѷ���ɹ��������ɵ�������playerList��\n" );
		}
	} while ( cmd );
	
}