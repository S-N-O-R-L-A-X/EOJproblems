#include <stdio.h>
#include <stdlib.h>
int comp(const void *a,const void *b)
{
    int *c=(int *)a;
    int *d=(int *)b;
    int n=(*c)%10-(*d)%10;
    if(n!=0)
        return n;
    int n1=(*c)-(*d);
    return n1;
}

int main()
{
    int test,n,i,j;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf(" %d",&n);
        int arr[n];
        for(j=0;j<n;j++)
            scanf(" %d",&arr[j]);

        qsort(arr,n,sizeof(int),comp);
        printf("case #%d:\n",i);
        printf("%d",arr[0]);
        for(j=1;j<n;j++)
        {
            if(arr[j]!=arr[j-1])
                printf(" %d",arr[j]);
        }
        printf("\n");
    }

    return 0;
}
