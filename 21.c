#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
第21题 请编写函数fun,对长度位7个字符的字符串，除首尾字符外，将其余5个字符按ascii码降序排列。

*/


void fun(char * str)
{
    int i, j, len, loc;
    char p;
    len = strlen(str);
    for(i=1; i<len-1; i++)
    {
        p = str[i];
        loc = -1;
        for(j=i; j<len-1; j++)
        {
            if((p-str[j])<0)
            {
                p = str[j];
                loc = j;
            }
        }
        if(loc != -1)
        {
            str[loc] = str[i];
            str[i] = p;
        }
    }
}

void main()
{
    printf("第21题\n\n  请编写函数fun,对长度位7个字符的字符串，除首尾字符外，将其余5个字符按ascii码降序排列。\n\n");

    char str[]="abcdefg";
    printf("Input :  %s", str);
    fun(str);
    printf("\n\noutput :  %s\n\n", str);



}
