/*************************************************************************
	> File Name: linkLoop.cpp
	> Author: Chao
	> Mail:1311159643@qq.com 
	> Created Time: Tue 29 Sep 2015 11:41:04 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
struct link
{
	int data;
	link* next;
};
bool isLoop(link* head)
{
	link *p1 = head, *p2 = head;
	if(head == NULL || head->next == NULL)
	{
		return false;
	}
	do{
		p1 = p1->next;
		p2 = p2->next->next;
	}while(p2 && p2->next && p1 != p2);
	if(p1 == p2)
		return true;
	else
		return false;
}


