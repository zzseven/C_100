#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
23: 第23题 请编写函数fun，该函数的功能是：判断字符串是否为回文?若是则函数返回1，
主函数中输出yes，否则返回0，主函数中输出no。回文是指顺读和倒读都是一样的字符串。

*/

int fun(char *str)
{
    int len, i, middle;
    len = strlen(str);
    middle = len/2;
    for(i=0; i<middle; )
    {
        if(str[i]==str[len-1])
        {
            i++;
            len--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}


void main()
{
    printf("第23题\n\n  请编写函数fun，该函数的功能是：判断字符串是否为回文?若是则函数返回1，主函数中输出yes，否则返回0，主函数中输出no。回文是指顺读和倒读都是一样的字符串。\n\n");
    char str[100];
    int i = 0;
    printf("INput: ");
    while(scanf("%c", &str[i]) && str[i]!='\n')
    {
        i++;
    }
    str[i] = '\0';
    printf("\nOutput: ");
    fun(str) ? printf(" Yes\n\n") : printf(" No\n\n");

}
