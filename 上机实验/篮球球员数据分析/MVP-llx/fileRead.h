#pragma once
#pragma execution_character_set("utf-8")
/*
读入文件，并把文件流赋值给cont，返回字符数组指针
*/
char * fileRead( void )
{
	char url[50] = { 0 };
	printf( "请输入文件数据路径\n" );
	scanf( "%s", url );

	printf( "正在读入...请稍后...\n" );
	FILE *fp = fopen( url, "r" );
	if(fp == 0)
	{
		printf( "文件打开失败\n" );
		return 0;
	}
	fseek( fp, 0, SEEK_END );
	long fpLength = ftell( fp );
	char * cont = (char *)malloc( sizeof( char )* (fpLength+1) );
	fseek( fp, 0, SEEK_SET );
	fread( cont, fpLength, sizeof( char ), fp );
	fclose( fp );
	*(cont + fpLength+1) = '\0';
	return cont;
}