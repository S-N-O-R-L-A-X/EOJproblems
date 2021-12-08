#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k,n,index;
    char str[1001];
    char password[27];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(str);
        gets(password);
        printf("%d ",i);
        for(j=0;j<=strlen(str)-1;j++)
        {
            index=str[j]-'A';

            if(index>=0)
                printf("%c",password[index]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
