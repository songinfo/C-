/*************************************************************************
	> File Name: randTest.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 07 Sep 2015 05:16:14 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define SIZE 10

int main(int argc, char* argv[])
{
	int arr[SIZE];
    int index;

	srand(time(NULL));
	//memset(arr, 0, sizeof(arr));
	printf("Time:%u\n", time(NULL));
	printf("Time:%u\n", time(NULL)/(60*60*24*365));
	printf("Time:%u\n", 2015 - time(NULL)/(60*60*24*365));


	for(index = 0; index != SIZE; ++index)
	{
		arr[index] = rand()%100;
	}
	for(index = 0; index != SIZE; ++index)
	{
		printf("%d ",arr[index]);
	}
	printf("\n");
   
	return 0;
}



