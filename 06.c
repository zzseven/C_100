#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*第6题 请编写一个函数void fun(char a[],char b[],int n),
其功能是：删除一个字符串中指定下标的字符。其中，a指向原字符串，
删除后的字符串存放在b所指的数组中，n中存放指定的下标。*/

char * getstr();
void fun(char a[], char b[], int n);

void main()
{
    printf("第6题\n\n  请编写一个函数void fun(char a[],char b[],int n),其功能是：删除一个字符串中指定下标的字符。其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。\n\n");
    int n;
    printf("Please input a string: ");
    char * string;
    string = getstr();
    printf("\nPlease input n: ");
    scanf("%d", &n);
    char b[1];
    fun(string, b, n);
    printf("\nNew string: %s", string);

    printf("\n\n");

}

void fun(char a[], char b[], int n)
{
    int i;
    i = 0;
    while(i!=n)
    {
        i++;
    }
    b[0] = a[n];
    for(; i<strlen(a)-1; i++)
    {
        a[i] = a[i+1];
    }
    a[i] = '\0';
}

char * getstr()    //动态获取字符串
{
    char* str;
    char* _str;
    int i = 1;
    str = (char*)malloc(sizeof(char) * (i + 1));
    //while((str[i-1] = getchar()) != '\n')
    while('\n' != (str[i-1] = getchar()))
    {
         i++;
         _str = (char*)malloc(strlen(str) + 1);
         str[i-1] = '\0';
         strcpy(_str, str);
         free(str);

         str = (char*)malloc(sizeof(char) * (i+1));
         if(str == NULL)
         {
             free(_str);
             printf("No enough memory!");
             return NULL;
         }
         strcpy(str, _str);
         free(_str);

    }
    str[i-1] = '\0';
    return str;

}



