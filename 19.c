#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
19: 第19题 编写函数fun,该函数的功能是：从字符中删除指定的字符，同一字母的大、小写按不同字符处理

*/


void fun(char * str, char let)
{
    int i, j, len, count;
    i = j = 0;
    len = strlen(str);
    while( str[j]!='\0')
    {
        if(str[j]!= let)
            str[i++] = str[j];
        j++;
    }
    str[i] = '\0';

}

void main()
{
    printf("第19题\n\n  编写函数fun,该函数的功能是：从字符中删除指定的字符，同一字母的大、小写按不同字符处理\n\n");

    char str[100];
    char let;
    printf("Input string: ");
    gets(str);
    printf("\nInput char: ");
    scanf(" %c", &let);
    fun(str, let);
    printf("\nOutput: %s \n\n", str);




}
