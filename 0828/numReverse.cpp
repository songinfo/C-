/*************************************************************************
	> File Name: numReverse.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 28 Aug 2015 09:41:30 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int value, sum;
	while(scanf("%d", &value) == 1)
	{
		sum = 0;
		while(value)
		{
			sum = sum * 10 + value % 10;
			value = value / 10;
		}
		printf("%d\n", sum);
	}

	return 0;
}
