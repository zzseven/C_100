#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 5

/*
第12题 下列程序定义了n×n的二维数组，并在主函数中赋值。
请编写函数fun,函数的功能使求出数组周边元素的平均值并作
为函数值返回给主函数中的s。
*/

float fun(int a[][n]);

void main()
{
    printf("第12题\n\n  下列程序定义了n×n的二维数组，并在主函数中赋值。请编写函数fun,函数的功能使求出数组周边元素的平均值并作为函数值返回给主函数中的s。\n\n");
    int arr[n][n];
    int i,j;
    float s;
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
    printf("\nAVERAGE: %.2f\n\n", s);

}

float fun(int a[][n])  //算二维数组周边平均值
{
    int i, j;
    int count, num;
    count = num = 0;
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            if((i == 0) || (i == n-1))
            {
                count += a[i][j];
                num++;
            }
            else if((j == 0) || (j == n-1))
            {
                count += a[i][j];
                num++;
            }
        }
    }
    return count * 1.0 / num;
}



