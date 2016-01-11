#include <stdio.h>
#include <stdlib.h>

/*
17. 第17题 请编写一个函数fun(char *s)，该函数的功能使把字符串中的内容拟置。

*/

void fun(char *s)
{
    char ch;
    int i,m,n;
    i=0;
    m=n=strlen(s)-1;
    while(i < (n+1)/2)
    {
        ch=s[i];
        s[i]=s[m];
        s[m]=ch;
        i++;
        m--;
    }
}


void main()
{
    printf("第17题\n\n  请编写一个函数fun(char *s)，该函数的功能使把字符串中的内容拟置。 \n\n");

    char str[100];
    printf("Input h: ");
    gets(str);
    fun(str);
    printf("\nOutput : %s\n\n", str);

}
