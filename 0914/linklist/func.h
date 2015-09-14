/*************************************************************************
	> File Name: func.h
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 14 Sep 2015 11:50:42 AM CST
 ************************************************************************/

#ifndef __FUNC__
#define __FUNC__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct tag
{
	int myVal;
	struct tag* myNext;
}NODE, *pNODE;
void linkInitTail(pNODE* pphead);
void linkInitHead(pNODE* pphead);
void linkShow(pNODE phead);

#endif

