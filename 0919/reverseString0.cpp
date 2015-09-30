
#include <stdio.h>

int main()
{
    char str[]="you are a student";
    printf(str);
    printf("\n");

    char *p,*q;
    char temp;
    p=q=str;
    while(*q!='\0')
    {
        q++;
    }
    q--;
    while(p<=q)
    {
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }//反转整个字符串

    printf(str);
    printf("\n");

    char *s;
    q=p=s=str;//指针指向开始位置
    while(*q!='\0')
    {
        if(*q==' '||*(q+1)=='\0')
        {
            p--;
            if(*(q+1)=='\0')//处理最后一个字串
                p++;
            while(s<=p)
            {
                temp=*p;
                *p=*s;
                *s=temp;
                s++;
                p--;
            }//反转局部字符串

            s=q+1;
            p=q;
        }
        q++;
        p++;
    }

    printf(str);
    printf("\n");
}


/*
#include <iostram>
#include <stdio.h>

int main(void)
{
    int num=-12345,j=0,i=0,flag=0,begin,end;
    char str[]="I am a student",temp;
    j=strlen(str)-1;
    
    printf(" string=%s\n",str);
    //第一步是进行全盘反转，将单词变成“tneduts a ma I”
    while(j>i)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
        i++;
    }
    printf(" string=%s\n",str);
    int i=0;
    //第二步进行部分反转，如果不是空格则开始反转单词
    while(str[i])
    {
        if(str[i]!=' ')
        {
            begin=i;
            while(str[i]&&str[i]!=' ')
            {
                i++;
            }
            i=i-1;
            end=i;
        }
        while(end>begin)
        {
            temp=str[begin];
            str[begin]=str[end];
            str[end]=temp;
            end--;
            begin++;
        }
        i++;
    }
    printf(" string=%s\n",str);
    return 0;
}

*/
