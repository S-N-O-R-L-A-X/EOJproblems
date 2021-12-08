#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[10001];
    int i;
    while(gets(str)&&str[0]!=EOF)
    {
        for(i=strlen(str)-1;i>=0;i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
