/*************************************************************************
	> File Name: htonConvert.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 30 Aug 2015 10:18:19 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int value;
	int result;
while(fflush(stdin),printf("Enter a value:\n"), scanf("%d",&value) == 1)
{
	result = ((value >> 24) & 0xff)|((value >> 8) &	0xff00)|((value << 8) & 0xff0000)|((value << 24) & 0xff000000);
	printf("Brfore :%08x, after :%08x\n", value, result);
}
	return 0;

}
