/*************************************************************************
  > File Name: baidu.cpp
  > Author: Chao
  > Mail:1311159643@qq.com 
  > Created Time: Mon 28 Sep 2015 08:58:59 PM CST
 ************************************************************************/

//#include<iostream>
//using namespace std;
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	int n, m;
	scanf("%d %d", &n,&m);
	printf("\n");
	int* dis = (int*)calloc((m+ 1), sizeof(int));
	for(int i = 0; i <= m; ++i)
	{
		scanf("%d", &dis[i]);
	}
	int bag = 7;
	int count = 0;
	for(int i = 0; i <= m ; ++i)
	{
		bag = bag - dis[i];
		if(bag >= dis[i+1])
		{
			continue;
		}else
		{
			bag = 7;
			count++;
		}
	}

	printf("%d\n", count);

	system("pause");

	return 0;
}



