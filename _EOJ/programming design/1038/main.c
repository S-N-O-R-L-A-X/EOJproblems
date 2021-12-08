#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
int cmp(const void *a,const void *b);

int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d",&n);
        double x,y;
        double coordinate[n][2];
        for(j=0;j<n;j++)
        {
            scanf(" %lf %lf",&x,&y);
            if(atan2(y,x)<0)
                coordinate[j][1]=atan2(y,x)+2*PI;
            else
                coordinate[j][1]=atan2(y,x);

            coordinate[j][0]=sqrt(x*x+y*y);
        }
        qsort(coordinate,n,sizeof(coordinate[0]),cmp);
        printf("case #%d:\n",i);
        for(j=0;j<n;j++)
            printf("(%.4lf,%.4lf)\n",coordinate[j][0],coordinate[j][1]);
    }
    return 0;
}

int cmp(const void *a,const void *b)
{
    double *c=(double *)a;
    double *d=(double *)b;
    if(c[1]!=d[1])
        return c[1]>d[1]?1:-1;
    return d[0]-c[0];
}
