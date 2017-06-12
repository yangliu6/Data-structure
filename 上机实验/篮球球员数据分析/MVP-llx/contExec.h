#pragma once
#pragma execution_character_set("utf-8")
#include "isChinese.h"
/*
���ݴ����ַ�����ָ�룬��ȡ��Ա���ݣ��������������ؽڵ�����ָ��
*/
struct NODE * contExec( char * cont)
{
	char * tmp = cont;
	long start, end, length, i;
	int j = 0;
	int k = 0;
	int m = 1;	//ʹ��m��ʶ��ǰ������
	char * contA = { 0 };
	char * contB = { 0 };
	char td[] = "<TD>";
	char num[6];
	struct PLAYERS * p = 0;
	struct NODE * listN;
	LIST *listHEAD;
	listHEAD = (LIST *)malloc( sizeof( LIST ) );
	listHEAD->player = 0;
	listHEAD->next = 0;

	
	//�Ķ������txt�ļ����֣�����������������λ��id=��S_Cont_01����div�ڣ��ʴӴ˴���ʼ����ƥ��
	start = kmp( tmp, "S_Cont_01" );	
	contA = (char *)malloc( sizeof( char )*(strlen( tmp ) - start + 1) );
	substrR( contA, tmp, start, strlen( tmp ) );
	
	start = kmp( contA, "</TR>" );
	end = kmp( contA, "</TBODY>" );
	contB = (char *)malloc( sizeof( char )*(end - start + 1) );
	substrR( contB, contA, start, end );
	free( contA );
	start = kmp( contB, "TD" );
	end = strlen( contB );
	length = end - start + 1;
	i = 0;
	while(i < length)
	{
		listN = (LIST *)malloc( sizeof( LIST ) );
		listN->player = 0;
		listN->next = 0;
		j = 0;
		p = (struct PLAYERS *)malloc( sizeof( struct PLAYERS ) );
		//���������ڸ��ļ��ı�񲿷֣���Ա�������Ժ��ֱ�ʾ����utf-8�У������������ֽڴ洢������0xe4��ͷ
		for(; i < length; i++)
		{
			if(isChinese(contB + i))	//�˴���ʼ��ȡ����
			{
				do {
					*((p->name) + j) = *(contB + i);
					j++;
					i++;
				} while(*(contB + i) != '<');
				*((p->name) + j) = '\0';//��ȡ��������
				m++;
				break;
			}
		}
		while(m <= 16)
		{
			j = 0;
			//��λ��ֵ
			for(; (i < length)&&(j<5);)
			{
				if(*(contB + i + j) == td[j])
				{
					j++;
				}
				else
				{
					i++;
					j = 0;
				}
				if(j == 4)
				{
					i = i + j;
					break;
				}
			}
			j = 0;
			//��ȡ��ֵ
			do {
				num[j] = *(contB + i);
				j++;
				i++;
			} while((*(contB + i) != '<') && (i < length));
			num[j] = '\0';
			j = 0;
			//��ֵ���ַ���ת��Ϊint��float������ֵ��Ŀ��
			while(num[j] != '\0')
			{
				if(num[j] == '.')
				{
					for(;; k++)
					{
						if(num[j + k] == '%')
							num[j + k] = '\0';
						break;
					}
				}
				j++;
			}
			//��num[]ת��Ϊ��Ӧint��float��ʽ������ֵ��Ŀ��
			switch(m)
			{
				case 2:
					p->show = atoi( num );
					break;
				case 3:
					p->first = atoi( num );
					break;
				case 4:
					p->time = atof( num );
					break;
				case 5:
					p->shot = atof( num );
					break;
				case 6:
					p->three = atof( num );
					break;
				case 7:
					p->penalty = atof( num );
					break;
				case 8:
					p->front = atof( num );
					break;
				case 9:
					p->back = atof( num );
					break;
				case 10:
					p->board = atof( num );
					break;
				case 11:
					p->assist = atof( num );
					break;
				case 12:
					p->steal = atof( num );
					break;
				case 13:
					p->block = atof( num );
					break;
				case 14:
					p->mistake = atof( num );
					break;
				case 15:
					p->foul = atof( num );
					break;
				case 16:
					p->score = atof( num );
					break;
				default:
					break;
			}
			m++;
		}
		m = 1;
		listN->player = p;
		if(listHEAD->player == 0)
			listHEAD = listN;
		else 
		{
			listAdd( listHEAD, listN );
		}
		
	}
	return listHEAD;
}

void substrR( char * aim, char * src, long start, long end )
{
	long len = end - start + 1;
	long i = 0;
	for(; i < len; i++)
		*(aim + i) = *(src + start + i - 1);
}