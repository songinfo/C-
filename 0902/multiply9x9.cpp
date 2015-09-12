/*************************************************************************
	> File Name: multiply9x9.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Wed 02 Sep 2015 09:23:19 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int index_i, index_j;
	int val = 1024;
	printf("%*d|\n", 0, val);
	putchar(10);
	
	for(index_i = 0; index_i != 9; ++index_i)
	{
		for(index_j = 0;index_j != index_i + 1; ++index_j)
		{
			printf("%-2d*%2d =%2d  ", index_i + 1, index_j + 1, (index_i + 1) * (index_j + 1));
		}
		printf("\n");
	}

	system("pause");
	return 0;

}
