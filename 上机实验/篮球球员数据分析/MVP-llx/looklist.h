#pragma once
#pragma execution_character_set("utf-8")
//�鿴��������
void lookList( struct NODE * list )
{
	printf( "%-20s","����\t\t" );
	printf( "%10s","����\t" );
	printf( "%10s","�׷�\t");
	printf( "%10s","�ϳ�ʱ��\t" );
	printf( "%10s","Ͷ��\t" );
	printf( "%10s","����\t" );
	printf( "%10s","����\t" );
	printf( "%10s","ǰ����\t" );
	printf( "%10s","������\t" );
	printf( "%10s","������\t" );
	printf( "%10s","����\t" );
	printf( "%10s","����\t" );
	printf( "%10s","��ñ\t" );
	printf( "%10s","ʧ��\t" );
	printf( "%10s","����\t" );
	printf( "%10s","�÷�\t" );
	while(list->next != 0)
	{
		printf( "\n" );
		printf( "%-20s\t",list->player->name );
		printf( "%8d\t",list->player->show );
		printf( "%8d\t",list->player->first);
		printf( "%7.1f\t",list->player->time);
		printf( "%7.1f%%\t", list->player->shot);
		printf( "%7.1f%%\t", list->player->three);
		printf( "%7.1f%%\t", list->player-> penalty);
		printf( "%7.1f\t",list->player->front);
		printf( "%7.1f\t",list->player->back);
		printf( "%7.1f\t",list->player->board);
		printf( "%7.1f\t",list->player->assist);
		printf( "%7.1f\t",list->player->steal);
		printf( "%7.1f\t",list->player->block);
		printf( "%7.1f\t",list->player->mistake);
		printf( "%7.1f\t",list->player->foul);
		printf( "%7.1f\t",list->player->score);
		list = list->next;
	}
}