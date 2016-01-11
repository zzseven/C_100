#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
第25题 请编写一个函数fun，它的功能是：比较两个字符串的长度，
(不得调用c语言提供的求字符串长度的函数)，函数返回较长的字符串。
若两个字符串长度相同，则返回第一个字符串。
*/

void fun(char *str1, char *str2)
{
    int len;
    len = 0;
    while(str1[len]!='\0'&& str2[len]!='\0')
    {
        len++;
    }
    if(str1[len] == '\0')
    {
        str2[len] == '\0' ? printf("str1'length = str2'length") : printf("%s", str2);
    }else
    {
        printf("%s", str1);
    }
}


void main()
{
    printf("第25题\n\n  请编写一个函数fun，它的功能是：比较两个字符串的长度，(不得调用c语言提供的求字符串长度的函数)，函数返回较长的字符串。若两个字符串长度相同，则返回第一个字符串。\n\n");
    char str1[100];
    char str2[100];
    int i = 0;
    printf("Input str1: ");
    while(scanf("%c", &str1[i]) && str1[i]!='\n')
    {
        i++;
    }
    str1[i] = '\0';
    printf("Input str2: ");
    gets(str2);

    printf("\nOutput: ");
    fun(str1, str2);

    printf("\n\n");


}
