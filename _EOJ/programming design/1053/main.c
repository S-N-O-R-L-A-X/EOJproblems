#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define maxsize 200
typedef struct _statistics
{
    int times[10];
    double s[10];//distribute
    double KL;
    int sum_time;
    int order;
}statistics;

int cmp(const void *a,const void *b);

int main()
{
    int t,n,i,j,k,p,q;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d %d",&k,&n);
        statistics x={0,0,0,0,0};
        for(j=0;j<k;j++)
        {
            scanf(" %d",&x.times[j]);
            x.sum_time+=x.times[j];
        }
        for(j=0;j<k;j++)
            x.s[j]=(x.times[j]+1/(double)k)/(x.sum_time+1);



        statistics data[maxsize]={0,0,0,0,0};

        for(p=0;p<n;p++)
        {
            for(q=0;q<k;q++)
            {
                scanf(" %d",&data[p].times[q]);
                data[p].sum_time+=data[p].times[q];
                data[p].order=p+1;
            }
            for(q=0;q<k;q++)
            {
                data[p].s[q]=(data[p].times[q]+1/(double)k)/(data[p].sum_time+1);
                data[p].KL=data[p].KL+x.s[q]*log(x.s[q]/data[p].s[q]);
//                if(fabs(data[p].KL)<1E-7)
//                    data[p].KL=0;
            }
        }
        qsort(data,n,sizeof(data[0]),cmp);
        printf("case #%d:\n",i);
        for(j=0;j<n;j++)
            printf("%d %.4lf\n",data[j].order,data[j].KL);
    }
    return 0;
}

int cmp(const void *a,const void *b)
{
    statistics *c=(statistics *)a;
    statistics *d=(statistics *)b;
    if(fabs(c->KL-d->KL)<1e-7)
        return c->order-d->order;
    return c->KL>d->KL?1:-1;
}
