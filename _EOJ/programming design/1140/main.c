#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define maxsize 101
int cmp(const void *a,const void *b);
double freq[26];

int main()
{
    int t,i,j,k,l;
    scanf(" %d",&t);
    for(i=0;i<t;i++)
    {
        char str[maxsize];
        for(j=0;j<26;j++)
            scanf(" %lf",&freq[j]);
        getchar();
        gets(str);
        qsort(str,strlen(str),sizeof(char),cmp);
        printf("case #%d:\n",i);
        for(j=0;j<strlen(str);j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}

int cmp(const void *a,const void *b)
{
    char *c=(char *)a;
    char *d=(char *)b;
    double p=freq[tolower(*c)-'a'];
    double q=freq[tolower(*d)-'a'];
    if(p!=q)
        return p>q?-1:1;
    else//in case some alphas have the same frequency
    {
        if(tolower(*c)==tolower(*d))//alpha the same
            return *d-*c;//return difference between uncapitalized and capitalized
        else//alpha not the same
            return tolower(*c)-tolower(*d);//return ascending order
    }
}
