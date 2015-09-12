/*************************************************************************
	> File Name: Circle.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 11 Sep 2015 10:49:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX 128

void init(int arr[][MAX], int row, int col);
void show(int arr[][MAX], int row, int col);

int main(int argc, char* argv[])
{
	int row, col;
	int arr[MAX][MAX];
	while(scanf("%d%d", &row, &col) == 2)
	{
		init(arr, row, col);
		show(arr, row, col);
	}
}

void init(int arr[][MAX], int row, int col)
{

}
void show(int arr[][MAX], int row, int col)
{

}

