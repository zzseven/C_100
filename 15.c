#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
��15�� ���дһ������unsigned fun(unsigned w),
w��һ������10���޷�����������w��n(n��2)λ��������
�������w��n��1λ������Ϊ����ֵ���ء�

*/

unsigned fun(unsigned w);

void main()
{
    printf("��15��\n\n  ���дһ������unsigned fun(unsigned w),w��һ������10���޷�����������w��n(n��2)λ���������������w��n��1λ������Ϊ����ֵ���ء�\n\n");
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
        c *= 10;        //����pow��������Ϊpow��10, 3)==99, �д���
    }
    return result;

}



