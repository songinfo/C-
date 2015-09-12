/*************************************************************************
	> File Name: bubleSort.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Wed 09 Sep 2015 12:34:11 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100000

void array_init(int* arr, int len);
void array_buble(int* arr, int len);
void array_select(int* arr, int len);
void array_right(int* arr, int bg, int end);
void array_insert(int* arr, int len);
void array_show(int* arr, int len);
int array_partion(int* arr, int len);
void array_quick(int* arr, int len);

int main(int argc, char* argv[])
{
	int arr[SIZE];
	clock_t bg, end;
	array_init(arr, SIZE);
	array_show(arr, SIZE);
	printf("\n");
	bg = clock();
//	array_insert(arr, SIZE);
	//array_buble(arr, SIZE);
//	array_select(arr, SIZE);
	array_quick(arr, SIZE);
	end = clock();
	array_show(arr, SIZE);
	printf("\n");
	printf("Time:%.9fs\n", (double)(end - bg)/CLOCKS_PER_SEC);

	return 0;
}
void array_init(int* arr, int len)
{
	int i;
	for(i = 0; i != len; ++i)
	{
		arr[i] = rand()%10000;
	}
}
void array_show(int* arr, int len)
{
	int i;
	for( i = 0; i != len; ++i)
	{
		printf("%d ", arr[i]);
	}
}
void array_buble(int* arr, int len)
{
	int down, up;
	int up_cnt, down_cnt;
	int index, temp;
	down = len;
	up = -1;
	up_cnt = 0;
	down_cnt = 0;
	while(up <= down)
	{
		for(index = up + 1; index + 1 < down ; ++index)
		{
			if(arr[index] > arr[index+1])
			{
				temp = arr[index];
				arr[index] = arr[index+1];
				arr[index+1] = temp;
			}
		}
		down--;
		for(index = down - 1; index - 1 > up; --index)
		{
			if(arr[index] < arr[index-1])
			{
				temp = arr[index];
				arr[index] = arr[index-1];
				arr[index-1] = temp;
			}
		}
		up++;
	}
}

void array_select(int* arr, int len)
{
	int max_index;
	int cnt, index, temp;
	for(cnt = 0; cnt != len -1; ++cnt)
	{
		max_index = 0;
		for(index = 0; index != len - cnt; ++index)
		{
			if(arr[index] > arr[max_index])
			{
				max_index = index;
			}
		}
		temp = arr[max_index];
		arr[max_index] = arr[len - 1 -cnt];
		arr[len - 1 -cnt] = temp;
	}
}

void array_right(int* arr, int bg, int end)
{
	int index; 
	int temp;
	temp = arr[end];
	for(index = end -1; index >= bg; --index)
	{
		arr[index+1] = arr[index];
	}
	arr[bg] = temp;
}

void array_insert(int* arr, int len)
{
	int index, insert_index;
	for(index = 1; index != len; ++index)
	{
		for(insert_index = index - 1; insert_index >= 0; --insert_index)
		{
			if(arr[insert_index] <= arr[index])
			{
				break;
			}
		}
		array_right(arr, insert_index + 1, index);
	}
}

int array_partion(int* arr, int len)
{
	int key = arr[0];
	int low, high;
	low = 0;
	high = len - 1;
	while(low < high)
	{
		while(high > low && arr[high] >= key)
		{
			high--;
		}
		if(high == low)
		{
			break;
		}
		arr[low] = arr[high];
		while(low < high && arr[low] < key)
		{
			low++;
		}
		if(low < high)
		{
			arr[high] = arr[low];
		}
	}
		arr[low] = key;

		return low;

}
void array_quick(int* arr, int len)
{
	int k;
	if(len <= 1)
	{
		return;
	}
	if(len <= 5)
	{
		array_insert(arr, len);
	}
	k = array_partion(arr, len);
	array_quick(arr, k);
	array_quick(&arr[k+1], len - k - 1);
}
