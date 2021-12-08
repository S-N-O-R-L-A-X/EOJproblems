#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _file
{
    char date[11];
    char time[6];
    int size;
    char name[141];
}file;
int cmpN(const void *a,const void *b);
int cmpS(const void *a,const void *b);
int cmpT(const void *a,const void *b);

int main()
{
    int n;
    int cnt=0;
    while(scanf(" %d",&n))
    {
        if(n==0)
            break;
        file input[n];
        for(int i=0;i<n;i++)
        {
            scanf("%s",input[i].date);
            getchar();
            scanf("%s",input[i].time);
            scanf(" %d",&input[i].size);
            getchar();
            scanf("%s",input[i].name);
            getchar();
//            scanf("%s %s %d %s",input[i].date,input[i].date,&input[i].size,input[i].name);
        }
//        gets(rule);
        char list[5];
        char rule[7];
        scanf("%s %s",list,rule);
        char index=rule[1];//difference between 3 words
        switch(index)
        {
            case 'N':qsort(input,n,sizeof(input[0]),cmpN);break;
            case 'S':qsort(input,n,sizeof(input[0]),cmpS);break;
            default:qsort(input,n,sizeof(input[0]),cmpT);break;
        }
        for(int j=0;j<n;j++)
            printf("%s %s %16d %s\n",input[j].date,input[j].time,input[j].size,input[j].name);
        printf("\n");

    }


    return 0;
}

int cmpN(const void *a,const void *b)
{
    file *c=(file *)a;
    file *d=(file *)b;
    return strcmp(c->name,d->name);
}

int cmpS(const void *a,const void *b)
{
    file *c=(file *)a;
    file *d=(file *)b;
    if(c->size!=d->size)
        return c->size-d->size;
    return strcmp(c->name,d->name);
}

int cmpT(const void *a,const void *b)
{
    file *c=(file *)a;
    file *d=(file *)b;
    if(strcmp(c->date,d->date))
        return strcmp(c->date,d->date);
    if(strcmp(c->time,d->time))
        return strcmp(c->time,d->time);
    return strcmp(c->name,d->name);
}

/*
typedef struct _file
{
    int year;
    int month;
    int date;
    int h;
    int m;
    int size;
    char name[64];
}file;


int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        file input[n];
        char rule[11];
        for(int i=0;i<t;i++)
        {
            scanf(" %d-%d-%d",&input[i].year,&input[i].month,&input[i].date)
            scanf(" %d:%d",&input[i].h,&input[i].m);
            scanf("%s",input.name);
            getchar();
        }
        gets(rule);
        char index=rule[7];//difference between 3 words
        switch(index)
        {
            case 'N':qsort(input,n,sizeof(input[0]),cmpN);break;
            case 'S':qsort(input,n,sizeof(input[0]),cmpS);break;
            default:
        }
    }


    return 0;
}

int cmpN(const void *a,const void *b)
{
    file *c=(file *)a;
    file *d=(file *)b;
    return strcmp(c->name,d->name);
}

int cmpS(const void *a,const void *b)
{
    file *c=(file *)a;
    file *d=(file *)b;
    if(c->size!=d->size)
        return c->size-d->size;
    return strcmp(c->name,d->name);
}

int cmpS(const void *a,const void *b)
{
    file *c=(file *)a;
    file *d=(file *)b;
    if()
        return c->size-d->size;
    return strcmp(c->name,d->name);
}
*/
