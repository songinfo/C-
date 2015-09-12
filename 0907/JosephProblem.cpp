/*************************************************************************
  > File Name: JosephProblem.cpp
  > Author: Chao
  > Mail:1311159643@qq.com 
  > Created Time: Mon 07 Sep 2015 05:45:34 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100000
#define STEP 5

void fun1()
{
	fun1();
}

void jose1()
{
	int arr[SIZE];
	int index, move_index;
	int left = SIZE;
	int start_index = 0;
	for(index = 0; index != SIZE; ++index)
	{
		arr[index] = index + 1;

	}

	while(left != 1)
	{
		index = 1;
		while(index != STEP)
		{
			if(start_index + 1 == left)
			{
				start_index = 0;
			}else 
			{
				start_index++;
			}
			index++;
		}
	//	printf("Out-1: %d\n", arr[start_index]);

		for(move_index = start_index + 1; move_index != left; ++move_index)
		{
			arr[move_index-1] = arr[move_index];
		}
		if(start_index == left - 1)
		{
			start_index = 0;
		}
		left--;
	}
	printf("Winner:%d\n", arr[0]);

}

void jose2()
{
	int arr[SIZE];
	int index, move_index;
	int left = SIZE;
	int start_index = 0;
	for(index = 0; index != SIZE; ++index)
	{
		arr[index] = index + 1;

	}
	index = 0;
	start_index = 0;
	while(left != 1)
	{
		if(arr[start_index] != 0)
		{
			index++;
			if(index == STEP)
			{
	//			printf("2-Out:%d\n", arr[start_index]);
				arr[start_index] = 0;
				index =0;
				left--;
			}
			start_index = (start_index + 1)%SIZE;

		}else 
		{
			start_index = (start_index + 1)%SIZE;

		}

	}
	for(index = 0; index != SIZE; ++index)
	{
		if(arr[index] != 0)
		{
			printf("Winner:%d\n", arr[index]);
			break;
		}
	}

}

int main(int argc, char* argv[])
{
//	fun1();

	
	clock_t bg1, bg2, end1, end2 ;
	bg1 = clock();
	jose1();
	end1 = clock();
	printf("1: %.16fS\n", (double)(end1 - bg1)/CLOCKS_PER_SEC );

	bg2 = clock();
	jose2();
	end2 = clock();
	printf("2: %.16fS\n", (double)(end2 - bg2)/CLOCKS_PER_SEC );
//	system("pause");
    
	return 0 ;
}
