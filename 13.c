#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define m 7
#define n 6


/*
��13�� ���дһ������void fun(int tt[m][n],int pp[n]),
ttָ��һ��m��n�еĶ�ά�����飬�����ά������ÿ������СԪ�أ�
�����η���pp��ָ��һά�����С���ά�����е��������������и��衣

*/

void fun(int tt[][n],int pp[]);

void main()
{
    printf("��13��\n\n  ���дһ������void fun(int tt[m][n],int pp[n]),ttָ��һ��m��n�еĶ�ά�����飬�����ά������ÿ������СԪ�أ������η���pp��ָ��һά�����С���ά�����е��������������и��衣\n\n");
    int arr[m][n];
    int p[n];
    int i,j;
    srand(time(NULL)); //����һ��ʱ��seed����Ϊrand()��α�����������һ����ÿ�����ɵ���Ҳһ��
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



