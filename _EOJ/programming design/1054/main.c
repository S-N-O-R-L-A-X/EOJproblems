#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a,const void *b);
int indexAt(char str[]);

int main()
{
    int i,n,j,k;
    scanf("%d",&n);
    getchar();
    char str[n][1000];


    for(i=0;i<n;i++)
        gets(str[i]);




    qsort(str,n,sizeof(char *),comp);
    for(i=0;i<n;i++)
        puts(str[i]);

    return 0;
}

int indexAt(char str[])
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='@')
            return i;
    }
}

int comp(const void *a,const void *b)
{
    char *c=(char *)a;
    char *d=(char *)b;
    char *e,*f;
    strcpy(e,c);
    strcpy(f,d);
    int at1=indexAt(c);
    int at2=indexAt(d);
    int i,n1,n2;
    for(i=0;i<at1;i++)
        c[i]=' ';

    for(i=0;i<at2;i++)
        d[i]=' ';

    if(strcmp(c,d))
        return strcmp(c,d);

    for(i=at1+1;i<strlen(e);i++)
        e[i]=' ';
    e[at1]='\0';

    for(i=at2+2;i<strlen(f);i++)
        f[i]=' ';
    f[at2]='\0';
    return strcmp(e,f);
}
