#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,out;
    char str[100];
    scanf("%d",&n);getchar();
    for(i=1;i<=n;i++)
    {
        gets(str);
        for(j=0;j<=strlen(str)-1;j++)
        {
            out=str[j]-'a'+1;
            if(out<10)
                printf("0%d",out);
            else
                printf("%d",out);
        }
        printf("\n");
    }
    return 0;
}
