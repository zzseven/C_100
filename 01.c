#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int * fun(int * arr, int num);

void main()
{
    printf("第1题 \n\n  m个人的成绩存放在score数组中，请编写函数fun它的功能是：将低于平均分的人作为函数值返回，将低于平均分的分数放在below所指定的函数中。\n\n");

    int *array, *blowave;
    int num, i;


    printf("Please input the count: ");  //输入人数
    scanf("%d", &num);

    array = (int *)malloc(sizeof(int) * num);
    if(array == 0)
    {
        printf("Sorry, error!");
        exit(1);
    }

    for(i=0; i<num; i++)    //录入成绩
    {
         scanf("%d", &array[i]);
    }

//    for(i=0; i<num; i++)   //对成绩数组进行输出
//    {
//         printf("%d ",array[i]);
//    }

    blowave = fun(array, num);

}


int * fun(int * arr, int num)
{
    int i,j;
    int * blow;              //将低于平均分的分数存放到一个数组中
    float count, ave;
    count = 0.0;
    for (i=0; i<num; i++)
    {
        count += arr[i];
    }

    ave = count / num;
    printf("\naverage score: %.2f\n\n", ave);

    j = 0;
    for(i=0; i<num; i++)
    {
        if(arr[i] < ave)
        {
            j++;
        }
    }

    blow = (int *)malloc(sizeof(int) * j);
    j = 0;
    for(i=0; i<num; i++)
    {
        if(arr[i] < ave)
        {
          blow[j++]=arr[i];
        }
    }


    printf("Scores blow the average:\n");

    for(i=0; i<j; i++)
    {
        printf("%d ", blow[i]);
    }
    printf("\n\n");
    return blow;
}
