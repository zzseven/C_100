#include <stdio.h>
#include <stdlib.h>

/*
��8�� ��д����fun,�����ǣ��������¹�
�Ƽ���s,��������Ϊ����ֵ���أ�nͨ����
�δ��롣S=1+1/(1+2)+1/(1+2+3)+����.+1/(1+2+3+4+����+n)
*/

float fun(int n);

void main()
{
    printf("��8��\n\n  ��д����fun,�����ǣ��������¹��Ƽ���s,��������Ϊ����ֵ���أ�nͨ���βδ��롣S=1+1/(1+2)+1/(1+2+3)+����.+1/(1+2+3+4+����+n) \n\n");
    printf("Please input 'N': ");
    int n;
    float result;
    scanf("%d", &n);
    result = fun(n);
    printf("\nResult: %.2f\n\n", result);

}

float fun(int n)
{
    int i, j;
    float result;
    i = j = 1;
    result = 0;
    while(j++<=n)
    {
        //printf(" %d ", i);
        result += 1.0/i;
        i += j;
    }

    return result;
}
