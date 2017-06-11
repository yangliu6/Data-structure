#pragma once
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAXLEN 100
typedef struct node
{
	int num;
	char name[MAXLEN];
	int score;
	struct node *next;
}list;
