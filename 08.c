#include <stdio.h>
#include <stdlib.h>

/*
第8题 编写函数fun,功能是：根据以下攻
势计算s,计算结果作为函数值返回；n通过形
参传入。S=1+1/(1+2)+1/(1+2+3)+…….+1/(1+2+3+4+……+n)
*/

float fun(int n);

void main()
{
    printf("第8题\n\n  编写函数fun,功能是：根据以下攻势计算s,计算结果作为函数值返回；n通过形参传入。S=1+1/(1+2)+1/(1+2+3)+…….+1/(1+2+3+4+……+n) \n\n");
    printf("Please input 'N': ");
    int n;
    float result;
    scanf("%d", &n);
    result = fun(n);
    printf("\nResult: %.2f\n\n", result);

}

float fun(int n)
{
    int i, j;
    float result;
    i = j = 1;
    result = 0;
    while(j++<=n)
    {
        //printf(" %d ", i);
        result += 1.0/i;
        i += j;
    }

    return result;
}
