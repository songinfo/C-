#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

 void str_reverse(char* src, int begin, int end)
{
	char tmp ;
	while(begin < end)
	{
		tmp = src[begin] ;
		src[begin] = src[end] ;
		src[end] = tmp ;
		begin ++ ;
		end -- ;
	}
}
void words_reverse(char* str)
{
	
	int index_head, index_tail ;
	int cnt = 0 ;

	str_reverse(str, 0, strlen(str) - 1);
	index_head = 0 ;
	while(str[index_head] != '\0')
	{
		//find begin
		for(;str[index_head] !=  '\0';index_head ++)
		{
			if(isalpha(str[index_head] )&&(index_head - 1 != -1 && str[index_head - 1] == ' ' || index_head - 1 == -1))
			{
				break ;
			}
		}
		if(str[index_head] == '\0')
		{
			break ;
		}
		index_tail = index_head  ;
		while(isalpha(str[index_tail]))
		{
			index_tail ++ ;
		}
		cnt++ ;
		str_reverse(str, index_head,index_tail - 1);
		index_head = index_tail ;

	}
}


	
int main()
{
    char str[]="you are a student";
    printf(str);
    printf("\n");
	
	words_reverse(str);

	printf(str);

	
	return 0;

}
