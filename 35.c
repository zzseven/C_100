#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��35�� ���дһ������������ɾ���ַ����е����пո�

*/


void fun(char * str, char let)   //�ѷ�ָ���ַ���ǰ��
{
    int i, j, len, count;
    i = j = 0;
    len = strlen(str);
    while(*(str+j)!='\0')
    {
        if(*(str+j)!= let)
        {
            *(str+i) = *(str+j);
            i++;
        }
        j++;
    }
    *(str+i) = '\0';

}

void main()
{
    printf("��35��\n\n  ���дһ������������ɾ���ַ����е����пո�  \n\n");

    char *str;
    str = (char*)malloc(100);
    char let;
    printf("Input string: ");
    gets(str);

    fun(str, ' ');
    printf("\nOutput: %s \n\n", str);

}
