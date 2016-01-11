#include <stdio.h>
#include <stdlib.h>

/*

第52题 编写一#include <stdio.h>
#include <stdlib.h>

/*

第51题 请编写函数fun，其功能是：将所有大于1小于整数m的非素数存入xx所指的数组中，非素数的个数通过k传回
*/


int fun(int lim, int * aa)
{
    int i, j, g, count;
    j = 2;
    i = 0;
    count = 0;

    while(j<=lim)
    {
        g = (int)sqrt(j);
        for(i=2; i<=g; i++)   //n不是素数，则n可表示为a*b，其中2<=a<=b<=n-1,则a，b中必有一个数满足：
        {                     //1<x<=sqrt(n)，因而，只需要用2~sqrt(n)去除n
            if(j%i==0)
            {
                aa[count++] = j;
                break;
            }

        }
        if(i>g && (j!=1 && j>0))
        {

        }
        j++;

    }
    return count;

}

void main()
{
    printf("第51题\n\n  请编写函数fun，其功能是：将所有大于1小于整数m的非素数存入xx所指的数组中，非素数的个数通过k传回\n\n");

    int *aa;
    int lim;
    printf("Input m: ");
    scanf("%d", &lim);

    aa = (int*)malloc(sizeof(int)*lim);

    printf("\n\nOutput count: %d \n\n", fun(lim, aa));




}

个函数fun，它的功能是：
实现两个字符串的连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。
*/


void mystrcat(char *str1, char * tr2)
{
    *(str1+strlen(str1)) = *tr2;
}

void main()
{
    printf("第52题 编写一个函数fun，它的功能是：实现两个字符串的连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。\n\n");
    char str1[100], str2[100];
    printf("Input string1: ");
    gets(str1);
    printf("Input string2: ");
    gets(str2);
    mystrcat(str1, str2);
    printf("\n\nOutput count: %s \n\n", str1);
}

