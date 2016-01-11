#include <stdio.h>
#include <stdlib.h>

/*

第29题 请编写一个函数fun，它的功能是：将ss所指字符串中所有下标为奇数位置
上的字母转换为大写(若该位置上不是字母，则不转换)。

*/

void fun(char *str)
{
    int i = 0;
    while(*(str+i)!='\0')
    {
        if(i%2==1)
        {
            if('a' <= *(str+i) && *(str+i) <= 'z')
                *(str+i) = *(str+i) - 32;
        }
        i++;
    }
}



void main()
{
    printf("第29题\n\n  请编写一个函数fun，它的功能是：将ss所指字符串中所有下标为奇数位置上的字母转换为大写(若该位置上不是字母，则不转换)。\n\n");
    char str[100];
    printf("Input:");
    gets(str);
    fun(str);
    printf("Output:");
    puts(str);

}
