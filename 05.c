#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
����������m�ҽ���m��k����������xx��ָ��������.
**/


void fun(int m,int k,int xx[]);

void main()
{
    printf("��5��\n\n  ���дһ������void fun(int m,int k,int xx[]),�ú�����");
    printf("�����ǣ�����������m�ҽ���m�ĸ���������xx��ָ�������С�\n\n");
    int m, k, i, *xx;
    printf("Please input M: ");
    scanf("%d", &m);
    printf("\nPlease intut K: ");
    scanf("%d", &k);

    xx = (int *)malloc(sizeof(int) * k);
    fun(m, k, xx);

    printf("\nALL:  ");
    for(i=0; i<k; i++)
    {
        printf("%d  ", xx[i]);
    }
    printf("\n\n\n  ");
}

void fun(int m,int k,int xx[])
{
    int i, j, g, count;
    count = 0;
    j = m;
    while(count != k)
    {
        j++;
        g = (int)sqrt(j);
        for(i=2; i<=g; i++)   //n������������n�ɱ�ʾΪa*b������2<=a<=b<=n-1,��a��b�б���һ�������㣺
        {                     //1<x<=sqrt(n)�������ֻ��Ҫ��2~sqrt(n)ȥ��n
            if(j%i==0)
                break;
        }
        if(i>g && (j!=1 && j>0))
        {
            xx[count++] = j;
        }
    }
}
