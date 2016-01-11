#include <stdio.h>
#include <stdlib.h>

/*
第9题 编写一个函数fun，它的功能是：根据以下公式求p的值，
结果由函数值带回。M与n为两个正整数，且要求m>n。 p=m!/n!(m-n)!
*/
int factorial(int i);
float fun(int m, int n);

void main()
{
    printf("第9题\n\n  编写一个函数fun，它的功能是：根据以下公式求p的值，结果由函数值带回。M与n为两个正整数，且要求m>n。 p=m!/n!(m-n)! \n\n");

    int m, n;

    printf("Please input 'M': ");
    scanf("%d", &m);
    printf("Please input 'N': ");
    scanf("%d", &n);

    while(m<=n || (m<=0 || n<=0)) //条件审核：m>n 且都为正整数
    {
        printf("\nSorry, input error!\n\n");
        printf("Please input 'M': ");
        scanf("%d", &m);
        printf("Please input 'N': ");
        scanf("%d", &n);
    }

    float result;
    result = fun(m, n);
    printf("\nResult: %.2f\n\n", result);

}

float fun(int m, int n)  //根据公式计算
{
    return (factorial(m)*1.0)/(factorial(n)*(factorial(m-n)));
}

int factorial(int i)     //计算阶乘
{
    return (i==1 || i==0) ? 1 : i*factorial(i-1);
}
