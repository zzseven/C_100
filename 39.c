#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第39题 请编写函数fun，该函数的功能是：移动一维数组中的内容，若数组中由n个整数，
要求把下标从0到p(p小于等于n－1)的数组元素平移到数组的最后。
*/

void print(int *num, int n)
{
    int i = 0;
    while(i<n)
        printf("%d ", num[i++]);
}

void convert(int *num, int p1, int p2)   //对数组进行指定长度翻转
{
    int temp;
    int middle = (p1 + p2) / 2;
    while(p1<middle)
    {
        temp = num[p1];
        num[p1] = num[p2];
        num[p2] = temp;
        p1++;
        p2--;
    }
}

void fun(int *num, int n, int p)
{
    convert(num, 0, n-1);
    convert(num, 0, n-p-1);
    convert(num,n-p, n-1);
}

void main()
{
    printf("第39题\n\n  请编写函数fun，该函数的功能是：移动一维数组中的内容，若数组中由n个整数，要求把下标从0到p(p小于等于n－1)的数组元素平移到数组的最后。   \n\n");
    printf("Num：");
    int num[10]={1,2,4,5,6,7,8,9,10,11};
    print(num, 10);
    printf("\nInput p: ");
    int p;
    scanf("%d", &p);
    fun(num, 10, p);
    printf("Output：");
    print(num, 10);
    printf("\n\n");


}
