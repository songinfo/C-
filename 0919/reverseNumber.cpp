/*

数字的翻转
分类： C/C++ 笔记
 

 

将一个数字翻转过来，eg：12300   ---》321  

 

特殊情况，一定要考虑到：eg：10230  ----》  3201

 

*/
#include <iostream>  
using namespace std;  
void func(int tmp);  
int main(void)  
{  
    int a;  
    cin>>a;  
    func(a);  
  
    return 0;  
}  
  
void func(int tmp)  
{  
    static bool flag=true;  
    while ((tmp/10) != 0)  
    {  
        if (tmp%10 != 0)  
        flag = false;  
        if (!flag)  
        cout<<tmp%10;  
        tmp/=10;  
    }  
        cout<<tmp%10;  
}  



