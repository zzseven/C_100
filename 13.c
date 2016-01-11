#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define m 7
#define n 6


/*
第13题 请编写一个函数void fun(int tt[m][n],int pp[n]),
tt指向一个m行n列的二维函数组，求出二维函数组每列中最小元素，
并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。

*/

void fun(int tt[][n],int pp[]);

void main()
{
    printf("第13题\n\n  请编写一个函数void fun(int tt[m][n],int pp[n]),tt指向一个m行n列的二维函数组，求出二维函数组每列中最小元素，并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。\n\n");
    int arr[m][n];
    int p[n];
    int i,j;
    srand(time(NULL)); //设置一个时间seed，因为rand()是伪随机数。种子一样，每次生成的数也一样
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            arr[i][j] = rand()%100+1;
            //arr[i][j] = random(100);
        }
    }

    printf("Rand array: \n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%-3d ", arr[i][j]);
        }
        printf("\n");
    }

    fun(arr, p);

    printf("\n\nP: ");
    for(i=0; i<n; i++)
    {
        printf("%3d ", p[i]);
    }
    printf("\n\n");
}

void fun(int tt[][n],int pp[])
{
    int i, j;
    for(j=0; j<n; j++)
    {
        pp[j] = tt[0][j];
        for(i=0;i<m;i++)
        {
            if(pp[j] < tt[i][j])
                pp[j] = tt[i][j];
        }
    }
}



