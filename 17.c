#include <stdio.h>
#include <stdlib.h>

/*
17. ��17�� ���дһ������fun(char *s)���ú����Ĺ���ʹ���ַ����е��������á�

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
    printf("��17��\n\n  ���дһ������fun(char *s)���ú����Ĺ���ʹ���ַ����е��������á� \n\n");

    char str[100];
    printf("Input h: ");
    gets(str);
    fun(str);
    printf("\nOutput : %s\n\n", str);

}
