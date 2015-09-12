/*************************************************************************
	> File Name: NumConvert.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sat 29 Aug 2015 08:55:52 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<iterator>
using namespace std;
string NumConvert(int x, int n)//实现十进制数到n进制的转换；
{
	string ret;
	int i = 0;
	char temp;
	while(x)
	{
		if(x%n < 10)
			temp = x%n + '0';
		else
			temp = x%n + 'A' - 10;
		ret += temp;
		x /= n;
	}
	reverse_iterator<string::iterator> r = ret.rbegin();
	string rev(r, ret.rend());
	return rev;

}
int main(int argc, char* argv[])
{
	int x, n;
	string str;
	cout << "请输入十进制数和进制数（2,4，8,16）："<< endl;
	while(cin >>x >> n)
	{
		str = NumConvert(x, n);
		cout<< str<< endl;
	}
	return 0;
}
