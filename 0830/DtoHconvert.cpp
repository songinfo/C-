/*************************************************************************
	> File Name: DtoHconvert.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 30 Aug 2015 09:55:36 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define base 16
int main(int argc, char* argv[])
{
	char result[8] = "";
	unsigned int value;
	int index;
	while(fflush(stdin), scanf("%d", &value) == 1)
	{
		index = 0;
		while(value)
		{
			result[index] = "0123456789ABCDEF"[value%base];
			index++;
			value = value/base;
		}
		index--;
		while(index >= 0)
		{
			printf("%c", result[index]);
			index--;
		}
		putchar(10);
	}
	return 0;
}
