#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
23: ��23�� ���д����fun���ú����Ĺ����ǣ��ж��ַ����Ƿ�Ϊ����?������������1��
�����������yes�����򷵻�0�������������no��������ָ˳���͵�������һ�����ַ�����

*/

int fun(char *str)
{
    int len, i, middle;
    len = strlen(str);
    middle = len/2;
    for(i=0; i<middle; )
    {
        if(str[i]==str[len-1])
        {
            i++;
            len--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}


void main()
{
    printf("��23��\n\n  ���д����fun���ú����Ĺ����ǣ��ж��ַ����Ƿ�Ϊ����?������������1�������������yes�����򷵻�0�������������no��������ָ˳���͵�������һ�����ַ�����\n\n");
    char str[100];
    int i = 0;
    printf("INput: ");
    while(scanf("%c", &str[i]) && str[i]!='\n')
    {
        i++;
    }
    str[i] = '\0';
    printf("\nOutput: ");
    fun(str) ? printf(" Yes\n\n") : printf(" No\n\n");

}
