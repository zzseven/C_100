#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
��24�� ���дһ������fun�����Ĺ����ǣ���һ���ַ���ת��Ϊһ������(���õ���c�����ṩ�Ľ��ַ���ת��Ϊ�����ĺ���)��

*/

int fun(char *str)
{
    int integer, i, len, c;
    integer = i = 0;
    c = 1;
    len = strlen(str);
    for(i=len-1; i>=0; i--)
    {
        integer += (str[i]-'0') * c;
        c = c * 10;
    }

    return integer;
}


void main()
{
    printf("��24��\n\n  ���дһ������fun�����Ĺ����ǣ���һ���ַ���ת��Ϊһ������(���õ���c�����ṩ�Ľ��ַ���ת��Ϊ�����ĺ���)��\n\n");
    char str[100];
    int i = 0;
    printf("Input: ");
    while(scanf("%c", &str[i]) && str[i]!='\n')
    {
        i++;
    }
    str[i] = '\0';
    printf("\nOutput: %d\n\n", fun(str));


}
