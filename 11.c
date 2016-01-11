#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 10

/*
第11题 下列程序定义了n×n的二维数组，并在主函数中自动赋值。
请编写函数 fun(int a[][n]),该函数的功能是：
使数组左下半三角元素中的值全部置成0。

*/

void fun(int a[][n]);

void main()
{
    printf("第10题\n\n  定义了n×n的二维数组,编写一个函数fun(int a[][n]),该函数的功能是：使数组左下半三角元素中的值全部置成0\n\n");
    int arr[n][n];
    int i,j;
    srand(time(NULL)); //设置一个时间seed，因为rand()是伪随机数。种子一样，每次生成的数也一样
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            arr[i][j] = rand()%100+1;
            //arr[i][j] = random(100);
        }
    }

    printf("rand ARRAY: \n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%-3d ", arr[i][j]);
        }
        printf("\n");
    }

    fun(arr);

    printf("\nArrray after translation: \n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%-3d ", arr[i][j]);
        }
        printf("\n");
    }



}

void fun(int a[][n])  //根据公式计算
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0;j<i;j++)
        {
             a[i][j] = 0;
        }
    }

}



