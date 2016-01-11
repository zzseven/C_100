#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��42�� ���г�������n��n�Ķ�ά���飬�������������Զ���ֵ��
���д����fun(int a[][n],int n),�ú����Ĺ����ǣ����������ϰ�����Ԫ���е�ֵ����m��

*/


void print(int (*num)[10], int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%2d ", *(*(num+i)+j));

        }
        printf("\n");
    }
}

void fun(int (*num)[10], int n, int m)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
             *(*(num+i)+j) *= m;
        }
    }
}

void main()
{
    printf("��42��\n\n  ���г�������n��n�Ķ�ά���飬�������������Զ���ֵ�����д����fun(int a[][n],int n),�ú����Ĺ����ǣ����������ϰ�����Ԫ���е�ֵ����m��   \n\n");

    printf("Input N: ");
    int n;
    scanf("%d", &n);
    printf("Input M: ");
    int m;
    scanf("%d", &m);

    int (*num)[10];
    int i,j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            *(*(num+i)+j) = i + 1;
        }
    }
    printf("\nArray��\n\n");
    print(num, n);

    fun(num, n, m);

    printf("\n\nResult:\n\n");
    print(num, n);

    printf("\n\n");


}
