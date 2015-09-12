#include<iostream>
#include<vector>
#include<set>
#define N 100
void for_each(std::set<int>::iterator, std::set<int>::iterator, int);
struct Note
{
    int city_id;
    int pre;
};
std::set<int> list;
Note queue[100];
int book[100]={0};//标记已经访问过的商家
int start=0;//出发点总部
int end=4;//目的地的商家编号
int e[100][100];
int city_num=5;
int need_shop[100];//必须去的商家编号
void transfer()
{
	int len = N;
	int output;
    int head=0,tail=0;
    queue[head].city_id=start;
    queue[head].pre=-1;
    list.insert(start);
    tail++;
    book[start]=1;
    int cur;
    while(head<tail)
    {
        cur=queue[head].city_id;
        for(int index=0;index!=city_num;index++)
        {
            if(e[cur][index]!=N&&book[index]==0)
            {
                list.insert(index);
                queue[tail].city_id=index;
                queue[tail].pre=cur;
                tail++;
                book[index]=1;
            }
            if(queue[tail-1].city_id==end)
            {
              for (int i = 0; i != len; ++len)
              {
               if(list.count(need_shop[i])>0)
               {
                 for_each(list.begin(),list.end(),output);//到达终点，输出包含必须去的商家的路径
               }
             }
            }
        }
        head++;
    }
}
