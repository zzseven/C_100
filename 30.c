#include <stdio.h>
#include <stdlib.h>

/*

��30�� ���дһ������fun�����Ĺ����ǣ�
���һ��2��m���Ͷ�ά���������Ԫ�ص�ֵ��������ֵ���ص��ú�����

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
    printf("��30��\n\n  ���дһ������fun�����Ĺ����ǣ����һ��2��m���Ͷ�ά���������Ԫ�ص�ֵ��������ֵ���ص��ú����� \n\n");
    int str[2][5] = {{12, 33,54,22,55}, {99,192,3,1,44,21}};
    printf("Max: %d\n\n", fun(str, 2));
}
