#include <stdio.h>
#include <stdlib.h>

/*
��9�� ��дһ������fun�����Ĺ����ǣ��������¹�ʽ��p��ֵ��
����ɺ���ֵ���ء�M��nΪ��������������Ҫ��m>n�� p=m!/n!(m-n)!
*/
int factorial(int i);
float fun(int m, int n);

void main()
{
    printf("��9��\n\n  ��дһ������fun�����Ĺ����ǣ��������¹�ʽ��p��ֵ������ɺ���ֵ���ء�M��nΪ��������������Ҫ��m>n�� p=m!/n!(m-n)! \n\n");

    int m, n;

    printf("Please input 'M': ");
    scanf("%d", &m);
    printf("Please input 'N': ");
    scanf("%d", &n);

    while(m<=n || (m<=0 || n<=0)) //������ˣ�m>n �Ҷ�Ϊ������
    {
        printf("\nSorry, input error!\n\n");
        printf("Please input 'M': ");
        scanf("%d", &m);
        printf("Please input 'N': ");
        scanf("%d", &n);
    }

    float result;
    result = fun(m, n);
    printf("\nResult: %.2f\n\n", result);

}

float fun(int m, int n)  //���ݹ�ʽ����
{
    return (factorial(m)*1.0)/(factorial(n)*(factorial(m-n)));
}

int factorial(int i)     //����׳�
{
    return (i==1 || i==0) ? 1 : i*factorial(i-1);
}
