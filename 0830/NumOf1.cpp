/*************************************************************************
	> File Name: NumOf1.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 30 Aug 2015 09:37:33 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int value;
	int count;
	int index;
	while(fflush(stdin),scanf("%d", &value) == 1)
	{
		index = 0;
		count = 0;
		while(index	<= 31)
		{
			if((value &(1 << index)) != 0)
			{
				count++;
			}
			index++;
		}
		printf("The bit number of 1 is :%d\n", count);
	}
	return 0;
}
