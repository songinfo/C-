/*************************************************************************
	> File Name: 3-findNum.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Wed 30 Sep 2015 10:40:45 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

bool Find(int* matrix, int rows, int columns, int number)
{
	bool find = false;
	if(matrix != NULL && rows > 0 && columns > 0 )
	{
		int row = 0;
		int column = columns - 1;
		while(row < rows && column >= 0)
		{
			if(matrix[row * columns + column] == number)
			{
				found = true;
				break;
			}
			else if(matrix[row * columns + column] > number)
				--column;
			else
				++row;
		}
	}

	return found;
}
