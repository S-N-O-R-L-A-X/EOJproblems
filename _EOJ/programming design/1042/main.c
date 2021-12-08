#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char month[19][7]={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen",
"yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};

typedef struct _date
{
    int day;
    char month[7];
    int year;
}date;

int index(char m[]);
int cmp(const void *a,const void *b);


int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d",&n);
        date time[n];
        for(j=0;j<n;j++)
        {
            scanf(" %d. ",&time[j].day);
            scanf("%s",&time[j].month);
            scanf(" %d",&time[j].year);

        }
        qsort(time,n,sizeof(date),cmp);
        printf("case #%d:\n",i);
        for(j=0;j<n;j++)
            printf("%d. %s %d\n",time[j].day,time[j].month,time[j].year);
    }
    return 0;
}

int index(char m[])
{
    int i;
    for(i=0;i<20;i++)
    {
        if(strcmp(m,month[i])==0)
            return i;
    }

}

int cmp(const void *a,const void *b)
{
    date *c=(date *)a;
    date *d=(date *)b;
    int n1,n2,n3;
    n1=c->year-d->year;
    if(n1!=0)
        return n1;
    n2=index(c->month)-index(d->month);
    if(n2!=0)
        return n2;
    n3=c->day-d->day;
    return n3;
}
