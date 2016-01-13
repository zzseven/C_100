#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

第52题 编写一个函数fun，它的功能是：
实现两个字符串的连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。
*/


void mystrcat(char *str1, char * tr2)
{
    int i;
    int len = strlen(str1);
    i = 0;
    while(*(tr2+i) != '\0')
    {
        *(str1+len+i) = *(tr2+i);
        i++;
    }
    *(str1+len+i) = '\0';

}

void main()
{
    printf("第52题\n\n  编写一个函数fun，它的功能是：实现两个字符串的连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。\n\n");
    char str1[100], str2[100];
    printf("Input string1: ");
    gets(str1);
    printf("Input string2: ");
    gets(str2);
    mystrcat(str1, str2);
    printf("\n\nOutput count: %s \n\n", str1);
}

