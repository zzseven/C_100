#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("��2��\n\n");
    printf("  ���д����fun�����Ĺ����ǣ����1��100֮���ܱ�7����11������������ͬʱ��7��11�����������������������Ƿ���a��ָ�������У�ͨ��n������Щ���ĸ����� ");

    int * object;
    int i, j, count = 0;

    for(i=1; i<=100; i++)
    {
        if(i%7==0 || i%11==0)
        {
            if(i%7==0&& i%11==0)
            {
                i++;
            }
            else
            {
                count++;     //���⣺������ִ��for���ǣ���һ�����鱣�����ݣ�Ȼ���ڸ��Ƶ���̬�����п�������?
            }

        }

    }


    object = (int *)malloc(sizeof(int) * count);
    j = 0;
    for(i=1; i<=100; i++)
    {
        if(i%7==0 || i%11==0)
        {
            if(i%7==0 && i%11==0)
            {
                i++;
            }
            else
            {
                object[j++] = i;
            }

        }

    }

    printf("\n\nAll:  ");
    for(i=0; i<j; i++)
    {
        printf("%d ", object[i]);
    }

    printf("\n\ncount: %d  \n",j);

}
