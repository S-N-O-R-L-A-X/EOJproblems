#include <stdio.h>
#include <stdlib.h>
int Dcmp(void *_a,void *_b)
{
    int *a=(int *)_a;
    int *b=(int *)_b;
    return *b-*a;
}

int Acmp(void *_a,void *_b)
{
    int *a=(int *)_a;
    int *b=(int *)_b;
    return *a-*b;
}

int main()
{
    char style;
    scanf("%c",&style);
    int a[100];
    int i,j,k,n,temp;
    i=0;
    while(scanf(" %d",&a[i]))
    {
        i++;
        n=i;
        if(getchar()=='\n')
            break;
    }

    if(style=='A')
        qsort(a,n,sizeof(int),Acmp);
    else
        qsort(a,n,sizeof(int),Dcmp);
    /*for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }*/
    for(i=0;i<=n-2;i++)
    {
        if(a[i]!=a[i+1])
            printf("%d ",a[i]);
    }
    printf("%d\n",a[n-1]);
    return 0;
}
