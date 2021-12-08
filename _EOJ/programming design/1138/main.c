#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
    int t,i,j,len;
    char str[51];
    scanf("%d",&t);
    getchar();
    for(i=0;i<=t-1;i++)
    {
        gets(str);
        len=strlen(str);
        printf("case #%d:\n",i);
        for(j=0;j<=len-1;j++)
        {
            if(str[j]=='Z')
                printf("A");
            else
                printf("%c",str[j]+1);
        }
        printf("\n");
    }
    return 0;
}
