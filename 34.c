#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��34�� ѧ���ļ�¼��ѧ�źͳɼ���ɣ�n��ѧ�������������������з���ṹ������s�У�
���д����fun�����Ĺ���ʹ���ѷ�����ߵ�ѧ�����ݷ���h��ָ�������У�
ע�⣺������ߵ�ѧ�����ܲ�ֹһ�����������ط�����ߵ�ѧ����������

*/
typedef struct node{
    char stuid[15];
    int score;
}student;

int fun(student *s, int n)
{
    int i, count, max;
    count = 0;
    max = s[0].score;
    for(i=0; i<n; i++)
    {
        if(max<s[i].score)
            max = s[i].score;
    }
    for(i=0; i<n; i++)
    {
        if(max == s[i].score)
            count++;
    }

 return count;
}


void main()
{
    printf("��34��\n\n  ѧ���ļ�¼��ѧ�źͳɼ���ɣ�n��ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ���ʹ���ѷ�����ߵ�ѧ�����ݷ���h��ָ�������У�ע�⣺������ߵ�ѧ�����ܲ�ֹһ�����������ط�����ߵ�ѧ����������  \n\n");
    student s[7] = {{"001", 99}, {"002", 99}, {"003", 89}, {"004", 79}, {"005", 66}, {"006", 78}, {"007", 65} };
    int count;
    count = fun(s, 7);
    printf("Output: %d", count);
}
