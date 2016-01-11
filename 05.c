#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
将大于整数m且紧靠m的k个素数存入xx所指的数组中.
**/


void fun(int m,int k,int xx[]);

void main()
{
    printf("第5题\n\n  请编写一个函数void fun(int m,int k,int xx[]),该函数的");
    printf("功能是：将大于整数m且紧靠m的个素数存入xx所指的数组中。\n\n");
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
        for(i=2; i<=g; i++)   //n不是素数，则n可表示为a*b，其中2<=a<=b<=n-1,则a，b中必有一个数满足：
        {                     //1<x<=sqrt(n)，因而，只需要用2~sqrt(n)去除n
            if(j%i==0)
                break;
        }
        if(i>g && (j!=1 && j>0))
        {
            xx[count++] = j;
        }
    }
}
