
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

void fun(int x,int pp[],int *n);


void main()
{
    printf("��3��\n\n  ���д����void fun(int x,int pp[],int *n),���Ĺ����ǣ����������x�Ҳ���ż���ĸ�������������С�����˳�����pp��ָ�������У���Щ�����ĸ���ͨ���β�n���ء�\n");

    int i, x, * count, k = 0;
    count = &k;
    int pp[MAXSIZE];
    for(i=0; i<MAXSIZE; i++)
    {
        pp[MAXSIZE] = -1;
    }

    printf("\nPlease input X: ");
    scanf("%d", &x);

    fun(x, pp, count);  //����count��ʾ���Ǹ���ַ

    printf("count: %d\n\n", *count);


}

void fun(int x, int pp[], int * n)
{
    int i, j;
    j = 0;
    printf("\nALL: ");
    for(i=0; i<MAXSIZE; i++)
    {
        if(i%x==0 && i%2!=0)
        {
            printf("%d ", i);
            pp[j++] = i;
        }

    }
    if(j == 0)
    {
        printf(" NULL");

    }
    printf("\n\n");
    *n = j;        //��j��ֵ����count��ʾ���Ǹ���ַ��Ԫ��
}
