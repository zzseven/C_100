#include <stdio.h>
#include <stdlib.h>

/*
第46题 学生得记录由学号和成绩组称个，
n名大学生得数据已在主函数中放入结构体数组s中，
请编写函数fun，它的功能时：按分数的高低排列学生的记录，高分在前。

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
        printf("学号：%s  成绩：%d", stu[i].Stid, stu[i].score);
        printf("\n");
    }

}



void main()
{
    printf("第46题\n\n  学生得记录由学号和成绩组称个，n名大学生得数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：按分数的高低排列学生的记录，高分在前。   \n\n");

    struct student stu[10] = { {"1001", 89}, {"1002", 34}, {"1003", 77}, {"1004", 90}, {"1005", 87},
                                {"1006", 94}, {"1007", 56}, {"1008",68}, {"1009", 82},{"1010", 21}};
    fun(stu, 10);

}

