#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
第20题 编写函数int fun(int lim,int aa[max]),
该函数的功能是求出小于或等于lim的所有素数并放在aa数组中，该函数返回所求的素数的个数。

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
        for(i=2; i<=g; i++)   //n不是素数，则n可表示为a*b，其中2<=a<=b<=n-1,则a，b中必有一个数满足：
        {                     //1<x<=sqrt(n)，因而，只需要用2~sqrt(n)去除n
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
    printf("第20题\n\n  编写函数int fun(int lim,int aa[max]),该函数的功能是求出小于或等于lim的所有素数并放在aa数组中，该函数返回所求的素数的个数。\n\n");

    int *aa;
    int lim;
    printf("Input lim : ");
    scanf("%d", &lim);

    aa = (int*)malloc(sizeof(int)*lim);

    printf("\n\nOutput count: %d \n\n", fun(lim, aa));




}
