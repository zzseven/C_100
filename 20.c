#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
��20�� ��д����int fun(int lim,int aa[max]),
�ú����Ĺ��������С�ڻ����lim����������������aa�����У��ú�����������������ĸ�����

*/


int fun(int lim, int * aa)
{
    int i, j, g, count;
    j = 2;
    i = 0;
    count = 0;

    while(j<=lim)
    {
        g = (int)sqrt(j);
        for(i=2; i<=g; i++)   //n������������n�ɱ�ʾΪa*b������2<=a<=b<=n-1,��a��b�б���һ�������㣺
        {                     //1<x<=sqrt(n)�������ֻ��Ҫ��2~sqrt(n)ȥ��n
            if(j%i==0)
                break;
        }
        if(i>g && (j!=1 && j>0))
        {
            aa[count++] = j;
        }
        j++;

    }
    return count;

}

void main()
{
    printf("��20��\n\n  ��д����int fun(int lim,int aa[max]),�ú����Ĺ��������С�ڻ����lim����������������aa�����У��ú�����������������ĸ�����\n\n");

    int *aa;
    int lim;
    printf("Input lim : ");
    scanf("%d", &lim);

    aa = (int*)malloc(sizeof(int)*lim);

    printf("\n\nOutput count: %d \n\n", fun(lim, aa));




}
