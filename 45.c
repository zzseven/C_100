#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

第45题 假定输入的字符串中只包含字母和*号。
请编写函数fun，它的功能是：只删除字符串前导和尾部的*号，
串中字母之间的*号都不删除。形参n 给出了字符串的长度，
形参h给出了字符串中前导*号的个数，形参e给出了字符串中最后的*个数。
在编写时不得使用c语言给提供得字符串函数。

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Isletter(char c)
{
    if('A'<= c && c <= 'Z' || 'a'<= c && c <= 'z' )
        return 1;
    else
        return 0;
}

void pretre(char *str,int n)      //删除头尾
{
    int len = n-1;
    char * temp = (char*)malloc(100);
    int j,i;
    i = j = 0;
    while(!Isletter(*(str+i)))
        i++;
    while(!Isletter(*(str+len)))
        len--;
    len++;

    while(i!=len)
    {
        *(temp+j) = *(str+i);
        j++;
        i++;
    }
    *(temp+j) = '\0';
    *str = '\0';
    strcpy(str, temp);
}



void main()
{
    printf("第45题\n\n  假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：只删除字符串前导和尾部的*号，串中字母之间的*号都不删除。形参n 给出了字符串的长度，形参h给出了字符串中前导*号的个数，形参e给出了字符串中最后的*个数。在编写时不得使用c语言给提供得字符串函数。\n\n");

    char *str;
    str = (char*)malloc(100);
    printf("Input:");
    gets(str);
    int n = strlen(str);
    pretre(str, n);
    printf("Output:%s", str);
    printf("\n\n");

}


