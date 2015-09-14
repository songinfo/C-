/*************************************************************************
	> File Name: main.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 14 Sep 2015 12:07:23 PM CST
 ************************************************************************/

#include "func.h"

int main(int argc, char* argv[])
{
	pNODE phead, pcur;
	phead = NULL;
	linkInitHead(&phead);
	linkShow(phead);

	return 0;
		
}
