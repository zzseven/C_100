#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

/*
��7�� ���дһ������int fun(int
*s,int *t,int *k),���������������Ԫ��
�������е��±겢�����k��ָ�Ĵ��浥Ԫ��.

*/

void fun(int *s, int *t, int *k);
void main()
{
    printf("��7��\n\n  ���дһ������int fun(int*s,int *t,int *k),���������������Ԫ���������е��±겢�����k��ָ�Ĵ��浥Ԫ��.\n\n");
    int i, j, k, ss[MAXSIZE], *tt, *kk, c;
    j = k = 0;
    tt = &j;
    kk = &k;
    for(i=0; i<MAXSIZE; i++)
    {
        ss[i] = -9999;
    }

    printf("Please input numbers ended by '-9999':  ");

    i = 0;
    scanf("%d", &c);
    while(c != -9999)  ///�����벻�������Ǳ��޷���ɣ����Ż�������
    {
        ss[i++] = c;
        scanf("%d", &c);
    }

    fun(ss, tt, kk);
    printf("\nMAX: %d\n\nMAX's Location: %d \n\n", *tt, *kk);


}

void fun(int * s, int * t, int * k)
{
    int i, max;
    *t = s[0];
    *k = 0;
    for(i=0; i<MAXSIZE; i++)
    {
        if(*t < s[i])
        {
            *t = s[i];
            *k = i;
        }
    }
}




