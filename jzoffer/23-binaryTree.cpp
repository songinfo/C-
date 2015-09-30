/*************************************************************************
	> File Name: 23-binaryTree.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Mon 28 Sep 2015 10:04:02 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};

void PrintFromTopToBottom(BinaryTreeNode* pTreeRoot)
{
	if(!pTreeRoot)
	{
		return;
	}
	std::deque<BinaryTreeNode*> dequeTreeNode;
	dequeTreeNode.push_back(pTreeRoot);
	while(dequeTreeNode.size())
	{
		BinaryTreeNode *pNode = dequeTreeNode.front();
		dequeTreeNode.pop_front();
		printf("%d ", pNode->m_nValue);
		if(pNode->m_pLeft)
		{
			dequeTreeNode.push_back(pNode->m_pLeft);
		}
		if(pNode->m_pRight)
		{
			dequeTreeNode.push_back(pNode->m_pRight);
		}
	}

}








