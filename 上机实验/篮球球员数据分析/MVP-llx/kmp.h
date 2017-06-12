#pragma once
#pragma execution_character_set("utf-8")

int next[20];

void get_next( char* t, int next[] )
{
	int i = 1;
	int j = 0;
	next[0] = -1;
	while(i<strlen( t ))
	{
		if(j == -1 || t[i] == t[j])
		{
			i++;
			j++;
			if(t[i] != t[j])   //ֻ��ǰ�������ַ�����ͬʱ�Żᰴǰ����㷨������next�� ��next[i] = j
				next[i] = j;
			else
				next[i] = next[j];        //��ǰ�������ַ���ͬʱ��������ǰ�ң��ܹ����ٱȽϵĴ���
		}
		else
		{
			j = next[j];
		}
	}
}

int kmp( char *master, char *pattern )
{
	get_next( pattern, next );
	long i = 0;
	int j = 0;
	int len1 = strlen( master );
	int len2 = strlen( pattern );
	while(i < len1&&j < len2)
	{
		if(j == -1 || master[i] == pattern[j])//��һ���ַ�����ƥ������ַ���ȵ����
		{
			i++;
			j++;
		}
		else   //iָ�벻����,jָ��
		{
			//i=i-j+1;
			j = next[j];
		}
	}
	if(j >= len2)
		return i - len2;
	else
		return -1;
}