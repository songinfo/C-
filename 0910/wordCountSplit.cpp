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
void wordShow(char* src, int bg, int end);
void wordSplit(char* src);
int main(int argc, char* argv[])
{
	char buf[1024];
	printf("Input a Txt:\n");
	while(memset(buf, 0, 1024), gets(buf) != NULL)
	{
		//printf("Count:%d\n", wordCount(buf));
		wordSplit(buf);
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
void wordShow(char* src, int bg, int end)
{
	while(bg <= end)
	{
		printf("%c", src[bg]);
		bg++;
	}
}
void wordSplit(char* src)
{
	int index, word_bg, word_end;
	int cnt = 0;
	index = 0;
	while(src[index] != '\0')
	{
		while(src[index] && !(isalpha(src[index]) && (index == 0 || src[index - 1] == ' ')))
		{
			index++;
		}
		if(src[index] == '\0')
		{
			break;
		}
		word_bg = index;
		cnt++;
		while(!(isalpha(src[index]) && (src[index+1] == ' ' || src[index + 1] == '\0')))
		{
			index++;
		}
		word_end = index;
		index++;
		printf("%d: ",cnt );
		wordShow(src, word_bg, word_end);

		printf("\n");

	}
}
