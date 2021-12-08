#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define maxlen 201

int comp(const void *a,const void *b)
{
    char *c=(char *)a;
    char *d=(char *)b;
    char e[maxlen],f[maxlen];
    strcpy(e,c);
    strcpy(f,d);
    for(int i=0;i<strlen(e);i++)
        e[i]=tolower(e[i]);
    for(int i=0;i<strlen(f);i++)
        f[i]=tolower(f[i]);
    int n1=strcmp(e,f);
    return n1;
}

int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d",&n);
        getchar();//eat '\n'
        char str[n][maxlen];
        for(j=0;j<n;j++)
            gets(str[j]);
        qsort(str,n,sizeof(str[0]),comp);
        printf("case #%d:\n",i);
        for(j=0;j<n;j++)
            puts(str[j]);
    }
    return 0;
}
