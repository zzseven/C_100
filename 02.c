#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("第2题\n\n");
    printf("  请编写函数fun，它的功能是：求出1到100之内能北7或者11整除，但不能同时北7和11整除的所有整数，并将他们放在a所指的数组中，通过n返回这些数的个数。 ");

    int * object;
    int i, j, count = 0;

    for(i=1; i<=100; i++)
    {
        if(i%7==0 || i%11==0)
        {
            if(i%7==0&& i%11==0)
            {
                i++;
            }
            else
            {
                count++;     //问题：是两遍执行for还是，建一个数组保存数据，然后在复制到动态数组中开销更大?
            }

        }

    }


    object = (int *)malloc(sizeof(int) * count);
    j = 0;
    for(i=1; i<=100; i++)
    {
        if(i%7==0 || i%11==0)
        {
            if(i%7==0 && i%11==0)
            {
                i++;
            }
            else
            {
                object[j++] = i;
            }

        }

    }

    printf("\n\nAll:  ");
    for(i=0; i<j; i++)
    {
        printf("%d ", object[i]);
    }

    printf("\n\ncount: %d  \n",j);

}
