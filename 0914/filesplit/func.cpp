/*************************************************************************
	> File Name: func.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 14 Sep 2015 10:58:22 AM CST
 ************************************************************************/

#include "funch.cpp"

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
