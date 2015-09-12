/*************************************************************************
	> File Name: test.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Sun 06 Sep 2015 12:34:28 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{

signed char a=0xe0;
unsigned int b=a;
unsigned char c=a;

printf("%x	%x	%x\n", a, b, c);

// printf （”%x  %x  %x",a,b,c);
//下面说法正确的是：
//A （a>0 ）&&(b>0)为真 B c==a 为真 C b的16进制为0xffffffe0 D 都不对

// 答案：C  
// // 整形比较小于int的会扩宽的int再比较, 而有符号数扩宽填充符号位, 无符号数填充0, 导致扩宽后两个整形的二进制不再相等, 选择C.  
// 编程测试：
// 结果： ffffffe0  ffffffe0  e0"

return 0;
}
