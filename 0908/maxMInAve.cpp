/*************************************************************************
	> File Name: maxMInAve.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Tue 08 Sep 2015 09:32:35 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void func(int* sum, double* ave, int* max, int* min);
int main(int argc, char* argv[])
{
	int sum_main, max_main, min_main;
	double ave_main = 0.0;
	sum_main = 0;
	max_main = 0x80000000;
	min_main = 0x7fffffff;
	func(&sum_main, &ave_main, &max_main, &min_main);
	printf("%s:max:%d min: %d sum:%d ave: %.2f\n", "main", max_main, min_main, sum_main, ave_main);

	return 0;
}

void func(int* sum, double* ave, int* max, int* min)
{
	int cnt;
	int val;
	cnt = 0;
	printf("Please input numbers:\n");
	while(scanf("%d", &val) == 1)
	{
		cnt++;
		*sum = *sum + val;
		if(*max < val)
		{
			*max = val;
		}
		if(val < *min)
		{
			*min = val;
		}
	}
	*ave = (double)*sum /cnt;
	
	printf("%s:max:%d ,min: %d ,sum:%d ,ave: %.2f\n", "func", *max, *min, *sum, *ave);
}


