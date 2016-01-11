#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第42题 下列程序定义了n×n的二维数组，并在主函数中自动赋值。
请编写函数fun(int a[][n],int n),该函数的功能是：将数组右上半三角元素中的值乘以m。

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
    printf("第42题\n\n  下列程序定义了n×n的二维数组，并在主函数中自动赋值。请编写函数fun(int a[][n],int n),该函数的功能是：将数组右上半三角元素中的值乘以m。   \n\n");

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
    printf("\nArray：\n\n");
    print(num, n);

    fun(num, n, m);

    printf("\n\nResult:\n\n");
    print(num, n);

    printf("\n\n");


}
