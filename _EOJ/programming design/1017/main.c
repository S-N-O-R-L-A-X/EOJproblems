#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _score
{
    char num[12];
    int point;
}score;

int scorecomp(const void *a,const void *b)
{
    score *c=(score *)a;
    score *d=(score *)b;
    int n=d->point-c->point;
    if(n!=0)
        return n;
    int _n=strcmp(c->num,d->num);
        return _n;
}




int main()
{
    int i,j,n;

    scanf("%d",&n);

    score student[n];
    for(i=0;i<n;i++)
        scanf(" %s %d",&student[i].num,&student[i].point);

    qsort(student,n,sizeof(score),scorecomp);

    for(i=0;i<n;i++)
    {
        if(student[i].point>=60)
            printf("%s %d\n",student[i].num,student[i].point);
    }

    /*for(i=0;i<=n-1;i++)
    {
        scanf(" %lld",&student[i].num);
        scanf(" %d",&student[i].point);
        if(student[i].point>=60)
            student[i].grade=1;
        else
            student[i].grade=0;
    }

    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(student[j].point<student[j+1].point)
            {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
            else //if(student[j].point==student[j+1].point)
            {
                if(student[j].num>student[j+1].num)
                {
                    temp=student[j];
                    student[j]=student[j+1];
                    student[j+1]=temp;
                }
            }

        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(student[i].grade==1)
            printf("%lld %d\n",student[i].num,student[i].point);
    }*/

    return 0;
}
