#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
��22�� n��ѧ���ĳɼ������������з���һ����ͷ�ڵ������ṹ�У�hָ�������ͷ�ڵ㡣���д����fun��
���Ĺ����ǣ��ҳ�ѧ������߷֣��ɺ���ֵ���ء�

*/

typedef struct node{
    int score;
    struct node * next;
}linknode;

typedef linknode * linklist;


linklist creatlist() //β�巨������ͷ���ĵ�����
{
    int data;
    linklist head, p, pre;
    head = (linklist)malloc(sizeof(linknode));
    head ->next = NULL;
    p = head;
    printf("Input scores (end by -1):  ");
    while(scanf("%d", &data) && data != -1)  //ע��ϸ��
    {
        pre = (linknode *)malloc(sizeof(linknode));
        pre->score = data;
        p->next = pre;
        pre->next = NULL;
        p = pre;
    }
    return head;
}


void linklist_print(linklist head)
{
    linklist p;
    p = head->next;
    printf("Data: ");
    while(p)
    {
        printf("%d ", p->score);
        p = p->next;
    }
}

int fun(linklist head)
{
    linklist p, max;
    max = p = head->next;
    while(p)
    {
        if(max->score < p->score)
        {
            max = p;
        }
        p = p->next;

    }

    return max->score;
}



void main()
{
    printf("��22��\n\n  n��ѧ���ĳɼ������������з���һ����ͷ�ڵ������ṹ�У�hָ�������ͷ�ڵ㡣���д����fun�����Ĺ����ǣ��ҳ�ѧ������߷֣��ɺ���ֵ���ء�\n\n");

    linklist head;
    head = creatlist();
    linklist_print(head);
    printf("\nOutput: %d\n\n", fun(head));

}
