#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
第22题 n名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编写函数fun，
它的功能是：找出学生的最高分，由函数值返回。

*/

typedef struct node{
    int score;
    struct node * next;
}linknode;

typedef linknode * linklist;


linklist creatlist() //尾插法建立带头结点的单链表
{
    int data;
    linklist head, p, pre;
    head = (linklist)malloc(sizeof(linknode));
    head ->next = NULL;
    p = head;
    printf("Input scores (end by -1):  ");
    while(scanf("%d", &data) && data != -1)  //注意细节
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
    printf("第22题\n\n  n名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编写函数fun，它的功能是：找出学生的最高分，由函数值返回。\n\n");

    linklist head;
    head = creatlist();
    linklist_print(head);
    printf("\nOutput: %d\n\n", fun(head));

}
