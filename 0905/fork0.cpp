/*************************************************************************
  > File Name: fork.cpp
  > Author: Chao
  > Mail:1311159643@qq.com 
  > Created Time: Sat 05 Sep 2015 09:58:21 PM CST
 ************************************************************************/

#include<iostream>
#include <stdio.h>  
#include <sys/types.h>  
#include <unistd.h>    
using namespace std;
int main(void)  
{  
	int i;  
	
	if(fork() == 0)	 //复制父进程，调用一次，返回两次  
		printf("Child:--");
	

	printf("OK \n");

	return 0;  
}
