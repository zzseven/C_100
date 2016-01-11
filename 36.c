#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第36题 假定输入的字符串中只包含字母和*号。
请编写函数fun，它的功能是：将字符串中的前导*号全部移到字符串的尾部。

*/


void fun(char * str)
{
    int i, j, k;
    i = j = k = 0;
    if(*(str+i) == '*')
    {
        while(*(str+i) == '*')
        {
            j++;
            i++;
        }
        while(*(str+i)!='\0')
        {
            *(str+k) = *(str+i);
            k++;
            i++;
        }
        while(j>0)
        {
            *(str+k) = '*';
            j--;
            k++;
        }
    }

}

void main()
{
    printf("第36题\n\n  假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：将字符串中的前导*号全部移到字符串的尾部。 \n\n");

    char *str;
    str = (char*)malloc(100);
    char let;
    printf("Input string: ");
    gets(str);

    fun(str);
    printf("\nOutput: %s \n\n", str);

}
