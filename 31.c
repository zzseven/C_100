#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

31: ��31�� ���д����fun���书���ǣ���s��ָ�ַ����г����±�Ϊż����
ͬʱasciiֵҲΪż�����ַ��⣬�����ȫ��ɾ��������ʣ���ַ����γɵ�һ���´�����t��ָ��һ�������С�

*/

void fun(char *str)
{
    char *temp;
    temp = (char*)malloc(100);
    memset(temp, 0, strlen(temp));

    int i, j,k;
    i = j = k = 0;
    while(str[i]!='\0')
    {
        if(i%2==0 && str[i]%2==0)
        {
            temp[j] = str[i];
            j++;
        }
        i++;
    }
    temp[j] = '\0';
    *str = '\0';
    strcpy(str, temp);

}
void main()
{
    printf("��31��\n\n ���д����fun���书���ǣ���s��ָ�ַ����г����±�Ϊż����ͬʱasciiֵҲΪż�����ַ��⣬�����ȫ��ɾ��������ʣ���ַ����γɵ�һ���´�����t��ָ��һ�������С�\n\n");
    char str[100];
    printf("Input:");
    gets(str);
    fun(str);
    printf("\nOutput:%s\n\n", str);
}
