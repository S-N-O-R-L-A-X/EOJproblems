#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int len,i;
    char str[9];
    gets(str);
    len=strlen(str);
    printf("%d ",len);
    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}
