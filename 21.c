#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
��21�� ���д����fun,�Գ���λ7���ַ����ַ���������β�ַ��⣬������5���ַ���ascii�뽵�����С�

*/


void fun(char * str)
{
    int i, j, len, loc;
    char p;
    len = strlen(str);
    for(i=1; i<len-1; i++)
    {
        p = str[i];
        loc = -1;
        for(j=i; j<len-1; j++)
        {
            if((p-str[j])<0)
            {
                p = str[j];
                loc = j;
            }
        }
        if(loc != -1)
        {
            str[loc] = str[i];
            str[i] = p;
        }
    }
}

void main()
{
    printf("��21��\n\n  ���д����fun,�Գ���λ7���ַ����ַ���������β�ַ��⣬������5���ַ���ascii�뽵�����С�\n\n");

    char str[]="abcdefg";
    printf("Input :  %s", str);
    fun(str);
    printf("\n\noutput :  %s\n\n", str);



}
