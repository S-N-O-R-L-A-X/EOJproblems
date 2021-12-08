#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[51];
    char str2[51];
    int n,i;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(str1);
        gets(str2);
        if(strstr(str1,str2)!=NULL)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
