#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cnt,row,longest;
    char str[200];
    cnt=0;row=0;longest=0;
    while(gets(str)&&strlen(str)!=0)
    {
        cnt=cnt+strlen(str);
        row++;
        if(longest<strlen(str))
            longest=strlen(str);
    }
    printf("%d,%d,%d",cnt,row,longest);
    return 0;
}
