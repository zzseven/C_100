#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
��10�� ��д����fun,���Ĺ����ǣ��������µļ򵥵��������󷽳�cos(x)-x=0
��һ��ʵ���������������£�
(1)ȡx1��ֵΪ0.0��
(2)x0=x1,��x1��ֵ����x0;
(3)x1=cos(x0),���һ���µ�x1;
(4)��x0-x1�ľ���ֵС��0.000001����ִ�в���(5),����ִ�в���(2);
(5)����x1���Ƿ���cos(x)-x=0��һ��ʵ������Ϊ����ֵ���ء�
�������root=0.739085��

*/

float fun();

void main()
{
    printf("��10��\n\n  ��дһ������fun�����Ĺ����ǣ��������µļ򵥵��������󷽳�cos(x)-x=0��һ��ʵ����\n\n");

    float result;
    result = fun();
    printf("\n\nroot = %f\n\n\n", result);


}

float fun()  //���ݹ�ʽ����
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



