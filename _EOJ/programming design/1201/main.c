#include <stdio.h>
#include <stdlib.h>
char HEX[17]="0123456789ABCDEF";


int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf(" %d",&n);
        printf("case #%d:\n",i);
        DECtoBIN(n);
        DECtoHEX(n);

    }
    return 0;
}

void DECtoBIN(int n)
{
    int ans[20];
    int j=0;
    if(n==0)
        printf("0");
    while(n)
    {
        ans[j++]=n%2;
        n/=2;
    }
    for(j=j-1;j>=0;j--)
        printf("%d",ans[j]);
    printf(" ");
}


void DECtoHEX(int n)
{
    char ans[20];
    int j=0;
    if(n==0)
        printf("0");
    while(n)
    {
        ans[j++]=HEX[n%16];
        n/=16;
    }
    for(j=j-1;j>=0;j--)
        printf("%c",ans[j]);
    printf("\n");
}
