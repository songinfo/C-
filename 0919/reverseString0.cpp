
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
    }//��ת�����ַ���

    printf(str);
    printf("\n");

    char *s;
    q=p=s=str;//ָ��ָ��ʼλ��
    while(*q!='\0')
    {
        if(*q==' '||*(q+1)=='\0')
        {
            p--;
            if(*(q+1)=='\0')//�������һ���ִ�
                p++;
            while(s<=p)
            {
                temp=*p;
                *p=*s;
                *s=temp;
                s++;
                p--;
            }//��ת�ֲ��ַ���

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
    //��һ���ǽ���ȫ�̷�ת�������ʱ�ɡ�tneduts a ma I��
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
    //�ڶ������в��ַ�ת��������ǿո���ʼ��ת����
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
