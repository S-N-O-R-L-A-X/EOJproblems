#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1025];
    while(gets(str))
    {
        printf("%d\n",strlen(str));
    }
    return 0;
}
