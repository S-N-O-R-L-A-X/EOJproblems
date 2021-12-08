#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main()
{
    char str[1000];
    gets(str);
    int i,n;
    n=strlen(str);
    for(i=0;i<=n-1;i++)
    {
        printf("%c",toupper(str[i]));
    }

    return 0;
}
