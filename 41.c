#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��41�� ���д����fun���ú����Ĺ����ǣ���m��n�еĶ�ά�����е��ַ����ݣ����е�˳�����ηŵ�һ���ַ����С�

*/



void fun(char (*str)[3], char * str1, int m, int n)
{
    int i, j, k;
    i = j = k =  0;
    for(j=0; j<n; j++)
    {
        for(i=0; i<m; i++)
        {
            *(str1+k) = *(*(str+i)+j);
            k++;
        }
    }
}

void main()
{
    printf("��41��\n\n  ���д����fun���ú����Ĺ����ǣ���m��n�еĶ�ά�����е��ַ����ݣ����е�˳�����ηŵ�һ���ַ����С�  \n\n");

    char str[3][3]= { {'a', 'b', 'c'}, {'e', 'f', 'g'}, {'h', 'i', 'j'}};
    char str1[100];
    memset(str1, 0, 100);
    fun(str, str1, 3, 3);
    printf("\nOutput��");
    puts(str1);
    printf("\n\n");


}
