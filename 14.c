#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 5

/*
第14题 请别写函数fun,函数的功能使求出二维数组周边元素之和，作为函数值返回。
二维数组中的值在主函数中赋予。
*/

float fun(int a[][n]);

void main()
{
    printf("第14题\n\n  请别写函数fun,函数的功能使求出二维数组周边元素之和，作为函数值返回。二维数组中的值在主函数中赋予。\n\n");
    int arr[n][n];
    int i,j;
    int s;
    srand(time(NULL)); //设置一个时间seed，因为rand()是伪随机数。种子一样，每次生成的数也一样
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            arr[i][j] = rand()%10+1;
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

    s = fun(arr);
    printf("\nSum of edge: %d\n\n", s);

//    printf("\nArrray after translation: \n\n");
//    for(i=0; i<n; i++)
//    {
//        for(j=0; j<n; j++)
//        {
//            printf("%-3d ", arr[i][j]);
//        }
//        printf("\n");
//    }



}

float fun(int a[][n])  //算二维数组周边平均值
{
    int i, j;
    int count;
    count = 0;
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            if((i == 0) || (i == n-1))
            {
                count += a[i][j];
            }
            else if((j == 0) || (j == n-1))
            {
                count += a[i][j];
            }
        }
    }
    return count;
}



