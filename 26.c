#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
26: 第26题 请编写一个函数fun，它的功能是：根据以下公式求x的值(要求满足精度0.0005，即某项小于0.0005时停止迭代)：
x/2=1+1/3+1×2/3×5+1×2×3/3×5×7+1×2×3×4/3×5×7×9+…+1×2×3×…×n/3×5×7×(2n+1)
程序运行后，如果输入精度0.0005，则程序输出为3.14…。
*/

float fun(float prec)
{
    float sum, u,d;
    sum = 0.0;
    u = d = 1.0;
    int i,j;
    i = 1;
    do{
        u = u*i;
        d = d*(2*i+1);
        sum += u/d;
        i++;
    }while((u/d) >= prec);
    return (sum+1)*2;
}

void main()
{
    printf("第26题\n\n  请编写一个函数fun，它的功能是：根据以下公式求x的值(要求满足精度0.0005，即某项小于0.0005时停止迭代)：x/2=1+1/3+1×2/3×5+1×2×3/3×5×7+1×2×3×4/3×5×7×9+…+1×2×3×…×n/3×5×7×(2n+1)程序运行后，如果输入精度0.0005，则程序输出为3.14…。 \n\n");
    float precision;
    int i = 0;
    printf("Input precision: ");
    scanf("%f", &precision);
    printf("\nOutput X: %.2f", fun(precision));
    printf("\n\n");
}
