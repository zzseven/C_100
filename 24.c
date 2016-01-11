#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
第24题 请编写一个函数fun，它的功能是：将一个字符串转换为一个整数(不得调用c语言提供的将字符串转换为整数的函数)。

*/

int fun(char *str)
{
    int integer, i, len, c;
    integer = i = 0;
    c = 1;
    len = strlen(str);
    for(i=len-1; i>=0; i--)
    {
        integer += (str[i]-'0') * c;
        c = c * 10;
    }

    return integer;
}


void main()
{
    printf("第24题\n\n  请编写一个函数fun，它的功能是：将一个字符串转换为一个整数(不得调用c语言提供的将字符串转换为整数的函数)。\n\n");
    char str[100];
    int i = 0;
    printf("Input: ");
    while(scanf("%c", &str[i]) && str[i]!='\n')
    {
        i++;
    }
    str[i] = '\0';
    printf("\nOutput: %d\n\n", fun(str));


}
