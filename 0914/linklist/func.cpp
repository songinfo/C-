/*************************************************************************
	> File Name: func.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 14 Sep 2015 11:55:51 AM CST
 ************************************************************************/

#include "func.h"

void linkInitTail(pNODE* pphead)
{
	int val;
	pNODE ptail, pnew, pcur;
	while(scanf("%d", &val) == 1)
	{
		pnew = (pNODE)calloc(1, sizeof(NODE));
		pnew->myVal = val;
		if(*pphead == NULL)
		{
			*pphead = pnew;
			ptail = pnew;
		}else
		{
			ptail->myNext = pnew;
			ptail = pnew;
		}
	}
	val = 3;
}
void linkInitHead(pNODE* pphead)
{
	int val;
	pNODE pnew;
	while(scanf("%d", &val) == 1)
	{
		pnew = (pNODE)calloc(1, sizeof(NODE));
		pnew->myVal = val;

		pnew->myNext = *pphead;
		*pphead = pnew;
	}
}

void linkShow(pNODE phead)
{
	pNODE pcur;
	pcur = phead;
	while(pcur != NULL)
	{
		printf("%d ", pcur->myVal);
		pcur = pcur->myNext;
	}
}
