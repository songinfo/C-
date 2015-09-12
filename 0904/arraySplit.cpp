/*************************************************************************
	> File Name: arraySplit.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 04 Sep 2015 10:14:33 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void output(long long* a, int len)
{
	for(int i = 0; i < len; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void problem(int* a, long long* b, int N)
{
	b[0] = 1;
	for(int i = 1; i < N ; ++i)
	{
		b[i] = b[i-1] * a[i-1];

	}
	b[0] = a[N-1];
	for(int i = N-2; i >= 1; --i)
	{
		b[i] *= b[0];
		b[0] *= a[i];

	}
}
int main()
{
	const int N = 10;
	int a[N] = {1, 7, 4, 3, 4, 2, 5, 3, 7, 3};
	long long mresult = 1;
	long long refer[N];
	for(int i = 0; i < N ; ++i)
	{
		mresult *= a[i];

	}
	for(int i = 0; i < N; ++i)
	{
		refer[i] = mresult / a[i];

	}

	cout << "Result:" << endl;
	output(refer, N);

	long long b[N];
	problem(a, b, N);
	cout <<	endl << endl << "OK result:" << endl;
	output(b,N);

	return 0;

}
