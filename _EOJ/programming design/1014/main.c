#include <stdio.h>
#include <stdlib.h>
int cmp(void *_a,void *_b)
{
    int *a=(int *)_a;
    int *b=(int *)_b;
    return *a -*b;
}

int main()//qsort edition
{
    int n,i,j,t,temp,index;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf(" %d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    scanf(" %d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %d",&index);
        printf("%d\n",a[index-1]);
    }

    return 0;
}


/*
int main()//bubble sort
{
    int n,i,j,t,temp,index;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf(" %d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    scanf(" %d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %d",&index);
        printf("%d\n",a[index-1]);
    }

    return 0;
}
*/
