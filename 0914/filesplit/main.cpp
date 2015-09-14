/*************************************************************************
	> File Name: main.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 14 Sep 2015 11:01:01 AM CST
 ************************************************************************/

#include "funch.cpp"

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

