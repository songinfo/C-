/*

���ֵķ�ת
���ࣺ C/C++ �ʼ�
 

 

��һ�����ַ�ת������eg��12300   ---��321  

 

���������һ��Ҫ���ǵ���eg��10230  ----��  3201

 

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



