#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 5

/*
��12�� ���г�������n��n�Ķ�ά���飬�����������и�ֵ��
���д����fun,�����Ĺ���ʹ��������ܱ�Ԫ�ص�ƽ��ֵ����
Ϊ����ֵ���ظ��������е�s��
*/

float fun(int a[][n]);

void main()
{
    printf("��12��\n\n  ���г�������n��n�Ķ�ά���飬�����������и�ֵ�����д����fun,�����Ĺ���ʹ��������ܱ�Ԫ�ص�ƽ��ֵ����Ϊ����ֵ���ظ��������е�s��\n\n");
    int arr[n][n];
    int i,j;
    float s;
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
    printf("\nAVERAGE: %.2f\n\n", s);

}

float fun(int a[][n])  //���ά�����ܱ�ƽ��ֵ
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



