#include <stdio.h>
#include <stdlib.h>

/*
��46�� ѧ���ü�¼��ѧ�źͳɼ���Ƹ���
n����ѧ�������������������з���ṹ������s�У�
���д����fun�����Ĺ���ʱ���������ĸߵ�����ѧ���ļ�¼���߷���ǰ��

*/


struct student
{
    char Stid[20];
    int score;
};

void fun(struct student * stu, int n)
{
    struct student t;
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(stu[j].score < stu[j+1].score)
            {
                t = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = t;
            }

        }
    }
    printf("Output: \n");
    for(i=0; i<n; i++)
    {
        printf("ѧ�ţ�%s  �ɼ���%d", stu[i].Stid, stu[i].score);
        printf("\n");
    }

}



void main()
{
    printf("��46��\n\n  ѧ���ü�¼��ѧ�źͳɼ���Ƹ���n����ѧ�������������������з���ṹ������s�У����д����fun�����Ĺ���ʱ���������ĸߵ�����ѧ���ļ�¼���߷���ǰ��   \n\n");

    struct student stu[10] = { {"1001", 89}, {"1002", 34}, {"1003", 77}, {"1004", 90}, {"1005", 87},
                                {"1006", 94}, {"1007", 56}, {"1008",68}, {"1009", 82},{"1010", 21}};
    fun(stu, 10);

}

