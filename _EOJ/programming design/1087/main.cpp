#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// ********** Specification of struct Node **********
typedef struct Node
{ int value;
struct Node *next;
}NODE;
/*/////////////////////////////////////////////////////*/
NODE *EraseNodes(NODE *h,int v)
{ //TODO: your definition
    NODE *head=NULL;
    for(NODE *p=h;p;p=p->next)
    {
        if(p->value!=v)
            head=p;
    }
    if(head==NULL)
        return NULL;

    NODE *pre=head;
    for(NODE *p=h;p!=head;)
    {
        NODE *q=p;
        p=p->next;
        free(q);
    }

    for(NODE *p=head->next;p;)
    {
        if(p->value==v)
        {
            NODE *q=p;
            p=p->next;
            free(q);
            pre->next=p;
        }
        else
        {
            pre=p;
            p=p->next;
        }
    }

}
/*/////////////////////////////////////////////////////*/
/***************************************************************/
/*                                                             */
/*  DON'T MODIFY below code anyway!                             */
/*                                                             */
/***************************************************************/
//********** Specification of EraseNodes(head,v) **********
NODE *EraseNodes(NODE *h,int v);
/* PreCondition:
h is a head pointer of a linked-list, v is an integer
PostCondition:
return the head pointer of a linked-list that has not v in its nodes
*/
void solve()
{ int i,n,v; NODE* head=0,*p,*tail;
scanf(" %d",&n);
for (i=0;i<n;i++)
{ p=(NODE*)malloc(sizeof(NODE));
scanf("%d",&p->value); p->next=0;
if (head==0) head=tail=p; else { tail->next=p; tail=p; }
}
scanf("%d",&v);
//********** EraseNodes is called here **********
head=EraseNodes(head,v);
//****************************************
while (head)
{ p=head; head=head->next;
printf("%d",p->value);
if (head) printf(" ");
free(p);
}
printf("\n");
}
int main()
{  int i,t;
scanf(" %d",&t);
for (i=0;i<t;i++)
{ printf("case #%d:\n",i);
solve();
}
return 0;
}
