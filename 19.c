#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
19: ��19�� ��д����fun,�ú����Ĺ����ǣ����ַ���ɾ��ָ�����ַ���ͬһ��ĸ�Ĵ�Сд����ͬ�ַ�����

*/


void fun(char * str, char let)
{
    int i, j, len, count;
    i = j = 0;
    len = strlen(str);
    while( str[j]!='\0')
    {
        if(str[j]!= let)
            str[i++] = str[j];
        j++;
    }
    str[i] = '\0';

}

void main()
{
    printf("��19��\n\n  ��д����fun,�ú����Ĺ����ǣ����ַ���ɾ��ָ�����ַ���ͬһ��ĸ�Ĵ�Сд����ͬ�ַ�����\n\n");

    char str[100];
    char let;
    printf("Input string: ");
    gets(str);
    printf("\nInput char: ");
    scanf(" %c", &let);
    fun(str, let);
    printf("\nOutput: %s \n\n", str);




}
