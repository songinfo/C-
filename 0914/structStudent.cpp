/*************************************************************************
	> File Name: structStudent.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 14 Sep 2015 09:08:51 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 17
#define CNT 5
typedef struct Student
{
	int myId;
	char myName[LEN];
	int myScores[CNT];

}STU, *pSTU;

void show(STU val);

int main(int argc, char* argv[])
{
	STU astu = {1001, "zhangsan", {10, 20, 30, 40, 50}};
	STU anotherstu;
	STU stu1;

	anotherstu = astu;
	show(anotherstu);

	astu.myId = 1002;
	strcpy(astu.myName, "zhangsan");
	astu.myScores[0] = 15;
	astu.myScores[1] = 25;

	show(astu);

	memset(&stu1, 0, sizeof(STU));
	printf("Input the ID, Name and Scores:\n");
	scanf("%d%s%d%d%d%d%d", &stu1.myId, &stu1.myName, &stu1.myScores[0], &stu1.myScores[1], &stu1.myScores[2], &stu1.myScores[3],&stu1.myScores[4]);

	show(stu1);

	return 0;
}

void show(STU stu)
{
	int index;
	printf("ID:%d\nName:%s\n", stu.myId, stu.myName);
	for(index = 0; index != CNT; ++index)
	{
		printf("%d ",stu.myScores[index] );
	}
	printf("\n");

}

