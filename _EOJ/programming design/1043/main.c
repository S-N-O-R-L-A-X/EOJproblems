#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int statistic_digit(char str[])
{
    int cnt,i;
    cnt=0;
    for(i=0;i<strlen(str);i++)
    {
        if(isdigit(str[i]))
            cnt++;
    }
    return cnt;
}

int comp(const void *a,const void *b)
{
    char *c=(char *)a;
    char *d=(char *)b;
    int n,_n,n_;
    n=statistic_digit(c)-statistic_digit(d);
    if(n!=0)
        return n;
    _n=strlen(d)-strlen(c);
    if(_n!=0)
        return _n;
    n_=strcmp(c,d);
        return n_;
}

int main()
{
    int n,i,j,k,len;
    scanf("%d",&n);
    getchar();
    char str[n][101];
    for(i=0;i<n;i++)
        gets(str[i]);
    qsort(str,n,sizeof(str[0]),comp);
    for(i=0;i<n;i++)
        printf("%s\n",str[i]);
    return 0;
}
