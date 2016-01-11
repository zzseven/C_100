#include <stdio.h>
#include <stdlib.h>

/*

27: 第27题 请编写一个函数fun,它的功能是：求除1到m之内(含m)能北7或11整除的所有整数放在数组a中，通过n返回这些数的个数。

*/


void main()
{
    printf("第27题\n\n  请编写一个函数fun,它的功能是：求除1到m之内(含m)能北7或11整除的所有整数放在数组a中，通过n返回这些数的个数。\n\n");

    int * object;
    int i, j, count = 0;

    for(i=1; i<=100; i++)
    {
        if(i%7==0 || i%11==0)
        {

            i++;
            count++;     //问题：是两遍执行for还是，建一个数组保存数据，然后在复制到动态数组中开销更大?
        }
    }

    object = (int *)malloc(sizeof(int) * count);
    j = 0;
    for(i=1; i<=100; i++)
    {
        if(i%7==0 || i%11==0)
        {
            object[j++] = i;
        }
    }

    printf("\n\nAll:  ");
    for(i=0; i<j; i++)
    {
        printf("%d ", object[i]);
    }

    printf("\n\ncount: %d  \n",j);

}
