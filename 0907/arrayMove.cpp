/*************************************************************************
	> File Name: arrayInit.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 07 Sep 2015 04:26:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define SIZE 10

int main(int argc, char* argv[])
{
	int arr[SIZE];
	int temp;
	int sum;
	int index;
	int bg,end;
	srand(time(NULL));
	memset(arr, 0, sizeof(arr));
	printf("Rand 10 numbers:\n");
	for(index = 0; index != SIZE; ++index)
	{
		arr[index] = rand()%100;
	}
	for(index = 0; index != SIZE; ++index)
	{
		printf("%d ", arr[index]);
	}
	printf("\n");
	sum = 0;
	for(index = 0; index != SIZE; ++index)
	{
		sum += arr[index];
	}
	printf("sum:%d, ave:%.2f\n", sum ,(double)sum/SIZE);
	
	for(index = 0; index != SIZE; ++index)
	{
		printf("%d ", arr[index]);
	}
	printf("\n");

	temp = arr[SIZE - 1];
	for(index = SIZE - 2; index >= 0; --index)
	{
		arr[index+1] = arr[index];
	}
	arr[index+1] = temp;
	
	/*
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
	*/
	for(index = 0; index != SIZE; ++index)
	{
		printf("%d ", arr[index]);
	}
	printf("\n");
	temp = arr[0];
	for(index = 1; index != SIZE; ++index)
	{
		arr[index-1] = arr[index];
	}
	arr[index-1] = temp;
	for(index = 0; index != SIZE; ++index)
	{
		printf("%d ", arr[index]);
	}
	printf("\n");



	return 0;
}
