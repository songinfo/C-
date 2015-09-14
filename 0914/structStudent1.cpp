/*************************************************************************
	> File Name: structStudent.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 14 Sep 2015 09:08:51 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 8	
#define CNT 5
typedef struct Student
{
	int myId;
	char myName[LEN];
	int myScores[CNT];

}STU, *pSTU;

void show(STU val);
void func(STU val);
	
void scoreInit(int* arr, int len);
void nameInit(char* name, int len);
void stuInit(pSTU arr, int len);
void stuShow(pSTU arr, int len);
int stuSum(int* arr, int len);
int stuCmp(const void* left, const void* right);

int main(int argc, char* argv[])
{
	STU astu = {1001, "zhang", {10, 20, 30, 40, 50}};
	STU anotherstu;
	STU stu1;

	STU stus[10];
	stuInit(stus, 10);
	stuShow(stus, 10);
	qsort(stus, 10, sizeof(STU), &stuCmp);
	printf("-----------------------------------\n");
	stuShow(stus, 10);
	anotherstu = astu;
	show(anotherstu);


	astu.myId = 1002;
	strcpy(astu.myName, "zhangsan");
	astu.myScores[0] = 15;
	astu.myScores[1] = 25;

	show(astu);

	printf("Before : astu: %d\n", astu.myId);
	func(astu);
	printf("After:astu:%d\n", astu.myId);

	memset(&stu1, 0, sizeof(STU));
	//printf("Input the ID, Name and Scores:\n");
	//scanf("%d%s%d%d%d%d%d", &stu1.myId, &stu1.myName, &stu1.myScores[0], &stu1.myScores[1], &stu1.myScores[2], &stu1.myScores[3],&stu1.myScores[4]);

	//show(stu1);

	return 0;
}

void show(STU stu)
{
	int index;
	printf("ID:%-3d\nName:%8s\n", stu.myId, stu.myName);
	for(index = 0; index != CNT; ++index)
	{
		printf("%-4d ",stu.myScores[index] );
	}
	printf("%6d", stuSum(stu.myScores, CNT));
	printf("\n");

}

void func(STU val)
{
	val.myId++;
	printf("Func::val:%d\n", val.myId);
}
void stuInit(pSTU arr, int len)
{
	int index;
	for(index = 0; index < len;	++index)
	{
		arr[index].myId = index;
		nameInit(arr[index].myName, LEN);
		scoreInit(arr[index].myScores, CNT);
	}

}
void nameInit(char* name, int len)
{
	int index;
	for(index = 0; index < len - 1; ++index)
	{
		if(index == 0)
		{
			name[index] = 'A' + rand()%26;
		}else
		{
			name[index] = 'a' + rand()%26;
		}
	}
	name[index] = 0;
}

void scoreInit(int* arr, int len)
{
	int index;
	for(index = 0; index < len; ++index)
	{
		arr[index] = rand()%100 + 1;

	}
}

void stuShow(pSTU arr, int len)
{
	int index;
	for(index = 0; index < len; ++index)
	{
		show(arr[index]);
	}
}
int stuCmp(const void* left, const void* right)
{
	int sumLeft, sumRight;
	STU stuLeft = *(pSTU)left;
	STU stuRight = *(pSTU)right;
	sumLeft = stuSum(stuLeft.myScores, CNT);
	sumRight = stuSum(stuRight.myScores, CNT);
	if(sumLeft < sumRight)
	{
		return 1;
	}else if(sumLeft == sumRight)
	{
		return 0;
	}else if(sumLeft > sumRight)
	{
		return -1;
	}
}

int stuSum(int* arr, int len)
{
	int sum = 0;
	int index;
	for(index = 0; index < len; ++index)
	{
		sum += arr[index];
	}

	return sum;
}
