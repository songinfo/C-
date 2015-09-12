/*************************************************************************
	> File Name: stringSort.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Thu 10 Sep 2015 09:19:34 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define WD_SIZE 20
#define WD_LEN 32

int main(int argc, char* argv[])
{
	char arr[WD_SIZE][WD_LEN] = {""};
	char temp[WD_LEN];
	int index;
	int i, j, bg, end;
	int cnt = 0;
	printf("Please input strings:\n");
	while(gets(arr[cnt++]) != NULL && cnt <= WD_SIZE)
	{

	}
//	system("cls");
//	index = 0;
/*
		printf("Src:%s \n",arr[index]);
		printf("Src:%s \n",arr[index+1]);
		printf("Src:%s \n",arr[index+2]);
		printf("------------------------\n");
	
	for(int i = 0; i != 2; ++i);
	{
	    //printf("Src: ");
		printf("Src:%s \n",arr[i]);	
	}
	*/
    for( index = 0; index != cnt; ++index);
	{
	    //printf("Src: ");
		printf("Src:%s \n",arr[index]);	
	}
	
	for(i= 1; i < cnt; ++i)
	{
		for(j = i - 1; j >= 0; --j)
		{
			if(strcmp(arr[j], arr[i]) < 0)
			{
				break;
			}
			
		}
		bg = j + 1;
		end = i;
		strcpy(temp, arr[end]);
		for(end = end - 1; end >= bg; --end)
			{
				strcpy(arr[end+1], arr[end]);
			}
		strcpy(arr[bg], temp);
	}
	printf("--------------------------\n");
	for(index = 0; index != cnt; ++index)
	{
		puts(arr[index]);
	}

	return 0;
}
