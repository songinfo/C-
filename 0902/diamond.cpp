/*************************************************************************
	> File Name: diamond.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Wed 02 Sep 2015 05:26:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX_CNT 9
int main(int argc, char* argv[])
{
	int line_num, space_num, star_num;
	for(line_num = 0; line_num != MAX_CNT; ++line_num)
	{
		for(space_num = 0; space_num != MAX_CNT - line_num - 1; ++space_num)
		{
			printf(" ");
		}
		printf("*");
		if(line_num > 0)
		{
			for(space_num = 0; space_num != (line_num << 1) - 1; ++space_num)
			{
				printf(" ");
			}
			printf("*");

		}
		printf("\n");
	}
/*
	for(line_num = 0; line_num != MAX_CNT - 1; ++line_num)
	{
		for(space_num = 0; space_num != line_num + 1; ++space_num)
		{
			printf(" ");
		}
		printf("*");
		if(line_num  < MAX_CNT - 2)
		{
			for(space_num = 0; space_num != ((MAX_CNT - 1) << 1) - 1 - 2 - (line_num << 1); ++space_num)
			{
				printf(" ");
			}
			printf("*");

		}
		printf("\n");
	}
*/
	return 0;

}
