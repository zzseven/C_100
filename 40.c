#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��40�� ���д����fun���ú����Ĺ������ƶ��ַ��������ݣ�
�ƶ��Ĺ������£��ѵ�1����m���ַ���ƽ�Ƶ��ַ��������
�ѵ�m��1�������ַ��Ƶ��ַ�����ǰ����

*/

//void print(int *str, int n)
//{
//    int i = 0;
//    while(i<n)
//        printf("%d ", str[i++]);
//}

void convert(char *str, int p1, int p2)   //���������ָ�����ȷ�ת
{
    char temp;
    int middle = (p1 + p2) / 2;
    while(p1<middle)
    {
        temp = str[p1];
        str[p1] = str[p2];
        str[p2] = temp;
        p1++;
        p2--;
    }
}

void fun(char *str, int p)
{
    int n = strlen(str);
    convert(str, 0, n-1);
    convert(str, 0, n-p-1);
    convert(str,n-p, n-1);
}

void main()
{
    printf("��40��\n\n  ���д����fun���ú����Ĺ������ƶ��ַ��������ݣ��ƶ��Ĺ������£��ѵ�1����m���ַ���ƽ�Ƶ��ַ�������󣬰ѵ�m��1�������ַ��Ƶ��ַ�����ǰ����   \n\n");
    printf("Input string:");
    char str[100];
    gets(str);
    printf("\nInput m: ");
    int m;
    scanf("%d", &m);
    fun(str, m);
    printf("\nOutput��");
    puts(str);
    printf("\n\n");


}
