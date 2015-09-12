/*************************************************************************
	> File Name: goto.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 31 Aug 2015 04:47:07 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int value;
	printf("Enter a value:\n");
	scanf("%d", &value);
	if(value == 3)
		goto Label1;
	else if (value == 4)
		goto Label2;
	else 
		;
	printf("Hello world!\n");

Label1:
	printf("3\n");
	return 0;
Label2:
	printf("4\n");
	return 0;
Label3:
	printf("5\n");
	return 0;
}
