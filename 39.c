#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��39�� ���д����fun���ú����Ĺ����ǣ��ƶ�һά�����е����ݣ�����������n��������
Ҫ����±��0��p(pС�ڵ���n��1)������Ԫ��ƽ�Ƶ���������
*/

void print(int *num, int n)
{
    int i = 0;
    while(i<n)
        printf("%d ", num[i++]);
}

void convert(int *num, int p1, int p2)   //���������ָ�����ȷ�ת
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
    printf("��39��\n\n  ���д����fun���ú����Ĺ����ǣ��ƶ�һά�����е����ݣ�����������n��������Ҫ����±��0��p(pС�ڵ���n��1)������Ԫ��ƽ�Ƶ���������   \n\n");
    printf("Num��");
    int num[10]={1,2,4,5,6,7,8,9,10,11};
    print(num, 10);
    printf("\nInput p: ");
    int p;
    scanf("%d", &p);
    fun(num, 10, p);
    printf("Output��");
    print(num, 10);
    printf("\n\n");


}
