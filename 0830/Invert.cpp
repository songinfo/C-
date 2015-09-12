/*************************************************************************
	> File Name: Invert.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 30 Aug 2015 11:17:40 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fun(int a)
{
	int digit = 1;
	int temp = a;
	while(temp/10 != 0)
	{
		temp/= 10;
		digit++;
	}
	int b = 0;
	for(int i = 0; i < digit; i++)
	{
		b += (a%10)*(int)pow(10.0, digit - i -1);
		a/= 10;
			
	}
	return b;
}
int main(int argc, char* argv[])
{
	int a ;
	printf("Enter value a:\n");
	scanf("%d", &a);
	printf("Invert number:%d", fun(a));
	putchar(10);
	return 0;
}
