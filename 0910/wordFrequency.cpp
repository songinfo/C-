/*
   ����ʵ�֣�
   ���� �����Դ�Сд�ͱ�㣩 
   ͳ������ 
   ��ȡ�����ı�
   �ַ�������Ƶ��ͳ�� 
   �Ȱ������ٰ��ַ�������ð�ݣ�
   


   �����ڴ治�� ��Ҫ��̫�� == �������ο� �������������ָ��
*/

#include <stdio.h>
#include <string.h>

struct cha
{
	char aa[50];//����
	int  num;//�õ��ʳ��ֵĴ���
};

cha CHA[50];

int main()
{
	char cc[100][101];  
	char ans[50][50];//�洢�ַ���
	char tem[50];
	int i=0,m;
	FILE* fp;//���ļ���ȡ�ַ�����cc
	if((fp=fopen("python.txt","r"))==NULL) 
	{
		printf("cannot open file\n");
		return 0;
	}
	int fcount=0;//��¼�ı�������
	while(!feof(fp))
	{
		i=0;
		while(i<100&&(!feof(fp)))//100���ַ�Ϊһ�д���cc��
			cc[fcount][i++]=fgetc(fp);
		cc[fcount++][i]='\0';
	}
	fclose(fp);

	int count=0;//������
	for(m=0;m<fcount;m++)
	{
		i=0;
		while(cc[m][i]==' ')//ȥ��ͷ�ո�
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
	printf("һ�� %d ������\n",count);

	//�����ַ�˳ ð������
	int is=0;//�Ƿ��������
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
	int count2=-1;//��ͬ�ĵ��ʵĸ���
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

	//���մ�������
	printf("\n");
	printf("\n");
	is=0;//�Ƿ��������
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
		printf("�Ȱ������ٰ��ַ�����������£�\n\n");
		for(i=0;i<=count2;i++)
			printf("��%d���� ���ִ���Ϊ��%d��    %s\n",i+1,CHA[i].num,CHA[i].aa);
	}
	printf("\n");
	printf("\n");
	for(i=0;i<=count2;i++)
		printf("�ַ���%s  ����Ϊ:%d Ƶ�ʣ�%0.3lf\n",CHA[i].aa,CHA[i].num,(double)CHA[i].num/count);
	printf("\n");
	return 1;
}