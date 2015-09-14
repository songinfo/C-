/*************************************************************************
	> File Name: func.h.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 14 Sep 2015 10:53:55 AM CST
 ************************************************************************/

#ifndef __FUNC__
#define __FUNC__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 8	
#define CNT 5
typedef struct Student
{
	int myId;
	char myName[LEN];
	int myScores[CNT];

}STU, *pSTU;

void show(STU val);
void func(STU val);
	
void scoreInit(int* arr, int len);
void nameInit(char* name, int len);
void stuInit(pSTU arr, int len);
void stuShow(pSTU arr, int len);
int stuSum(int* arr, int len);
int stuCmp(const void* left, const void* right);

#endif

