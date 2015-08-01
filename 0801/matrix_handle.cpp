/*************************************************************************
	> File Name: matrix_handle.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 02 Aug 2015 12:33:41 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 3
void rotate(int matrix[][N])
{
	for(int layer = 0; layer < N/2; ++layer)
	{
		int first = layer;
		int last = N - 1 - layer;
		for(int i = first; i < last; ++i)
		{
			int offset = i - first;
			int top = matrix[first][i];// save top
			matrix[first][i] = matrix[last-offset][first];//left->top
			matrix[last-offset][first] = matrix[last][last-offset];//bottom->left
			matrix[last][last-offset] = matrix[last][last-offset];//right->bottom
			matrix[i][last] = top; //top->right
		}
	}
}

int main(int argc, char* argv[])
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	printf("Array a[3][3]:\n");
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			printf("%d ",a[i][j]);
		}
		putchar(10);
	}

	int (*p)[3] = a;
	rotate(p);
	printf("After rotate:\n");

	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			printf("%d ",a[i][j]);
		}
		putchar(10);
	}

	return 0;
}
