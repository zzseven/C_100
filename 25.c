#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
��25�� ���дһ������fun�����Ĺ����ǣ��Ƚ������ַ����ĳ��ȣ�
(���õ���c�����ṩ�����ַ������ȵĺ���)���������ؽϳ����ַ�����
�������ַ���������ͬ���򷵻ص�һ���ַ�����
*/

void fun(char *str1, char *str2)
{
    int len;
    len = 0;
    while(str1[len]!='\0'&& str2[len]!='\0')
    {
        len++;
    }
    if(str1[len] == '\0')
    {
        str2[len] == '\0' ? printf("str1'length = str2'length") : printf("%s", str2);
    }else
    {
        printf("%s", str1);
    }
}


void main()
{
    printf("��25��\n\n  ���дһ������fun�����Ĺ����ǣ��Ƚ������ַ����ĳ��ȣ�(���õ���c�����ṩ�����ַ������ȵĺ���)���������ؽϳ����ַ������������ַ���������ͬ���򷵻ص�һ���ַ�����\n\n");
    char str1[100];
    char str2[100];
    int i = 0;
    printf("Input str1: ");
    while(scanf("%c", &str1[i]) && str1[i]!='\n')
    {
        i++;
    }
    str1[i] = '\0';
    printf("Input str2: ");
    gets(str2);

    printf("\nOutput: ");
    fun(str1, str2);

    printf("\n\n");


}
