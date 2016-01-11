#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第37题 某学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在主函数中给出。
请编写函数fun，它的功能是：求出该学生的平均分放在记录的ave成员中。请自己定义正确的形参。

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
    printf("第37题\n\n  某学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在主函数中给出。请编写函数fun，它的功能是：求出该学生的平均分放在记录的ave成员中。请自己定义正确的形参。 \n\n");
    student s = {"12001",78, 87, 99, 67, 89, 84, 98, 95, 0.0};
    printf("\nOutput: %.2f \n\n", fun(&s));

}
