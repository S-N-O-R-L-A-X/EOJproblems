#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _score
{
    char num[12];
    int point;
}score;

int comp(const void *a,const void *b)
{
    score *c=(score *)a;
    score *d=(score *)b;
    int n1,n2;
    n1=d->point-c->point;
    if(n1!=0)
        return n1;
    n2=strcmp(c,d);
    return n2;
}


int main()
{
    int t,i,j,k,cnt;
    int n,m,g;
    int temp,amount;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d %d %d",&n,&m,&g);
        int test[m];
        temp=0;cnt=0;//initialize

        score student[n];
        for(j=0;j<m;j++)
            scanf(" %d",&test[j]);
        for(j=0;j<n;j++)
        {
            int sum=0;
            scanf("%s %d",&student[j].num,&amount);
            for(k=0;k<amount;k++)
            {
                scanf(" %d",&temp);
                sum+=test[temp-1];
            }
            student[j].point=sum;
            if(sum>=g)
                cnt++;//count how many students pass
        }
        qsort(student,n,sizeof(score),comp);
        printf("case #%d:\n%d\n",i,cnt);

        for(j=0;j<cnt;j++)
            printf("%s %d\n",student[j].num,student[j].point);
    }
    return 0;
}
