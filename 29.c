#include <stdio.h>
#include <stdlib.h>

/*

��29�� ���дһ������fun�����Ĺ����ǣ���ss��ָ�ַ����������±�Ϊ����λ��
�ϵ���ĸת��Ϊ��д(����λ���ϲ�����ĸ����ת��)��

*/

void fun(char *str)
{
    int i = 0;
    while(*(str+i)!='\0')
    {
        if(i%2==1)
        {
            if('a' <= *(str+i) && *(str+i) <= 'z')
                *(str+i) = *(str+i) - 32;
        }
        i++;
    }
}



void main()
{
    printf("��29��\n\n  ���дһ������fun�����Ĺ����ǣ���ss��ָ�ַ����������±�Ϊ����λ���ϵ���ĸת��Ϊ��д(����λ���ϲ�����ĸ����ת��)��\n\n");
    char str[100];
    printf("Input:");
    gets(str);
    fun(str);
    printf("Output:");
    puts(str);

}
