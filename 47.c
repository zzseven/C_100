#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*

��47�� ���дһ������void fun(char *ss)���书���ǣ�
���ַ���ss�������±�Ϊ����λ���ϵ���ĸת��Ϊ��д(��λ���ϲ�����ĸ����ת��)

*/



void fun(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(i%2 == 1)
        {
            if('a' <= str[i] && str[i] <= 'z')
                str[i] = str[i] -32;
        }
        i++;
    }
}



void main()
{
    printf("��47��\n\n  ���дһ������void fun(char *ss)���书��ʱ�����ַ���ss�������±�Ϊ����λ���ϵ���ĸת��Ϊ��д(��λ���ϲ�����ĸ����ת��) \n\n");
    printf("Input: ");
    char str[100];
    gets(str);
    fun(str);
    printf("\n\nOutput: %s\n\n", str);
}

