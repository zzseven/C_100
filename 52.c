#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

��52�� ��дһ������fun�����Ĺ����ǣ�
ʵ�������ַ���������(��ʹ�ÿ⺯��strcat)������p2��ָ���ַ������ӵ�p1��ָ���ַ�����
*/


void mystrcat(char *str1, char * tr2)
{
    int i;
    int len = strlen(str1);
    i = 0;
    while(*(tr2+i) != '\0')
    {
        *(str1+len+i) = *(tr2+i);
        i++;
    }
    *(str1+len+i) = '\0';

}

void main()
{
    printf("��52��\n\n  ��дһ������fun�����Ĺ����ǣ�ʵ�������ַ���������(��ʹ�ÿ⺯��strcat)������p2��ָ���ַ������ӵ�p1��ָ���ַ�����\n\n");
    char str1[100], str2[100];
    printf("Input string1: ");
    gets(str1);
    printf("Input string2: ");
    gets(str2);
    mystrcat(str1, str2);
    printf("\n\nOutput count: %s \n\n", str1);
}

