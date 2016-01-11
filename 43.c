#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
第43题 编写一个函数，从传入的num个字符串中找出一个最长的一个字符串，
并通过形参指针max传回该串地址(用****作为结束输入的标志)。

*/

void fun(char* *str, char **max, int num)
{
    int len = 0;
    int i = 0;
    for(;i<num;i++)
    {
        if(len<(strlen(str[i])))
        {
            len = strlen(str[i]);
            *max = str[i];
        }
    }
}

void main()
{
    printf("第43题\n\n  编写一个函数，从传入的num个字符串中找出一个最长的一个字符串，并通过形参指针max传回该串地址(用****作为结束输入的标志)。\n\n");
    char* str[20];
    char *max;
    int i = 0;
    printf("Input: ");
    char *p;
    p = (char*)malloc(20);
    scanf("%s", p);
    while(strcmp(p,"****"))
    {
        str[i++]=p;
        p = (char*)malloc(20);
        scanf("%s", p);
    }
    fun(str, &max, i);
    printf("Output: %s\n\n", max);
    free(p);

}
