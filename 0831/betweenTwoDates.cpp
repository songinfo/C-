/*************************************************************************
	> File Name: dateofyear.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 31 Aug 2015 05:10:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define ISLEAPYEAR(year) (year%400 == 0 || (year % 4 == 0 && year % 100 != 0))
int dayofyear(int year, int month, int day);
int diffdate(int year1, int month1, int day1, int year2, int month2, int day3);
int main(int argc, char* argv[])
{
	int year1, year2;
	int month1, month2;
	int day1, day2;
	while(fflush(stdin), printf("Enter two date(YYYYMMDD):"),scanf("%d%d%d%d%d%d", &year1,&month1,&day1,&year2,&month2,&day2) == 6)
	{
		//system("cls");
		printf("Diff: %d \n",diffdate(year1, month1, day1, year2, month2, day2));

	}
	return 0;
}

int dayofyear(int year, int month, int day)
{
//	int year;
//	int month;
//	int day;
	int sum;
	int index_month;
//	while(fflush(stdin), printf("Enter a date of a year(YYYYMMDD):"), scanf("%d%d%d", &year, &month, &day) == 3)
//	{
     //	system("cls");
		sum = 0;
		for(index_month = 1; index_month < month; ++index_month)
		{
			switch(index_month)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					sum += 31;
					break;

				case 4:
				case 6:
				case 9:
				case 11:
					sum += 30;
					break;
				case 2:
					if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
					{
						sum += 29;

					}else
					{
						sum += 28;
					}
					break;

			}
	}
		sum += day;
	//	printf("%d-%d-%d is %d of the year\n", year, month,day,sum);
	//	fflush(stdout);
//	}
	
	return sum;
}
int diffdate(int year1, int month1, int day1, int year2, int month2, int day2)
{
	int index_year;
	int sum = 0;
	for(index_year = year1; index_year < year2; ++index_year)
	{
		if(ISLEAPYEAR(index_year))
		{
			sum += 366;
		}else
		{
			sum += 365;
		}
	}
	sum = sum + dayofyear(year2, month2, day2) - dayofyear(year1, month1, day1);
	return sum;

}
