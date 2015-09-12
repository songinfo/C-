/*************************************************************************
	> File Name: arrayMatrix.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 11 Sep 2015 09:29:40 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define IF_OK(i, j, row, col) (0 <= (i) && (i) <= row && 0 <= (j) && (j) <= col)
int** arrayInit(int row, int col);
void arrayShow(int** arr, int  row, int col);
void arrayDestroy(int** arr, int row);
void arrayPrint(int** arr, int row, int col);

int main(int argc, char* argv[])
{
	int row,  col;
	int** array;
	while(printf("row, col:"), scanf("%d%d", &row,&col) == 2)
	{
		array = arrayInit(row, col);
		arrayShow(array, row, col);
		arrayPrint(array, row, col);
		arrayDestroy(array, row);
		array = NULL;
	}

	return 0;
}

int** arrayInit(int row, int col)
{
	int** arr;
	int i;
	arr = (int**)calloc(row, sizeof(int*));
	for(i = 0; i != row; i++)
	{
		arr[i] = (int*)calloc(col, sizeof(int));
	}

	return arr;
}
void arrayShow(int** arr, int  row, int col)
{
	int cnt = 0;
	int i, j;
	int line;
	int delt;
	for(line = 1; line <= row; ++line)
	{
		delt = row - line;
		if(delt % 2 == 0)
		{
			for(i = 0; i < row; ++i)
			{
				j = i - delt;
				if(IF_OK(i, j, row, col) && i >= j)
				{
					arr[i][j] = cnt++;
				}
			}
		}else
		{
			for(i = row - 1; i >= 0; --i)
			{
				j = i - delt;
				if(IF_OK(i, j, row, col) && i >= j)
				{
					arr[i][j] = cnt++;
				}
			}
		}

	}

	for(line = 1; line <= row; ++line)
	{
		delt = line;
		if(delt % 2 == 1)
		{
			for(j = col - 1; j >= 0; --j)
			{
				i = j - delt;
				if(IF_OK(i, j, row, col) && i < j)
				{
					arr[i][j] = cnt++;
				}
			}
		}else
		{
			for(j = 0; j < col; ++j)
			{
				i = j - delt;
				if(IF_OK(i, j, row, col) && i < j)
				{
					arr[i][j] = cnt++;
				}
			}
		}

	}


}

void arrayDestroy(int** arr, int row)
{
	int i;
	for(i = 0; i != row; ++i)
	{
		free(arr[i]);
		arr[i] = NULL;
	}
	free(arr);
}

void arrayPrint(int** arr, int row, int col)
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
	printf("\n");
}




