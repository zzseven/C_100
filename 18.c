#include <stdio.h>
#include <stdlib.h>

/*
18. 第18题 编写程序，实现矩阵(3行3列)的转置(即行列互换)。

*/


void main()
{
    printf("第18题\n\n  编写程序，实现矩阵(3行3列)的转置(即行列互换)。\n\n");
    int i, j, tmp;
    char str[3][3] = { 1, 2, 3,
                       4, 5, 6,
                       7, 8, 9,
                      };
    printf("Matrix : \n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ", str[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=i; j<3; j++)
        {
            tmp = str[i][j];
            str[i][j] = str[j][i];
            str[j][i] = tmp;
        }
    }

    printf("\n\nOuput : \n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ", str[i][j]);
        }
        printf("\n");
    }


}
