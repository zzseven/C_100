#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*��6�� ���дһ������void fun(char a[],char b[],int n),
�书���ǣ�ɾ��һ���ַ�����ָ���±���ַ������У�aָ��ԭ�ַ�����
ɾ������ַ��������b��ָ�������У�n�д��ָ�����±ꡣ*/

char * getstr();
void fun(char a[], char b[], int n);

void main()
{
    printf("��6��\n\n  ���дһ������void fun(char a[],char b[],int n),�书���ǣ�ɾ��һ���ַ�����ָ���±���ַ������У�aָ��ԭ�ַ�����ɾ������ַ��������b��ָ�������У�n�д��ָ�����±ꡣ\n\n");
    int n;
    printf("Please input a string: ");
    char * string;
    string = getstr();
    printf("\nPlease input n: ");
    scanf("%d", &n);
    char b[1];
    fun(string, b, n);
    printf("\nNew string: %s", string);

    printf("\n\n");

}

void fun(char a[], char b[], int n)
{
    int i;
    i = 0;
    while(i!=n)
    {
        i++;
    }
    b[0] = a[n];
    for(; i<strlen(a)-1; i++)
    {
        a[i] = a[i+1];
    }
    a[i] = '\0';
}

char * getstr()    //��̬��ȡ�ַ���
{
    char* str;
    char* _str;
    int i = 1;
    str = (char*)malloc(sizeof(char) * (i + 1));
    //while((str[i-1] = getchar()) != '\n')
    while('\n' != (str[i-1] = getchar()))
    {
         i++;
         _str = (char*)malloc(strlen(str) + 1);
         str[i-1] = '\0';
         strcpy(_str, str);
         free(str);

         str = (char*)malloc(sizeof(char) * (i+1));
         if(str == NULL)
         {
             free(_str);
             printf("No enough memory!");
             return NULL;
         }
         strcpy(str, _str);
         free(_str);

    }
    str[i-1] = '\0';
    return str;

}



