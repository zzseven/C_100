#include <stdio.h>
#include <stdlib.h>

/*
16: 第16题 请编写一个函数float fun(double h),
函数的功能使对变量h中的值保留2位小数，
并对第三位进行四舍五入(规定h中的值位正数)。

*/



float fun(double h);

void main()
{
    printf("第16题\n\n  请编写一个函数float fun(double h),函数的功能使对变量h中的值保留2位小数，并对第三位进行四舍五入(规定h中的值位正数)。\n");
    float h;
    printf("\nInput h: ");
    scanf("%f", &h);
    printf("\nOutput :  %.2f\n\n", fun(h));

}

float fun(double h)
{
    h = (int)(h*100+0.5)/100.0;
    return h;

}
