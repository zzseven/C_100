#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

��45�� �ٶ�������ַ�����ֻ������ĸ��*�š�
���д����fun�����Ĺ����ǣ�ֻɾ���ַ���ǰ����β����*�ţ�
������ĸ֮���*�Ŷ���ɾ�����β�n �������ַ����ĳ��ȣ�
�β�h�������ַ�����ǰ��*�ŵĸ������β�e�������ַ���������*������
�ڱ�дʱ����ʹ��c���Ը��ṩ���ַ���������

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Isletter(char c)
{
    if('A'<= c && c <= 'Z' || 'a'<= c && c <= 'z' )
        return 1;
    else
        return 0;
}

void pretre(char *str,int n)      //ɾ��ͷβ
{
    int len = n-1;
    char * temp = (char*)malloc(100);
    int j,i;
    i = j = 0;
    while(!Isletter(*(str+i)))
        i++;
    while(!Isletter(*(str+len)))
        len--;
    len++;

    while(i!=len)
    {
        *(temp+j) = *(str+i);
        j++;
        i++;
    }
    *(temp+j) = '\0';
    *str = '\0';
    strcpy(str, temp);
}



void main()
{
    printf("��45��\n\n  �ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ�ֻɾ���ַ���ǰ����β����*�ţ�������ĸ֮���*�Ŷ���ɾ�����β�n �������ַ����ĳ��ȣ��β�h�������ַ�����ǰ��*�ŵĸ������β�e�������ַ���������*�������ڱ�дʱ����ʹ��c���Ը��ṩ���ַ���������\n\n");

    char *str;
    str = (char*)malloc(100);
    printf("Input:");
    gets(str);
    int n = strlen(str);
    pretre(str, n);
    printf("Output:%s", str);
    printf("\n\n");

}


