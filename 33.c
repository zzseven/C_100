#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第33题 假定输入的字符串中只包含字母和*号。
请编写函数fun，它的功能是：使字符串中尾部的*号不得多于n个；
若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做，字符串中间和前面的*号不删除。

*/

void fun(char *str, int n)
{
    int len, k;
    int i = 0;
    len = k = strlen(str);
    if(*(str+len-n-1) == '*')
    {
        while(*(str+len-n-1)=='*')
        {
            i++;
            len--;
        }
        *(str+ k-i) = '\0';
    }


}
void main()
{
    printf("第33题\n\n 假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串中尾部的*号不得多于n个；若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做，字符串中间和前面的*号不删除。 \n\n");
    char str[100];
    int n;
    printf("Input string:");
    gets(str);
    printf("Input n:");
    scanf("%d", &n);
    fun(str, n);
    printf("\nOutput:%s\n\n", str);
}
