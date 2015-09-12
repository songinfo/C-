/*************************************************************************
	> File Name: AlphSatistic.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 28 Aug 2015 09:14:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	char ch; 
	int cntAlph, cntNum, cntOth;
	cntAlph = 0;
	cntNum = 0;
	cntOth = 0;
	while(scanf("%c", &ch) == 1)
	{
		if(ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
			cntAlph++;
		else if(ch >= '0' && ch <= '9')
			cntNum++;
		else
			cntOth++;
	}

	cout << "cntAlph:"<< cntAlph << "	cntNum:" << cntNum << "		cntOth:"<< cntOth<<endl;
	
	return 0;
}
