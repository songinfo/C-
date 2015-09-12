#include <stdio.h>
#include <malloc.h>

int Cmp_Equal_Ele(int* a[], int m, int *n){
	int max = n[0], k;
	int *b = a[0];
	//每次比较两个数组，将共同元素复制到第一个数组中，并设定上限max
	for (k = 1; k < m; k++){
		//i和j分别为两个数组的游标，用于扫描数组
		int i = 0, j = 0, count = 0;
		int *c = a[k];
		//直到两个数组中有一个扫描结束
		while (i < max && j < n[k]){
			//如果两个游标所指的值相等，则保存这个数，并且两个游标都右移
			if (b[i] == c[j]){
				b[count] = c[j];
				count++;
				i++;
				j++;
			}
			//将数值小的数组的游标右移
			else
				b[i]>c[j] ? j++ : i++;
		}
		//将保存值得数目设为上限
		max = count;
	}
	return max;
}

//快速排序
void Q_S(int s[], int low, int high){
	int privotKey = s[low];
	int l_tmp = low;
	int h_tmp = high;
	while (low < high){
		while (low < high && s[high] >= privotKey){
			high--;
		}
		s[low] = s[high];
		while (low < high && s[low] <= privotKey){
			low++;
		}
		s[high] = s[low];
	}
	s[low] = privotKey;
	if (low != l_tmp)
		Q_S(s, l_tmp, low - 1);
	if (high != h_tmp)
		Q_S(s, high + 1, h_tmp);
}

int main(int argc, char *argv[]){
	/*测试用例，应该输出3,5,6
	int a[10] = { 1, 3, 3, 4, 5, 6, 6, 6, 8, 9 };
	int b[10] = { 0, 3, 3, 5, 6, 6, 7, 7, 9, 9 };
	int c[10] = { 1, 3, 3, 5, 6, 7, 8, 9, 9, 9 };
	int d[10] = { 1, 1, 3, 5, 5, 6, 6, 7, 7, 8 };*/

	int m, i, j, temp = 0;//标记变量及临时变量，用于循环和获取参数
	printf("Array numbers:\n");
	scanf("%d", &m);
	int *(*s)[], *n;
	s = (int *(*)[])malloc(m * sizeof(int));//动态分配数组的个数
	n = (int*)malloc(m * sizeof(int));//保存每个数组元素的个数
	//循环获取所有数组元素的输入
	for (i = 0; i < m; i++){
		printf("The %dth array nmbers:\n", i + 1);
		scanf("%d", &n[i]);
		(*s)[i] = (int*)malloc(n[i] * sizeof(int));
		printf("Input numbers:\n");
		for (j = 0; j < n[i]; j++){
			scanf("%d", &temp);
			(*s)[i][j] = temp;
		}
		//快速排序
		Q_S((*s)[i], 0, n[i] - 1);
	}
	int count;
	count = Cmp_Equal_Ele(*s, m, n);
	if (count == 0){
		printf("No Common Elements!\n");
		return 0;
	}
	printf("Common Elements:\n");
	for (i = 0; i < count; i++){
		printf("%d ", (*s)[0][i]);
	}
	printf("\n");
	//system("pause");
}
