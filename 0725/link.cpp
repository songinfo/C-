/*************************************************************************
	> File Name: link.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sat 25 Jul 2015 10:47:13 AM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct tag
{
	int m_val;
	char m_buf[32];
	struct tag* m_next;
}NODE, *pNODE;
void link_init_tail(pNODE* phead);
void link_init_head(pNODE* phead);
void link_init_sort(pNODE* phead);
void link_show(pNODE phead);
void link_destory(pNODE* phead);
void link_delete(pNODE* phead, int val);
void link_reverse(pNODE* phead);
int main(int argc, char* argv[])
{
	int val;
	pNODE phead = NULL;
    link_init_tail(&phead);
   // link_init_head(pNODE* phead);
    link_show( phead);
    putchar(10);
    link_reverse(&phead);
    link_show( phead);
	putchar(10);

	return 0;
}

void link_init_tail(pNODE* phead)
{
	int val;
	pNODE pnew = NULL, ptail = NULL;
	printf("Please input numbers:\n");
	while(scanf("%d", &val)== 1)
	{
		pnew = (pNODE)calloc(1, sizeof(NODE));
        pnew->m_val = val;
	    if(*phead == NULL)
		{
			*phead = pnew;
			ptail = pnew;
		}else
		{
			ptail->m_next = pnew;
			ptail = pnew;
		}
	}
}

void link_init_head(pNODE* phead)
{
	int val;
	pNODE pnew = NULL, ptail = NULL;
	printf("Please input numbers:\n");
	while(scanf("%d", &val)== 1)
	{
		pnew = (pNODE)calloc(1, sizeof(NODE));
        pnew->m_val = val;
		pnew = *phead;
		*phead = pnew;
	}
}

void link_init_sort(pNODE* phead)
{
	int val;
	pNODE pcur, pnew, ppre;
	while(scanf("%d", &val) == 1)
	{
		pnew = (pNODE)calloc(1, sizeof(NODE));
		pnew->m_val = val;
		pcur = *phead;
		ppre = NULL;
		while(pcur && pcur->m_val < pnew->m_val)
		{
			ppre = pcur;
			pcur = pcur->m_next;
		}
		if(ppre = NULL)
		{
			pnew->m_next = *phead;
			*phead = pnew;
		}else
		{
			pnew->m_next = pcur;
			ppre->m_next = pnew;
		}
	}
}
void link_show(pNODE phead)
{
	pNODE pcur;
	pcur = phead;
	while(pcur != NULL)
	{
		printf("%3d", pcur->m_val);
		pcur = pcur->m_next;
	}
}
void link_destroy(pNODE* phead)
{
	pNODE pcur, ptemp = NULL;
	pcur = *phead;
	while(pcur)
	{
		ptemp = pcur;
		pcur = pcur->m_next;
		free(ptemp);
	}
	*phead = NULL;
}
void link_delete(pNODE* phead, int val)
{
	pNODE pcur, ppre;
	pcur = *phead;
	ppre = NULL;
	while(pcur && pcur->m_val != val)
	{
		ppre = pcur;
		pcur = pcur->m_next;
	}
	if(pcur == NULL)
	{
		printf("Not exist !");
	}else
	{
		if(pcur = NULL)
		{
			*phead = pcur->m_next;
			free(pcur);
		}else
		{
			ppre->m_next = pcur->m_next;
			free(pcur);
		}
	}
}
void link_reverse(pNODE* phead)
{
	pNODE old_head = NULL;
	pNODE new_head = NULL;
	pNODE pcur = *phead;
	while(pcur != NULL)
	{
		old_head = pcur->m_next;
		pcur->m_next = new_head;
		new_head = pcur;
		pcur =	old_head;
	}
	*phead = new_head;
	printf("After reverse:\n");

}
