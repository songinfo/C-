/*************************************************************************
	> File Name: arrayInit.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 07 Sep 2015 04:26:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10

int main(int argc, char* argv[])
{
	int arr[SIZE];
	int sum;
	int index;
	int bg,end;
	memset(arr, 0, sizeof(arr));
	printf("Input 10 numbers:\n");
	for(index = 0; index != SIZE; ++index)
	{
		scanf("%d", &arr[index]);
	}
	sum = 0;
	for(index = 0; index != SIZE; ++index)
	{
		sum += arr[index];
	}
	printf("sum:%d, ave:%.2f\n", sum ,(double)sum/SIZE);
	printf("Input 10 numbers:\n");
	for(index = 0;index != SIZE; ++index)
	{
		scanf("%d", &arr[index]);
	}
	for(index = 0; index != SIZE; ++index)
	{
		printf("%d ", arr[index]);
	}
	printf("\n");
	bg = 0;
	end = SIZE - 1;
	while(bg < end)
	{
		arr[bg] ^= arr[end];
		arr[end] ^= arr[bg];
		arr[bg] ^= arr[end];
		bg++;
		end--;
	}
	for(index = 0; index != SIZE; ++index)
	{
		printf("%d ", arr[index]);
	}
	printf("\n");
	return 0;
}
