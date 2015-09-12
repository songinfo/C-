/*************************************************************************
	> File Name: cylinderGraphic.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Wed 02 Sep 2015 09:56:45 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define COL 5
#define ISALPHA(ch) (65 <= (ch) && (ch) <= 90 || 97 <= (ch) && (ch) <= 122)
#define ISNUM(ch) ('0' <= (ch) && (ch) <= '9')
int main(int argc, char* argv[])
{
	int alph_cnt, num_cnt, oth_cnt;
	int line, alph_start, num_start, oth_start, index;
	char ch;
	alph_cnt =0;
	num_cnt = 0;
	oth_cnt = 0;
	while((ch = getchar()) != -1)
	{
		if(ISALPHA(ch))
		{
			alph_cnt++;
		}
		else if(ISNUM(ch))
		{
			num_cnt++;
		}
		else
		{
			oth_cnt++;
		}
	}
	printf("alph:%d, num:%d, other:%d\n", alph_cnt, num_cnt, oth_cnt);
	line = alph_cnt > num_cnt ?(alph_cnt > oth_cnt ? alph_cnt : oth_cnt):(num_cnt > oth_cnt ? num_cnt : oth_cnt);
	line++;
	alph_start = line - alph_cnt;
	num_start = line - num_cnt;
	oth_start = line - oth_cnt;

	printf("%5s%8s%5s%6s%5s\n", "alp"," ","num"," ","oth");
	for(index = 0; index <= line; ++index)
	{
		if(index == alph_start)
		{
			printf("%3d%2s", alph_cnt, " ");
		}else if(index > alph_start)
		{
			printf("*****");
		}else
		{
			printf("     ");
		}
		printf("%8s"," ");

		if(index == num_start)
		{
			printf("%3d%2s", num_cnt, " ");
		}else if(index > num_start)
		{
			printf("*****");
		}else
		{
			printf("     ");
		}
		printf("%8s"," ");

		if(index == oth_start)
		{
			printf("%3d%2s", oth_cnt, " ");
		}else if(index > oth_start)
		{
			printf("*****");
		}else
		{
			printf("     ");
		}
		printf("%8s"," ");
		
		printf("\n");
	}

	return 0;

}
