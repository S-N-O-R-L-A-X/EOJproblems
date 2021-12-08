#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define maxnum 100
#define maxsize 31

int digit(char str[])
{
    int i,n;
    int flag=0;
    char num[9];
    int left=strlen(str)-1;
    int right=strlen(str)-1;
    for(i=0;i<strlen(str);i++)
    {
        if(isdigit(str[i])&&flag==0)
        {
            flag=1;
            left=i;
        }
        if(isdigit(str[i])==0&&flag==1)
        {
            right=i-1;
            break;
        }
    }
    if(flag==1)
    {
        for(i=0;i<=right-left;i++)
            num[i]=str[left+i];
        num[i]='\0';
        n=atoi(num);
        return n;
    }
    else
        return -1;

}

int comp(const void *a,const void *b)
{
    char *c=(char *)a;
    char *d=(char *)b;
    int n,n1,n2;
    n=digit(c)-digit(d);
    if(n!=0)
        return n;
    n1=strcmp(c,d);
    return n1;
}

void strnumcmp(char str[][maxsize],int total)
{
    qsort(str,total,sizeof(str[0]),comp);
}

int main()
{
    char str[maxnum][maxsize];
    int len,i,n;
    i=0;
    char test[30];
    while(scanf("%s",&str[i]))
    {
        n=++i;
        if(getchar()=='\n')
            break;

    }
    strnumcmp(str,n);
    for(i=0;i<n;i++)
    {
        printf("%s ",str[i]);
    }
    return 0;
}
