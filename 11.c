#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 10

/*
��11�� ���г�������n��n�Ķ�ά���飬�������������Զ���ֵ��
���д���� fun(int a[][n]),�ú����Ĺ����ǣ�
ʹ�������°�����Ԫ���е�ֵȫ���ó�0��

*/

void fun(int a[][n]);

void main()
{
    printf("��10��\n\n  ������n��n�Ķ�ά����,��дһ������fun(int a[][n]),�ú����Ĺ����ǣ�ʹ�������°�����Ԫ���е�ֵȫ���ó�0\n\n");
    int arr[n][n];
    int i,j;
    srand(time(NULL)); //����һ��ʱ��seed����Ϊrand()��α�����������һ����ÿ�����ɵ���Ҳһ��
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

void fun(int a[][n])  //���ݹ�ʽ����
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



