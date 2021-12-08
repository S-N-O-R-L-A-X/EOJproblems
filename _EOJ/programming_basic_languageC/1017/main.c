#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char comp[37]={'0','1','2','3','4','5','6','7','8','9','A','B','C',
                    'D','E','F','G','H','I','J','K','L','M','N','O','P',
                    'Q','R','S','T','U','V','W','X','Y','Z'};
void Transfer(int n,int r,char *p)
{
    int i,index;
    i=0;
    while(n!=0)
    {
        index=n%r;
        p[i]=comp[index];
        n=n/r;
        i++;
    }
    p[i]='\0';
}


int main()
{
    int n,i,r,t;
    char str[33];
    int len,j;
    char ans[100];

    scanf(" %d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %d %d",&n,&r);

        if(n>0)
        {
            Transfer(n,r,ans);
            for(j=strlen(ans)-1;j>=0;j--)
                printf("%c",ans[j]);
        }
        else if(n==0)
            printf("0\n");
        else
        {
            Transfer(-n,r,ans);
            printf("-");
            for(j=strlen(ans)-1;j>=0;j--)
                printf("%c",ans[j]);
        }
        printf("\n");

    }
    return 0;
}
