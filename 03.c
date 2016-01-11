
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

void fun(int x,int pp[],int *n);


void main()
{
    printf("第3题\n\n  请编写函数void fun(int x,int pp[],int *n),它的功能是：求出能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，这些除数的个数通过形参n返回。\n");

    int i, x, * count, k = 0;
    count = &k;
    int pp[MAXSIZE];
    for(i=0; i<MAXSIZE; i++)
    {
        pp[MAXSIZE] = -1;
    }

    printf("\nPlease input X: ");
    scanf("%d", &x);

    fun(x, pp, count);  //传入count表示的那个地址

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
    *n = j;        //将j数值存入count表示的那个地址单元中
}
