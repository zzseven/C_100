#include <stdio.h>
#include <stdlib.h>

/*

��52�� ��дһ#include <stdio.h>
#include <stdlib.h>

/*

��51�� ���д����fun���书���ǣ������д���1С������m�ķ���������xx��ָ�������У��������ĸ���ͨ��k����
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
        for(i=2; i<=g; i++)   //n������������n�ɱ�ʾΪa*b������2<=a<=b<=n-1,��a��b�б���һ�������㣺
        {                     //1<x<=sqrt(n)�������ֻ��Ҫ��2~sqrt(n)ȥ��n
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
    printf("��51��\n\n  ���д����fun���书���ǣ������д���1С������m�ķ���������xx��ָ�������У��������ĸ���ͨ��k����\n\n");

    int *aa;
    int lim;
    printf("Input m: ");
    scanf("%d", &lim);

    aa = (int*)malloc(sizeof(int)*lim);

    printf("\n\nOutput count: %d \n\n", fun(lim, aa));




}

������fun�����Ĺ����ǣ�
ʵ�������ַ���������(��ʹ�ÿ⺯��strcat)������p2��ָ���ַ������ӵ�p1��ָ���ַ�����
*/


void mystrcat(char *str1, char * tr2)
{
    *(str1+strlen(str1)) = *tr2;
}

void main()
{
    printf("��52�� ��дһ������fun�����Ĺ����ǣ�ʵ�������ַ���������(��ʹ�ÿ⺯��strcat)������p2��ָ���ַ������ӵ�p1��ָ���ַ�����\n\n");
    char str1[100], str2[100];
    printf("Input string1: ");
    gets(str1);
    printf("Input string2: ");
    gets(str2);
    mystrcat(str1, str2);
    printf("\n\nOutput count: %s \n\n", str1);
}

