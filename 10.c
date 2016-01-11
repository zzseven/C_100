#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
第10题 编写函数fun,它的功能是：利用以下的简单迭代方法求方程cos(x)-x=0
的一个实根。迭代步骤如下：
(1)取x1初值为0.0；
(2)x0=x1,把x1的值赋各x0;
(3)x1=cos(x0),求出一个新的x1;
(4)若x0-x1的绝对值小于0.000001，则执行步骤(5),否则执行步骤(2);
(5)所求x1就是方程cos(x)-x=0的一个实根，作为函数值返回。
程序将输出root=0.739085。

*/

float fun();

void main()
{
    printf("第10题\n\n  编写一个函数fun，它的功能是：利用以下的简单迭代方法求方程cos(x)-x=0的一个实根。\n\n");

    float result;
    result = fun();
    printf("\n\nroot = %f\n\n\n", result);


}

float fun()  //根据公式计算
{
    float x0, x1;
    x1 = 0.0;
    printf("Process: \n\n");
    do{
        x0 = x1;
        x1=cos(x0);
        printf("x0 = %f  ", x0);
        printf("x1 = %f\n", x1);

    }while((x0-x1) >= (1E-6) || (x1-x0) >= (1E-6));

    return x1;

}



