/*************************************************************************
	> File Name: linkReverse.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Tue 29 Sep 2015 12:02:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct link
{
	int data;
	link* next;
};

void reverse(link* &head)
{
	if(head == NULL)
		return;
	link *pre, *cur, *next;
	pre = head;
	cur = head->next;
	while(cur)
	{
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	head->next = NULL;
	head = pre;

}
//2
linkRecursive(link* p, link* &head)
{
	if(p == NULL || p->next == NULL)
	{
		head = p;
		return p;
	}else
	{
		link* tmp = linkRecursive(p->next, head);
		tmp->next = p;
		return p;
	}
}
