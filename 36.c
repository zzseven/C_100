#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��36�� �ٶ�������ַ�����ֻ������ĸ��*�š�
���д����fun�����Ĺ����ǣ����ַ����е�ǰ��*��ȫ���Ƶ��ַ�����β����

*/


void fun(char * str)
{
    int i, j, k;
    i = j = k = 0;
    if(*(str+i) == '*')
    {
        while(*(str+i) == '*')
        {
            j++;
            i++;
        }
        while(*(str+i)!='\0')
        {
            *(str+k) = *(str+i);
            k++;
            i++;
        }
        while(j>0)
        {
            *(str+k) = '*';
            j--;
            k++;
        }
    }

}

void main()
{
    printf("��36��\n\n  �ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ����ַ����е�ǰ��*��ȫ���Ƶ��ַ�����β���� \n\n");

    char *str;
    str = (char*)malloc(100);
    char let;
    printf("Input string: ");
    gets(str);

    fun(str);
    printf("\nOutput: %s \n\n", str);

}
