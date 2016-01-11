#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第38题 请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。

*/



int fun(char *str, char c )
{
    int i = 0;
    int count = 0;
    while(*(str+i)!='\0')
    {
        if(*(str+i)==c)
            count ++;
        i++;
    }
    return count;
}

void main()
{
    printf("第38题\n\n  请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。   \n\n");
    printf("Input string:");
    char str[100];
    gets(str);
    printf("Input c: ");
    char c;
    scanf("%c", &c);
    printf("Output: %d\n\n", fun(str, c));


}
