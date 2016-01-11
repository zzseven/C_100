#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
第15题 请编写一个函数unsigned fun(unsigned w),
w是一个大于10的无符号整数，若w是n(n≥2)位的整数，
则函数求出w后n－1位的数作为函数值返回。

*/

unsigned fun(unsigned w);

void main()
{
    printf("第15题\n\n  请编写一个函数unsigned fun(unsigned w),w是一个大于10的无符号整数，若w是n(n≥2)位的整数，则函数求出w后n－1位的数作为函数值返回。\n\n");
    unsigned w;
    int i;
    printf("Please input 'W':");
    scanf("%u", &w);
    while(w<=10)
    {
        printf("\nInput error!\n");
        printf("Please input 'W':");
        scanf("%u", &w);
    }
    printf("\n'W': %u\n", w);
    printf("\nResult: %u\n", fun(w));

}

unsigned fun(unsigned w)
{
    int i, count, c;
    count = 0;
    c = 1;
    unsigned result = 0;
    int s[12];
    while((w % 10) != 0 && (s[count++]=(w % 10)))
    {
        if(w % 10 == 0)
        {
            break;
        }
        w = w /10;
    }
    for(i=0; i<count-1; i++)
    {
        result += (int)s[i] * c;
        c *= 10;        //不用pow函数是因为pow（10, 3)==99, 有错误！
    }
    return result;

}



