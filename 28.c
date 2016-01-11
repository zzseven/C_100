#include <stdio.h>
#include <stdlib.h>

/*

第28题 请编写一个函数fun，它的功能是：找出一维整型数组元素中最大的值和它所在的下标，
最大的值和它所在的下标通过形参传回。数组元素中的值已在主函数中赋予。主函数中x是数组名，
n 是x中的数据个数，max存放最大值，index存放最大值所在元素的下标

*/

void fun(int *a, int n, int* max, int *flag)
{
    int i;
    int mm, ff;
    mm = a[0];
    ff = 0;
    for(i=1; i<n;i++)
    {
        if(mm < a[i])
        {
            mm = a[i];
            ff = i;
        }
    }
    *max = mm;
    *flag = ff+1;
}



void main()
{
    printf("第28题\n\n 请编写一个函数fun，它的功能是：找出一维整型数组元素中最大的值和它所在的下标，最大的值和它所在的下标通过形参传回。数组元素中的值已在主函数中赋予。主函数中x是数组名，n 是x中的数据个数，max存放最大值，index存放最大值所在元素的下标\n\n");
    int a[10] = {1,3,2,4,6,5,8,7,9,10};
    int max;
    int flag;
    fun(a, 10, &max, &flag);
    printf("Max: %d, Flag: %d\n\n", max, flag);
}
