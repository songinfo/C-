/*************************************************************************
	> File Name: AlphLowtoUpper.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 28 Aug 2015 08:45:30 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	char ch;
	while(scanf("%c",&ch) == 1)
	{
		if(ch >= 97 && ch <= 122)
		{	
			printf("%c\n",ch-32);
		}
		else
		{
			printf("Upper alph! \n");
		}
			fflush(stdin);
	}
	system("pause");
	return 0;
}
