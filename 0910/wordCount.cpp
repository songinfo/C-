/*************************************************************************
	> File Name: wordCount.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Thu 10 Sep 2015 08:45:42 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int wordCount(char* src);

int main(int argc, char* argv[])
{
	char buf[1024];
	printf("Input a Txt:\n");
	while(memset(buf, 0, 1024), gets(buf) != NULL)
	{
		printf("Count:%d\n", wordCount(buf));
	}

	return 0;
}
int wordCount(char* src)
{
	int index = 0;
	int count = 0;
	while(src[index] != 0)
	{
		if(isalpha(src[index]) && (src[index+1] == ' ' || src[index+1] == 0))
		{
			count++;
		}
		index++;
	}

	return count;
}
