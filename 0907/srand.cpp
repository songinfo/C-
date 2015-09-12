/*************************************************************************
  > File Name: srand.cpp
  > Author: Chao
  > Mail:1311159643@qq.com 
  > Created Time: Mon 07 Sep 2015 05:09:17 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int  main(void)

{
	unsigned long n;

	//srand((unsigned)time(NULL));
	srand(10);


	for(int i = 0; i < 10; i++)
	{
		n = rand();
		printf("%d	\n", n);
	}
	return 0;
}
