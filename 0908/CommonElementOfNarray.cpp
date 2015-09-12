/*************************************************************************
  > File Name: CommonElementOfNarray.cpp
  > Author: Chao
  > Mail:1311159643@qq.com 
  > Created Time: Tue 08 Sep 2015 04:39:34 PM CST
 ************************************************************************/

#include<stdio.h>
#include<malloc.h>
int commonEqualElement(int* a[], int m, int* n)
{
	int max = n[0], k;
	int* b = a[0];
	for(k = 1; k < m; ++k)
	{
		int i = 0, j = 0, count = 0;
		int *c = a[k]; 
		while(i < max && j < n[k])
		{
			if(b[i] == c[j])
			{
				b[count] = c[j];
				count++; 
				i++;
				j++;
			}else
			{
				b[i] > c[j] ? j++ : i++;
			}   
		}   
		max = count;

	}

	return max;
}

void quickSort(int s[], int low, int high)
{
	int privotKey = s[low];
	int l_tmp = low;
	int h_tmp = high;
	while(low < high)
	{
		while(low < high && s[high] >= privotKey)
		{
			high--;
		}
		s[low] = s[high];
		while(low < high && s[low] <= privotKey)
		{
			low++;
		}
		s[high] = s[low];
	}
	s[low] = privotKey;
	if(	low != l_tmp)
	{
		quickSort(s, l_tmp, low - 1);
	}
	if(high != h_tmp)
	{
		quickSort(s, high + 1, h_tmp);
	}
}

int main(int argc, char* argv[])
{
	/*测试用例，应该输出3,5,6
	  int a[10] = { 1, 3, 3, 4, 5, 6, 6, 6, 8, 9 };
	  int b[10] = { 0, 3, 3, 5, 6, 6, 7, 7, 9, 9 };
	  int c[10] = { 1, 3, 3, 5, 6, 7, 8, 9, 9, 9 };
	  int d[10] = { 1, 1, 3, 5, 5, 6, 6, 7, 7, 8 };
	  */

	int m, i, j, temp = 0;
	printf("Please input numbers of arrays:\n");
	scanf("%d", &m);
	int *(*s)[], *n;
	s = (int *(*)[])malloc(m * sizeof(int));
	n = (int*)malloc(m* sizeof(int));
	for(i = 0; i < m; i++)
		{
			printf("Please input the number of %dth array:\n", i + 1);
			scanf("%d", &n[i]);
			(*s)[i] = (int*)malloc(n[i] * sizeof(int));
			printf("Please input numbers:\n");
			for(j = 0; j < n[i]; ++j)
			{
				scanf("%d", &temp);
				(*s)[i][j] = temp;

			}
			quickSort((*s)[i], 0, n[i] - 1);

		}
	int count;
	count = commonEqualElement(*s, m, n);
	if(count == 0)
	{
		printf("No common Numbers!\n");
		return 0;
	}
	for(i = 0; i < count ;++i)
	{
		printf("%d ",(*s)[0][i] );
	}
	printf("\n");

	return 0;

}



