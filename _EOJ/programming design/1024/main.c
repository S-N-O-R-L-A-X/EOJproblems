#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a,const void *b);

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        char str[501];
        gets(str);
        char *word[250];
        word[0]=strtok(str,",.!? ");
        int j=0,n=0;

        while(word[j])
        {
            word[++j]=strtok(NULL,",.!? ");
            n=j;
        }

        qsort(*word,n,sizeof(char *),cmp);
        printf("case #%d:\n",i);
        printf("%s",word[0]);
        for(int j=1;j<n;j++)
        {
            if(strcmp(word[j],word[j-1]))
                printf(" %s",word[j]);
        }
        printf("\n");
    }
    return 0;
}

int cmp(const void *a,const void *b)
{
    char *c=(char *)a;
    char *d=(char *)b;
    return strcmp(c,d);
}
