/*************************************************************************
  > File Name: link_handle.cpp
  > Author: Chao
  > Mail:1311159643@qq.com 
  > Created Time: Sun 26 Jul 2015 09:45:11 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#define N 20
struct node
{
	int data;
	struct node* next;
};
typedef struct node Node;
typedef struct node* pNode;
void link_reverse(Node* head)
{
	pNode pnew = head->next->next;
	head->next->next = NULL;
	while(pnew)
	{
		pNode temp = pnew->next;
		pnew->next = NULL;
		pnew->next = head->next;
		head->next = pnew;
		pnew = temp;
	}
}
void link_show(pNode head)
{
	pNode pnew = head->next;
	while(pnew)
	{
		std::cout << pnew->data << " ";
		pnew = pnew->next;
	}
	std::cout<<std::endl;
}
void link_add(Node* head, Node* node)
{
	pNode ppre = head;
	pNode pnew = head->next;
	if(pnew = NULL)
	{
		node->next = ppre->next;
		ppre->next = node;
	}
	while(pnew)
	{
		if(pnew->data > node->data)
		{
			node->next = pnew;
			ppre->next = node;
			break;
		}
		if(pnew->data == node->data)
		{
			break;
		}
		if(pnew->next == NULL)
		{
			node->next = pnew->next;
			pnew->next = node;
			break;
		}
		ppre = pnew;
		pnew = pnew->next;
	}
}
void link_create_sort(Node* head)
{
	int index = 0;
	while(index < N)
	{
		pNode node = (pNode)calloc(1, sizeof(Node));
		node->data = rand()%100 + 1;
		node->next = NULL;
		link_add(head, node);
		index++;
	}
}
void link_sort(Node* head)
{
	pNode insert = head->next->next;
	head->next->next = NULL;
	pNode pnew = head->next;
	pNode ppre = head;
	while(insert)
	{
		pNode temp = insert->next;
		insert->next = NULL;
		pnew = head->next;
		ppre = head;
		while(pnew)
		{
			if(pnew->data > insert->data)
			{
				insert->next = ppre->next;
				ppre->next = insert;
				break;
			}
			if(pnew = NULL)
			{
				insert->next = pnew->next;
				pnew->next = insert;
				break;
			}
			pnew = pnew->next;
			ppre = ppre->next;
		}
		insert = temp;
	}
}
void link_unique(Node* head)
{
	pNode pnew = head->next;
	while(pnew)
	{
		if(pnew->next == NULL)
		{
			return;
		}
		pNode pnew1 = pnew->next;
		pNode ppre = NULL;
		while(pnew1)
		{
			if(pnew1->data == pnew->data)
			{
				if(ppre == NULL)
				{
					pNode temp = pnew->next;
					pnew->next = pnew1->next;
					pnew1 = temp;
				}else
				{
					pNode temp = pnew->next;
					ppre->next = pnew1->next;
					pnew1 = temp;
				}
			}else
			{
				ppre = pnew1;
				pnew1 = pnew1->next;
			}
		}
		pnew = pnew->next;
	}
}

void link_merge(Node* head1, Node* head2)
{
	while(head2->next)
	{
		pNode node = head2->next;
		head2->next = head2->next->next;
		link_add(head1, node);
	}
}
void link_init_tail(pNode* phead)		
{
	int val;
	*phead = (pNode)calloc(1, sizeof(Node));

	(*phead)->next = NULL;
	pNode pnew = NULL, ptail = NULL;
	printf("Please input numbers:\n");
	while(scanf("%d", &val)== 1)
	{
		pnew = (pNode)calloc(1, sizeof(Node));
		pnew->data = val;
		//pnew->next = *phead;
		if((*phead)->next == NULL)
		{
			(*phead)->next = pnew;
			ptail = pnew;
		}else
		{
			ptail->next = pnew;
			ptail = pnew;
		}
	}
}

void link_init_head(pNode* phead)
{
	int val;
	pNode pnew = NULL;
	//pNode ptail = NULL;
	*phead = (pNode)calloc(1, sizeof(Node));
	(*phead)->next = NULL;

	printf("Please input numbers:\n");
	while(scanf("%d", &val)== 1)
	{
		pnew = (pNode)calloc(1, sizeof(Node));
		pnew->data = val;
		pnew->next = (*phead)->next;
		(*phead)->next = pnew;
	}
}
int main(int argc, char* argv[])
{
	pNode phead = NULL;
	//link_init_tail(&phead);
	link_init_head(&phead);
	link_show(phead);
	link_reverse(phead);
	link_show(phead);

	return 0;

}






