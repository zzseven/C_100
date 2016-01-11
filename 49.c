#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第49题 请编写函数fun，其功能是：将s所指字符串中除了下标为偶数、
同时ascii值也为奇数的字符外，其余的全都删除；串中剩余字符所形成的一个新串放在t所指的一个数组中。

*/

void fun(char *str)
{
    char *temp;
    temp = (char*)malloc(100);
    memset(temp, 0, strlen(temp));

    int i, j,k;
    i = j = k = 0;
    while(str[i]!='\0')
    {
        if(i%2==0 && str[i]%2==1)
        {
            temp[j] = str[i];
            j++;
        }
        i++;
    }
    temp[j] = '\0';
    *str = '\0';
    strcpy(str, temp);

}
void main()
{
    printf("第49题\n\n 请编写函数fun，其功能是：将s所指字符串中除了下标为偶数、同时ascii值也为奇数的字符外，其余的全都删除；串中剩余字符所形成的一个新串放在t所指的一个数组中。\n\n");
    char str[100];
    printf("Input:");
    gets(str);
    fun(str);
    printf("\nOutput:%s\n\n", str);
}
