#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��33�� �ٶ�������ַ�����ֻ������ĸ��*�š�
���д����fun�����Ĺ����ǣ�ʹ�ַ�����β����*�Ų��ö���n����
������n������ɾ�����ڵ�*�ţ������ڻ����n������ʲôҲ�������ַ����м��ǰ���*�Ų�ɾ����

*/

void fun(char *str, int n)
{
    int len, k;
    int i = 0;
    len = k = strlen(str);
    if(*(str+len-n-1) == '*')
    {
        while(*(str+len-n-1)=='*')
        {
            i++;
            len--;
        }
        *(str+ k-i) = '\0';
    }


}
void main()
{
    printf("��33��\n\n �ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ�ʹ�ַ�����β����*�Ų��ö���n����������n������ɾ�����ڵ�*�ţ������ڻ����n������ʲôҲ�������ַ����м��ǰ���*�Ų�ɾ���� \n\n");
    char str[100];
    int n;
    printf("Input string:");
    gets(str);
    printf("Input n:");
    scanf("%d", &n);
    fun(str, n);
    printf("\nOutput:%s\n\n", str);
}
