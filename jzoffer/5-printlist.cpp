/*************************************************************************
	> File Name: 5-printlist.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Fri 02 Oct 2015 07:41:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct ListNode
{
	int m_nKey;
	ListNode* m_pNext;
};

void PrintListReversingly_Iteratively(ListNode* pHead)
{
	std::stack<ListNode*> nodes;

	ListNode* pNode = pHead;
	while(pNode != NULL)
	{
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}
	while(!nodes.empty())
	{
		pNode = nodes.top();
		printf("%d\t", pNode->m_nKey);
		nodes.pop();
	}
}



//2

void PrintListReversingly_Recursively(ListNode* pHead)
{
	if(pHead != NULL)
	{
		if(pHead->m_pNext != NULL)
		{
			 PrintListReversingly_Recursively(pHead->m_pNext);

		}
		printf("%d\t", pHead->m_nValue);
	}
}
