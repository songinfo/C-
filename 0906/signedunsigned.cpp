/*************************************************************************
	> File Name: signedunsigned.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 06 Sep 2015 12:15:11 PM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
cout<<( 1 > -2) << endl; // 1 正常,都是有符号数 
cout <<((unsigned int)1>-2) << endl; // 0 -2被转换为无符号数. 
cout <<((unsigned int)1>-2.) << endl; // 1 float不存在无符号数,所以,无符号数肯定大于float型的负数!
cout<< "----------------------"<<endl;

unsigned int a=20; 
signed int b=-130; 
cout << a+b <<endl; 

cout<< "----------------------"<<endl;

signed int b1=-130; 
cout << b1+30 << endl; 

cout<< "----------------------"<<endl;

int a1 = -2; 
cout << a1/4*4 <<" | " << a1/4U*4<<endl;

cout<< "----------------------"<<endl;

signed int n1 = 1; 
signed int n2 = 2; 
unsigned int u1 = 1; 
unsigned int u2 = 2;


cout<< "----------------------"<<endl;
cout <<  (signed int)(-2) / (unsigned int)(-1) << endl;
cout << -2/-1 << endl;

return 0;
}
