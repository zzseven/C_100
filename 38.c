#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��38�� ���д����fun�����Ĺ����ǣ����ss��ָ�ַ�����ָ���ַ��ĸ����������ش�ֵ��

*/



int fun(char *str, char c )
{
    int i = 0;
    int count = 0;
    while(*(str+i)!='\0')
    {
        if(*(str+i)==c)
            count ++;
        i++;
    }
    return count;
}

void main()
{
    printf("��38��\n\n  ���д����fun�����Ĺ����ǣ����ss��ָ�ַ�����ָ���ַ��ĸ����������ش�ֵ��   \n\n");
    printf("Input string:");
    char str[100];
    gets(str);
    printf("Input c: ");
    char c;
    scanf("%c", &c);
    printf("Output: %d\n\n", fun(str, c));


}
