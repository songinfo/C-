/*************************************************************************
	> File Name: findCommentElementoftwoArray.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Tue 29 Sep 2015 12:22:02 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
//1 o(nlogn)
bool findCommon(int a[], int size1, int b[], int size2)
{
	int i;
	for(i = 0; i < size1; ++i)
	{
		int start = 0, end = size2 - 1, mid;
		while(start <= end)
		{
			mid = (start + end)/2;
			if(a[i] == b[mid])
			{
				return true;
			}else if(a[i] < b[mid])
			{
				end = mid - 1;
			}else
			{
				start = mid + 1;
			}
		}
	}
	return false;
}


//2  O(n)

bool findCommon2(int a[], int size1, int b[], int size2)
{
	int i = 0, j = 0;
	while(i < size1 && j < size2)
	{
		if(a[i] == b[j])
			return true;
		if(a[i] > b[j])
			j++;
		if(a[i] < b[j])
			i++;
	}

	return false;
}


