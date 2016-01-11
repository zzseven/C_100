#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

/*
第7题 请编写一个函数int fun(int
*s,int *t,int *k),用来求出数组的最大元素
在数组中的下标并存放在k所指的储存单元中.

*/

void fun(int *s, int *t, int *k);
void main()
{
    printf("第7题\n\n  请编写一个函数int fun(int*s,int *t,int *k),用来求出数组的最大元素在数组中的下标并存放在k所指的储存单元中.\n\n");
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
    while(c != -9999)  ///当输入不是整型是便无法完成，待优化！！！
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




