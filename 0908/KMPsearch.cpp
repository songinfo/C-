/*************************************************************************
	> File Name: KMPsearch.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Tue 08 Sep 2015 10:29:33 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getNext(char const* str, int* next)
{
	int len = strlen(str);
	int i = 1, k = 0;
	*next = 0;
	while(i < len)
	{
		if(*(str+i) == *(str+k))
		{
			*(next+i) = k + 1;
			++i;
			++k;
		}
		else if(k == 0)
		{
			*(next+i) = 0;
			++i;
		}
		else
		{
			k = *(next + k - 1);
		}
	}
}

int kmpSearch(const char* parent, const char* child, int* next)
{
	int p_len, c_len;
	int p_index = 0, c_index = 0;
	p_len = strlen(parent);
	c_len = strlen(child);
	getNext(child, next);
	while(p_index < p_len && c_index < c_len)
	{
		if(*(parent + p_index) == *(child + c_index))
		{
			++p_index;
			++c_index;
		}
		else if(c_index == 0)
		{
			++p_index;
		}
		else 
		{
			p_index = p_index - next[c_index - 1];
			c_index = 0;
		}
	}
	if(c_index >= c_len)
		return p_index - c_len;
	else 
		return -1;
		
}

int main(int argc, char* argv[])
{
	int next[100];
	char *parent, *child;
	child = (char*)malloc(sizeof(char) * 100);
	parent = (char*)malloc(sizeof(char) * 100);
	printf("Please input Substring:\n");
	gets(child);
	printf("Please input String:\n");
	gets(parent);
	printf("%d\n", kmpSearch(parent, child, next));

	return 0;
}

