/*************************************************************************
	> File Name: stringToInteger.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 11 Sep 2015 04:58:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5
#define LEN 128
 
int main(int argc, char* argv[])//"1234"->1234
{
	char** arr;
	char word[32];
	int cnt = 0;
	int index;
	arr = (char**)calloc(atoi(argv[1]), sizeof(char*));
	for(int i = 0; i != atoi(argv[1]); ++i)
	{
		arr[i] = (char*)calloc(LEN, sizeof(char));
	}

	//*arr = (char*)calloc(SIZE, sizeof(char*));

	printf("argc:%d\n", argc);
	for(index = 0; index < argc; ++index)
	{
		printf("argv[%d]:%s\n", index, argv[index]);
	}

	while(memset(word, 0, 32), gets(word) != NULL)
	{
		strcpy(arr[cnt], word);
		cnt++;
	}
	for(index = 0; index < cnt; ++index)
	{
		printf("%d:%s\n", index+1, arr[index]);
	}

	return 0;
}
