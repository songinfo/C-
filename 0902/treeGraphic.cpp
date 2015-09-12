/*************************************************************************
	> File Name: treeGraphic.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Wed 02 Sep 2015 05:07:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX_CNT 10
int main(int argc, char* argv[])
{
	int line_num, space_num, star_num;
	for(line_num = 0; line_num != MAX_CNT; ++line_num)
	{
		for(space_num = 0; space_num != MAX_CNT - line_num - 1; ++space_num)
		{
			printf(" ");
		}
		for(star_num = 0; star_num != line_num + 1; ++star_num)
		{
			printf("* ");
		}
		printf("\n");	
	}
	for(line_num = 0; line_num != MAX_CNT - 1; ++line_num)
	{
		for(star_num = 0; star_num != line_num + 1; ++star_num)
		{
			printf(" ");
		}
		for(space_num = 0; space_num != MAX_CNT - line_num - 1; ++space_num)
		{
			printf("* ");
		}
		printf("\n");	
	}
}
