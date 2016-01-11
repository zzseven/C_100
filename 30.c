#include <stdio.h>
#include <stdlib.h>

/*

第30题 请编写一个函数fun，它的功能是：
求出一个2×m整型二维数组中最大元素的值，并将此值返回调用函数。

*/

int fun(int (*str)[5], int n)
{
    int i, j;

    int max = *str[0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(max < *(str[i]+j))
                max = *(str[i]+j);
        }
    }
    return max;

}



void main()
{
    printf("第30题\n\n  请编写一个函数fun，它的功能是：求除一个2×m整型二维数组中最大元素的值，并将此值返回调用函数。 \n\n");
    int str[2][5] = {{12, 33,54,22,55}, {99,192,3,1,44,21}};
    printf("Max: %d\n\n", fun(str, 2));
}
