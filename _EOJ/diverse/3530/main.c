#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _num
{
    char digit[5];
    int len;
    char first;
    char last;
}num;

int cmp(const void *a,const void *b);
int main()
{
    int n;
    scanf("%d",&n);
    num arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&arr[i].digit);
        arr[i].first=arr[i].digit[0];
        arr[i].len=strlen(arr[i].digit);
        arr[i].last=arr[i].digit[arr[i].len-1];
    }

    qsort(arr,n,sizeof(arr[0]),cmp);

    for(int i=0;i<n;i++)
        printf("%s",arr[i].digit);


    return 0;
}

int cmp(const void *a,const void *b)
{
    num *c=(num *)a;
    num *d=(num *)b;
    if(c->len<d->len)
    {
        for(int i=0;i<c->len;i++)
        {
            if(c->digit[i]<d->digit[i])
                return 1;
            else if(c->digit[i]>d->digit[i])
                return -1;
        }
        return d->last-c->first;
    }
    else if(c->len==d->len)
        return strcmp(d,c);//in descending order
    else
    {
        for(int i=0;i<d->len;i++)
        {
            if(c->digit[i]<d->digit[i])
                return 1;
            else if(c->digit[i]>d->digit[i])
                return -1;
        }
        return d->first-c->last;
    }
}

