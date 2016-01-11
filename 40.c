#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第40题 请编写函数fun，该函数的功能是移动字符串中内容，
移动的规则如下：把第1到第m个字符，平移到字符串的最后，
把第m＋1到最后的字符移到字符串的前部。

*/

//void print(int *str, int n)
//{
//    int i = 0;
//    while(i<n)
//        printf("%d ", str[i++]);
//}

void convert(char *str, int p1, int p2)   //对数组进行指定长度翻转
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
    printf("第40题\n\n  请编写函数fun，该函数的功能是移动字符串中内容，移动的规则如下：把第1到第m个字符，平移到字符串的最后，把第m＋1到最后的字符移到字符串的前部。   \n\n");
    printf("Input string:");
    char str[100];
    gets(str);
    printf("\nInput m: ");
    int m;
    scanf("%d", &m);
    fun(str, m);
    printf("\nOutput：");
    puts(str);
    printf("\n\n");


}
