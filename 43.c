#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
��43�� ��дһ���������Ӵ����num���ַ������ҳ�һ�����һ���ַ�����
��ͨ���β�ָ��max���ظô���ַ(��****��Ϊ��������ı�־)��

*/

void fun(char* *str, char **max, int num)
{
    int len = 0;
    int i = 0;
    for(;i<num;i++)
    {
        if(len<(strlen(str[i])))
        {
            len = strlen(str[i]);
            *max = str[i];
        }
    }
}

void main()
{
    printf("��43��\n\n  ��дһ���������Ӵ����num���ַ������ҳ�һ�����һ���ַ�������ͨ���β�ָ��max���ظô���ַ(��****��Ϊ��������ı�־)��\n\n");
    char* str[20];
    char *max;
    int i = 0;
    printf("Input: ");
    char *p;
    p = (char*)malloc(20);
    scanf("%s", p);
    while(strcmp(p,"****"))
    {
        str[i++]=p;
        p = (char*)malloc(20);
        scanf("%s", p);
    }
    fun(str, &max, i);
    printf("Output: %s\n\n", max);
    free(p);

}
