#include <stdio.h>
#include <stdlib.h>

/*

27: ��27�� ���дһ������fun,���Ĺ����ǣ����1��m֮��(��m)�ܱ�7��11����������������������a�У�ͨ��n������Щ���ĸ�����

*/


void main()
{
    printf("��27��\n\n  ���дһ������fun,���Ĺ����ǣ����1��m֮��(��m)�ܱ�7��11����������������������a�У�ͨ��n������Щ���ĸ�����\n\n");

    int * object;
    int i, j, count = 0;

    for(i=1; i<=100; i++)
    {
        if(i%7==0 || i%11==0)
        {

            i++;
            count++;     //���⣺������ִ��for���ǣ���һ�����鱣�����ݣ�Ȼ���ڸ��Ƶ���̬�����п�������?
        }
    }

    object = (int *)malloc(sizeof(int) * count);
    j = 0;
    for(i=1; i<=100; i++)
    {
        if(i%7==0 || i%11==0)
        {
            object[j++] = i;
        }
    }

    printf("\n\nAll:  ");
    for(i=0; i<j; i++)
    {
        printf("%d ", object[i]);
    }

    printf("\n\ncount: %d  \n",j);

}
