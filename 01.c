#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int * fun(int * arr, int num);

void main()
{
    printf("��1�� \n\n  m���˵ĳɼ������score�����У����д����fun���Ĺ����ǣ�������ƽ���ֵ�����Ϊ����ֵ���أ�������ƽ���ֵķ�������below��ָ���ĺ����С�\n\n");

    int *array, *blowave;
    int num, i;


    printf("Please input the count: ");  //��������
    scanf("%d", &num);

    array = (int *)malloc(sizeof(int) * num);
    if(array == 0)
    {
        printf("Sorry, error!");
        exit(1);
    }

    for(i=0; i<num; i++)    //¼��ɼ�
    {
         scanf("%d", &array[i]);
    }

//    for(i=0; i<num; i++)   //�Գɼ�����������
//    {
//         printf("%d ",array[i]);
//    }

    blowave = fun(array, num);

}


int * fun(int * arr, int num)
{
    int i,j;
    int * blow;              //������ƽ���ֵķ�����ŵ�һ��������
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
