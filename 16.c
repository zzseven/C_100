#include <stdio.h>
#include <stdlib.h>

/*
16: ��16�� ���дһ������float fun(double h),
�����Ĺ���ʹ�Ա���h�е�ֵ����2λС����
���Ե���λ������������(�涨h�е�ֵλ����)��

*/



float fun(double h);

void main()
{
    printf("��16��\n\n  ���дһ������float fun(double h),�����Ĺ���ʹ�Ա���h�е�ֵ����2λС�������Ե���λ������������(�涨h�е�ֵλ����)��\n");
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
