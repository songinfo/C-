/*************************************************************************
	> File Name: reverseString.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sat 19 Sep 2015 05:10:23 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* reverseStr(char* str, int len)
{
	char* start = str;
	char* end = str + len - 1;
	char ch;

	if(str != NULL)
	{
		while(start < end)
		{
			ch = *start;
			*start++ = *end;
			*end-- = ch;
		}
	}
	return str;
}

int main(int argc, char* argv[])
{
	char ch[1024];
	//char* p ;

	printf("Input a string:\n");
	scanf("%s", ch);
	int len = strlen(ch);
	printf("%s\n", reverseStr( ch, len));

	return 0;

}
