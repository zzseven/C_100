#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*

第47题 请编写一个函数void fun(char *ss)，其功能是：
将字符串ss中所有下标为奇数位置上的字母转换为大写(若位置上不是字母，则不转换)

*/



void fun(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(i%2 == 1)
        {
            if('a' <= str[i] && str[i] <= 'z')
                str[i] = str[i] -32;
        }
        i++;
    }
}



void main()
{
    printf("第47题\n\n  请编写一个函数void fun(char *ss)，其功能时：将字符串ss中所有下标为奇数位置上的字母转换为大写(若位置上不是字母，则不转换) \n\n");
    printf("Input: ");
    char str[100];
    gets(str);
    fun(str);
    printf("\n\nOutput: %s\n\n", str);
}

