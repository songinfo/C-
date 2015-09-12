/*************************************************************************
	> File Name: ptrFunc.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 11 Sep 2015 10:07:08 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void showHello()
{
	printf("Hello world\n");
}
void showSmile()
{
	putchar(1);
	putchar('\n');
}
void showBell()
{
	putchar(7);
}

int main(int argc, char* argv[])
{
	void (*pfun)();
	int ch;
	while((ch = getchar()) != EOF )
	{
		if(isalpha(ch))
		{
			pfun = &showHello;
		}else if(isdigit(ch))
		{
			pfun = &showSmile;
		}else
		{
			pfun = &showBell;
		}
		(*pfun)();
	}
	pfun = &showBell;
	(*pfun)();

	return 0;
}
