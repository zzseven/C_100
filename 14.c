#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 5

/*
��14�� ���д����fun,�����Ĺ���ʹ�����ά�����ܱ�Ԫ��֮�ͣ���Ϊ����ֵ���ء�
��ά�����е�ֵ���������и��衣
*/

float fun(int a[][n]);

void main()
{
    printf("��14��\n\n  ���д����fun,�����Ĺ���ʹ�����ά�����ܱ�Ԫ��֮�ͣ���Ϊ����ֵ���ء���ά�����е�ֵ���������и��衣\n\n");
    int arr[n][n];
    int i,j;
    int s;
    srand(time(NULL)); //����һ��ʱ��seed����Ϊrand()��α�����������һ����ÿ�����ɵ���Ҳһ��
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

float fun(int a[][n])  //���ά�����ܱ�ƽ��ֵ
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



