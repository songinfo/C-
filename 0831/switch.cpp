/*************************************************************************
	> File Name: switch.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 31 Aug 2015 04:24:57 PM CST
 ************************************************************************/

#include<cstdio>
#include<cstdlib>
int main(int argc, char* argv[])
{
	int value;
	char level = '?';
	printf("Enter a value:\n");
	while(fflush(stdin),scanf("%d", &value) == 1)
	{
		switch(value/10)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5: level = 'D';break;
			case 6: level = 'C';break;
			case 7: level = 'B';break;
			case 8: level = 'A';break;
			case 9: level = 'S';break;
			default:printf("Error!\n");
					break;
		}
		printf("%d: %c\n", value, level);

	}
	return 0;
}
