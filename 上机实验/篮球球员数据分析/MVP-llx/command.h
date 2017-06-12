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

		printf ( "\t0-退出\t" );
		printf ( "1-帮助\t" );
		printf ( "2-读入数据" );
		printf ( "\n\n" );
		printf ( "\t3-选择排序" );

		printf ( "\n\t" );
		printf ( "== == == == == == == == ==\n\n" );
		printf ( "请输入指令\n" );
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
					printf( "\n您尚未输入数据，请输入后再执行该操作\n" );
					break;
				}

			default:
				;
		}
		if(playerList != 0)
		{
			printf( "数据已读入成功，并生成单向链表【playerList】\n" );
		}
	} while ( cmd );
	
}