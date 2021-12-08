#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define maxlength 21
#define maxsize 100
int alphabet[26];
int compf(char a[], char b[])
{
    int i,len1,len2,a1,b1,delta;
    len1=strlen(a);
    len2=strlen(b);
    for(i=0;i<len1&&i<len2;i++)
    {
        a1=toupper(a[i])-'A';
        b1=toupper(b[i])-'A';
        delta=alphabet[a1]-alphabet[b1];

        if(delta!=0)
            return delta;
    }
    if(len1>len2)
        return 1;
    else
        return -1;
}

int comp(const void *a,const void *b)
{
    char *c=(char *)a;
    char *d=(char *)b;
    int n=compf(a,b);
    return n;
}

int main()
{
    char alpha[27];
    char str[maxsize][maxlength];
    int len;
    int i,j,k;
    while(gets(alpha))
    {
        if(strlen(alpha)!=26)
            break;
        for(i=0;i<26;i++)
             alphabet[alpha[i]-'A']=i;

        j=0;
        while(scanf("%s",&str[j]))
        {
            j++;
            if(getchar()=='\n')
                break;
        }
        qsort(str,j,sizeof(str[0]),comp);
        for(i=0;i<j;i++)
            printf("%s ",str[i]);
        printf("\n");

    }
    return 0;
}
