/*
   功能实现：
   扣字 （忽略大小写和标点） 
   统计字数 
   读取多行文本
   字符次数、频率统计 
   先按次数再按字符序排序（冒泡）
   


   开的内存不大 不要输太多 == ，仅供参考 ，有哪里错了求指教
*/

#include <stdio.h>
#include <string.h>

struct cha
{
	char aa[50];//单词
	int  num;//该单词出现的次数
};

cha CHA[50];

int main()
{
	char cc[100][101];  
	char ans[50][50];//存储字符串
	char tem[50];
	int i=0,m;
	FILE* fp;//从文件读取字符串到cc
	if((fp=fopen("python.txt","r"))==NULL) 
	{
		printf("cannot open file\n");
		return 0;
	}
	int fcount=0;//记录文本的行数
	while(!feof(fp))
	{
		i=0;
		while(i<100&&(!feof(fp)))//100个字符为一行存入cc中
			cc[fcount][i++]=fgetc(fp);
		cc[fcount++][i]='\0';
	}
	fclose(fp);

	int count=0;//单词数
	for(m=0;m<fcount;m++)
	{
		i=0;
		while(cc[m][i]==' ')//去开头空格
			++i;
		while(cc[m][i]!='\0')
		{
			++count;
			int j=0;
			//printf("%d : ",count);
			while( ( (cc[m][i]>='a'&&cc[m][i]<='z')||(cc[m][i]>='A'&&cc[m][i]<='Z')||cc[m][i]=='\'')&&cc[m][i]!='\0')
			{
				if(cc[m][i]>='A'&&cc[m][i]<='Z') cc[m][i]+='a'-'A';
				printf("%c",cc[m][i]);
				ans[count][j++]=cc[m][i];
				++i;
			}
			printf("\n");
			ans[count][j]='\0';
			while( (!( (cc[m][i]>='a'&&cc[m][i]<='z')||(cc[m][i]>='A'&&cc[m][i]<='Z')||cc[m][i]=='\'' ))&&cc[m][i]!='\0' )
				++i;	
		}
	}
	printf("一共 %d 个单词\n",count);

	//按照字符顺 冒泡排序
	int is=0;//是否排序完成
	int Tct=count;
	while(is==0)
	{
		is=1;
		for(i=1;i<Tct;i++)
		{
			if(strcmp(ans[i],ans[i+1])>0)
			{
				is=0;
				strcpy(tem,ans[i]);
				strcpy(ans[i],ans[i+1]);
				strcpy(ans[i+1],tem);
			}
		}
		--Tct;
	}

	printf("\n");
	printf("\n");
	int count2=-1;//不同的单词的个数
	for(i=1;i<=count;i++)
	{
		if(strcmp(ans[i],ans[i+1])==0)
		{
			strcpy(CHA[++count2].aa,ans[i]);
			strcpy(tem,ans[i]);
			CHA[count2].num+=2;
			i+=2;
			while(strcmp(tem,ans[i])==0)
			{
				++i;
				++CHA[count2].num;
			}
			--i;
		}
		else if (strcmp(ans[i],ans[i+1])!=0)
		{
			strcpy(CHA[++count2].aa,ans[i]);
			CHA[count2].num++;
		}
	} 

	//按照次数排序
	printf("\n");
	printf("\n");
	is=0;//是否排序完成
	Tct=count2;
	while(is==0)
	{
		is=1;
		for(i=0;i<Tct;i++)
		{
			if(CHA[i].num<CHA[i+1].num)
			{
				is=0;
				cha ctem=CHA[i];
				CHA[i]=CHA[i+1];
				CHA[i+1]=ctem;
			}
		}
		--Tct;
	}
	if(count2!=0)
	{
		printf("先按次数再按字符序的排序如下：\n\n");
		for(i=0;i<=count2;i++)
			printf("第%d个： 出现次数为：%d次    %s\n",i+1,CHA[i].num,CHA[i].aa);
	}
	printf("\n");
	printf("\n");
	for(i=0;i<=count2;i++)
		printf("字符：%s  次数为:%d 频率：%0.3lf\n",CHA[i].aa,CHA[i].num,(double)CHA[i].num/count);
	printf("\n");
	return 1;
}
