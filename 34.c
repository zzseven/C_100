#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

第34题 学生的记录由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，
请编写函数fun，它的功能使：把分数最高的学生数据放在h所指的数组中，
注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。

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
    printf("第34题\n\n  学生的记录由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能使：把分数最高的学生数据放在h所指的数组中，注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。  \n\n");
    student s[7] = {{"001", 99}, {"002", 99}, {"003", 89}, {"004", 79}, {"005", 66}, {"006", 78}, {"007", 65} };
    int count;
    count = fun(s, 7);
    printf("Output: %d", count);
}
