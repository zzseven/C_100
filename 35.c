#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第35题 请编写一个函数，用来删除字符串中的所有空格。

*/


void fun(char * str, char let)   //把非指定字符往前放
{
    int i, j, len, count;
    i = j = 0;
    len = strlen(str);
    while(*(str+j)!='\0')
    {
        if(*(str+j)!= let)
        {
            *(str+i) = *(str+j);
            i++;
        }
        j++;
    }
    *(str+i) = '\0';

}

void main()
{
    printf("第35题\n\n  请编写一个函数，用来删除字符串中的所有空格。  \n\n");

    char *str;
    str = (char*)malloc(100);
    char let;
    printf("Input string: ");
    gets(str);

    fun(str, ' ');
    printf("\nOutput: %s \n\n", str);

}
