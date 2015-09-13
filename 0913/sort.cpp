/*************************************************************************
	> File Name: sort.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 13 Sep 2015 10:06:07 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int* arrayInit(int len);
void forEach(int* bg, int* end, void(*handle)(int*));
void sort(int* bg, int* end, int (*cmp)(int* left, int* right));
void arrayDestroy(int* arr);
void visit(int* pval);
int myLess(int*	left, int* right);
int myGreat(int* left, int* right);
void init(int* pval);

int main(int argc, char* argv[])
{
	int arrLen;
	int* arr;
	srand(time(NULL));
	arrLen = rand()%20 + 1;
	arr = arrayInit(arrLen);
	forEach(&arr[0], &arr[arrLen - 1], &init);
	forEach(&arr[0], &arr[arrLen - 1], &visit);

	printf("\n");

	sort(&arr[0], &arr[arrLen - 1], &myLess);

	forEach(&arr[0], &arr[arrLen - 1], &visit);
	printf("\n");

	return 0;

	
}

int* arrayInit(int len)
{
	int* arr = (int*)calloc(len, sizeof(int));
	return arr;
}
void forEach(int* bg, int* end, void(*handle)(int*))
{
	for(; bg <= end; bg++)
	{
		(*handle)(bg);
	}
}
void sort(int* bg, int* end, int (*cmp)(int* left, int* right))
{
	int* pval;
	int key;
	int* start, *insert;
	for(start = bg + 1; start <= end; ++start)
	{
		key = *start;
		for(insert = start - 1; insert >= bg; --insert)
		{
			if((*cmp)(insert, &key))
			{
				break;
			}
			*(insert+1) = *insert;
		}
		*(insert+1) = key;
	}
}

void arrayDestroy(int* arr)
{
	free(arr);
}
void visit(int* pval)
{
	printf("%d ", *pval);
}
int myLess(int*	left, int* right)
{
	if(*left < *right)
	{
		return 1;
	}
	return 0;
}
int myGreat(int* left, int* right)
{
	if(*left > *right)
	{
		return 1;
	}
	return 0;
}
void init(int* pval)
{
	*pval = rand()%1000;
}


