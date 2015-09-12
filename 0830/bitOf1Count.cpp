/*************************************************************************
	> File Name: bitOf1Count.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 30 Aug 2015 10:31:29 AM CST
 ************************************************************************/

#include<stdio.h>
int main(int argc, char* argv[])
{
	char str[2] = {'0','1'};
	int value, index, count;
	while(fflush(stdin), scanf("%d", &value) == 1)
	{

	char result[32] = "";
		index = 0;
		while(value)
		{
			result[index] = str[value%2];
			++index;
			value = (int)value/2;

		printf("result:%s\n", result);
		}
		index--;
		count = 0;
		while(index >= 0)
		{
			if(result[index] = '1')
				++count;
			index--;

		}
		printf("result:%s\n", result);
	printf("The number of 1: %d\n", count);
	
	}
	return 0;
}
