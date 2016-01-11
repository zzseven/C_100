#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第41题 请编写函数fun，该函数的功能是：将m行n列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。

*/



void fun(char (*str)[3], char * str1, int m, int n)
{
    int i, j, k;
    i = j = k =  0;
    for(j=0; j<n; j++)
    {
        for(i=0; i<m; i++)
        {
            *(str1+k) = *(*(str+i)+j);
            k++;
        }
    }
}

void main()
{
    printf("第41题\n\n  请编写函数fun，该函数的功能是：将m行n列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。  \n\n");

    char str[3][3]= { {'a', 'b', 'c'}, {'e', 'f', 'g'}, {'h', 'i', 'j'}};
    char str1[100];
    memset(str1, 0, 100);
    fun(str, str1, 3, 3);
    printf("\nOutput：");
    puts(str1);
    printf("\n\n");


}
