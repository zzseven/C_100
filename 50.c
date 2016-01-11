#include <stdio.h>
#include <stdlib.h>

/*

第50题 已知学生的记录是由学号和学习成绩构成，
n名学生的数据已存入a机构体数组中。请编写函数fun，
该函数的功能是：找出成绩最高的学生记录，通过形参返回主函数(规定只有一个最高分)。

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

    printf("学号：%s  成绩：%d", stu[0].Stid, stu[0].score);

}



void main()
{
    printf("第50题\n\n  已知学生的记录是由学号和学习成绩构成，n名学生的数据已存入a机构体数组中。请编写函数fun，该函数的功能是：找出成绩最高的学生记录，通过形参返回主函数(规定只有一个最高分)。  \n\n");

    struct student stu[10] = { {"1001", 89}, {"1002", 34}, {"1003", 77}, {"1004", 90}, {"1005", 87},
                                {"1006", 94}, {"1007", 56}, {"1008",68}, {"1009", 82},{"1010", 21}};
    fun(stu, 10);

}

