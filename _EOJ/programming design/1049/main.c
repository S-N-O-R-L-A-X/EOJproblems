#include <stdio.h>
#include <stdlib.h>

#define maxsize 51

int cmp(const void *a,const void *b);
void print(int a[][maxsize],int n);

int main()
{
    int t,n,i,j,k,x,y;
    scanf(" %d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d",&n);
        int a[n][maxsize];
        x=0;y=0;
        for(j=0;j<n;j++)
        {
            while(scanf(" %d",&a[x][y])&&a[x][y]!=-1)
                y++;
            y=0;
            x++;
        }
        qsort(a,n,sizeof(a[0]),cmp);

        print(a,n);
    }
    return 0;
}

int cmp(const void *a,const void *b)
{
    int *c=(int *)a;
    int *d=(int *)b;
    while(*c!=-1&&*d!=-1&&*c==*d)
    {
        c++;//next int
        d++;
    }
    return *d-*c;

}

void print(int a[][maxsize],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<maxsize&&a[i][j]!=-1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
