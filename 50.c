#include <stdio.h>
#include <stdlib.h>

/*

��50�� ��֪ѧ���ļ�¼����ѧ�ź�ѧϰ�ɼ����ɣ�
n��ѧ���������Ѵ���a�����������С����д����fun��
�ú����Ĺ����ǣ��ҳ��ɼ���ߵ�ѧ����¼��ͨ���βη���������(�涨ֻ��һ����߷�)��

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
    printf("Output:  ");

    printf("ѧ�ţ�%s  �ɼ���%d", stu[0].Stid, stu[0].score);

}



void main()
{
    printf("��50��\n\n  ��֪ѧ���ļ�¼����ѧ�ź�ѧϰ�ɼ����ɣ�n��ѧ���������Ѵ���a�����������С����д����fun���ú����Ĺ����ǣ��ҳ��ɼ���ߵ�ѧ����¼��ͨ���βη���������(�涨ֻ��һ����߷�)��  \n\n");

    struct student stu[10] = { {"1001", 89}, {"1002", 34}, {"1003", 77}, {"1004", 90}, {"1005", 87},
                                {"1006", 94}, {"1007", 56}, {"1008",68}, {"1009", 82},{"1010", 21}};
    fun(stu, 10);

}

