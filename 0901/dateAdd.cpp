/*************************************************************************
	> File Name: dateAdd.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Tue 01 Sep 2015 10:33:50 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define ISLEAPYEAR(year) (year%400 == 0 || year%4 == 0 && year%100 != 0)
int main(int argc, char* argv[])
{
	int year, month, day;
	while(fflush(stdin), printf("Please enter a date:"),scanf("%d%d%d", &year, &month, &day) == 3)
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				year = year + (month + (day + 1)/32)/13;
				month = (month + (day + 1)/32)%13 + (month + (day + 1)/32)/13;
				day = (day + 1)%32 + (day + 1)/32;
				break;

			case 4:
			case 6:
			case 9:
			case 11:
				month = month +	(day + 1)/31;
				day = (day + 1)%31 + (day + 1)/31;
				break;
			case 2:
				if(ISLEAPYEAR(year))
				{
					month = month + (day + 1)/30;
					day = (day + 1)%30 + (day + 1)/30;
				}else
				{
					month = month + (day + 1)/29;
					day = (day + 1)%29 + (day + 1)/29;
				}
				break;

		}
		printf("Next Date:%d-%d-%d\n", year, month, day);
	}
	system("pause");
	return 0;

}
