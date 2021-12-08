#include <stdio.h>
#include <stdlib.h>

typedef struct _digit
{
    int x;
    int cnt;
}digit;

int initialize(digit arr[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        arr[i].cnt=0;
        arr[i].x=-1;
    }
}

int index(int key,digit arr[],int len)
{
    int i,out;
    for(i=0;i<len;i++)
    {
        if(arr[i].x==key)
            return i;
        if(arr[i].cnt==0)
            return -i;
    }
}

int comp(const void *a,const void *b)
{
    int n,_n;
    digit *c=(digit *)a;
    digit *d=(digit *)b;
    n=d->cnt-c->cnt;
    if(n!=0)
        return n;
    _n=c->x-d->x;
    return _n;
}


int main()
{
    int i,j,k,l,m,temp,n,total;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf(" %d",&total);
        digit input[total];
        initialize(input,total);
        for(j=0;j<total;j++)
        {
            scanf(" %d",&l);
            temp=index(l,input,total);
            if(temp<=0)
            {
                input[-temp].x=l;
                input[-temp].cnt++;
            }
            else
                input[temp].cnt++;
        }
        for(j=0;j<total;j++)
        {
            if(input[j].cnt==0)
                break;
        }
        m=j;
        qsort(input,m,sizeof(digit),comp);
        printf("case #%d:\n",i);
        for(j=0;j<m;j++)
        {
            for(k=1;k<=input[j].cnt;k++)
            {
                printf("%d ",input[j].x);
            }
        }
        printf("\n");
    }
    return 0;
}
