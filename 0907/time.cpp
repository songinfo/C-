/*************************************************************************
  > File Name: time.cpp
  > Author: Chao
  > Mail:1311159643@qq.com 
  > Created Time: Mon 07 Sep 2015 05:29:10 PM CST
 ************************************************************************/

#include<stdlib.h>
#include  <time.h>  
#include  <stdio.h>  

int main(int argc, char* argv[])
{
	time_t  t;  
	tm  *tp;  

	t=time(NULL);  
	//  既然time_t实际上是长整型，到未来的某一天，从一个时间点（一般是1970年1月1日0时0分0秒）
	//  //  到那时的秒数（即日历时间）超出了长整形所能表示的数的范围怎么办？对time_t数据类型的值来说，
	//  //  它所表示的时间不能晚于2038年1月18日19时14分07秒。为了能够表示更久远的时间，一些编译器厂商
	//  //  引入了64位甚至更长的整形数来保存日历时间。比如微软在Visual C++中采用了__time64_t数据类型来
	//  //  保存日历时间，并通过_time64()函数来获得日历时间（而不是通过使用32位字的time()函数），这样
	//  //  就可以通过该数据类型保存3001年1月1日0时0分0秒（不包括该时间点）之前的时间。
	//
	tp=localtime(&t);  
	printf("%d %d %d\n",tp->tm_year+1900, tp->tm_mon+1, tp->tm_mday);  
	printf("%d:%d:%d\n",tp->tm_hour,tp->tm_min,tp->tm_sec); 

	//SYSTEMTIME stCurTime = {0};
//	::GetLocalTime(&stCurTime);

	// 注意区分GetSystemTime(&stCurTime);的区别
//	printf("%d/%d/%d/n",stCurTime.wMonth,stCurTime.wDay,stCurTime.wYear);  
//	printf("%d:%d:%d/n",stCurTime.wHour,stCurTime.wMinute,stCurTime.wSecond); 
	return 0;
}
