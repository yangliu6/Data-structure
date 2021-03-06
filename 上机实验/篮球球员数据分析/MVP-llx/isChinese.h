﻿#pragma once
#pragma execution_character_set("utf-8")

int isChinese( char * str )
{
	int i = 0;
	unsigned char tmp[5];
	for(i = 0; i < 4; i++)
	{
		tmp[i] = (int)*(str + i);
	}
	tmp[4] = '\0';
	
	unsigned char chinese[14][5] =
	{
		0xE2,0xBA,0x80,'\0','\0',
		0xE2,0xBB,0xB3,'\0','\0',
		0xE2,0xBC,0x80,'\0','\0',
		0xE2,0xBF,0x95,'\0','\0',
		0xE3,0x80,0x85,'\0','\0',
		0xE3,0x80,0xA9,'\0','\0',
		0xE3,0x80,0xB8,'\0','\0',
		0xE4,0xB6,0xB5,'\0','\0',
		0xE4,0xB8,0x80,'\0','\0',
		0xEF,0xA9,0xAA,'\0','\0',
		0xEF,0xA9,0xB0,'\0','\0',
		0xEF,0xAB,0x99,'\0','\0',
		0xF0,0xA0,0x80,0x80,'\0',
		0xF0,0xAF,0xA8,0x9D,'\0'
	};
	for(i = 0; i < 14; i = i + 2)
	{
		if(strcmp( tmp, chinese[i] ) > 0)
			if(strcmp( tmp, chinese[i + 1] ) < 0)
				return 1;
	}
	return 0;
}
/*
UTF-8中汉字范围

占用 3 个字节的范围
U+2E80 - U+2EF3 : 0xE2 0xBA 0x80 - 0xE2 0xBB 0xB3      共 115 个  
U+2F00 - U+2FD5 : 0xE2 0xBC 0x80 - 0xE2 0xBF 0x95      共 213 个  
U+3005 - U+3029 : 0xE3 0x80 0x85 - 0xE3 0x80 0xA9      共 36 个  
U+3038 - U+4DB5 : 0xE3 0x80 0xB8 - 0xE4 0xB6 0xB5      共 7549 个  
U+4E00 - U+FA6A : 0xE4 0xB8 0x80 - 0xEF 0xA9 0xAA      共 44138 个  
U+FA70 - U+FAD9 : 0xEF 0xA9 0xB0 - 0xEF 0xAB 0x99      共 105 个  
合计： 52156 个
占用 4 个字节的范围
U+20000 - U+2FA1D : 0xF0 0xA0 0x80 0x80 - 0xF0 0xAF 0xA8 0x9D      共 64029 个  
合计： 64029 个
*/