#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

��37�� ĳѧ���ļ�¼��ѧ�š�8�ſγ̳ɼ���ƽ������ɣ�ѧ�ź�8�ſγ̵ĳɼ������������и�����
���д����fun�����Ĺ����ǣ������ѧ����ƽ���ַ��ڼ�¼��ave��Ա�С����Լ�������ȷ���βΡ�

*/


typedef struct stu{
    char stuid[15];
    int subject[8];
    float ave;
}student;

float fun(student *s)
{
    int i = 0;
    int sum = 0;
    int in_len ;
    in_len = sizeof(s->subject)/sizeof(int);
    while(i<in_len)
    {
        sum += s->subject[i];
        i++;
    }

    return sum*1.0/in_len;
}

void main()
{
    printf("��37��\n\n  ĳѧ���ļ�¼��ѧ�š�8�ſγ̳ɼ���ƽ������ɣ�ѧ�ź�8�ſγ̵ĳɼ������������и��������д����fun�����Ĺ����ǣ������ѧ����ƽ���ַ��ڼ�¼��ave��Ա�С����Լ�������ȷ���βΡ� \n\n");
    student s = {"12001",78, 87, 99, 67, 89, 84, 98, 95, 0.0};
    printf("\nOutput: %.2f \n\n", fun(&s));

}
