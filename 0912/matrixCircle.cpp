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
	printf("Please input row and col:\n");
	while(scanf("%d%d", &row, &col) == 2)
	{
		init(arr, row, col);
		show(arr, row, col);
	}
}

void init(int arr[][MAX], int row, int col)
{
	int step;
	int cnt;
	int i, j, step_cnt;
	i = row >> 1;
	j = col >> 1;
	arr[row >> 1][col >> 1] = 1;
	cnt = 1;
	step = 1;
	while(cnt <= col * row)
	{
		for(step_cnt = 0; step_cnt != step; ++step_cnt, ++j)
		{
			arr[i][j+1] = ++cnt;
		}
		if(cnt > row * col)
		{
			break;
		}
		for(step_cnt = 0; step_cnt != step; ++step_cnt, --i)
		{
			arr[i-1][j] = ++cnt;
		}
		if(cnt > row * col)
		{
			break;
		}
		step++;
		for(step_cnt = 0; step_cnt != step; ++step_cnt, --j)
		{
			arr[i][j-1] = ++cnt;
		}
		if(cnt > row * col)
		{
			break;
		}
		for(step_cnt = 0; step_cnt != step; ++step_cnt, ++i)
		{
			arr[i+1][j] = ++cnt;
		}
		step++;


	}

}

void show(int arr[][MAX], int row, int col)
{
	int i, j;
	for(i = 0; i < row; ++i)
	{
		for(j = 0; j < col; ++j)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

}

