#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[201];
    int i,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<=len-1;i++)
    {
        if(str[i]=='<'&&str[i+1]=='b'&&str[i+2]=='r'&&str[i+3]=='>')
            {
                i=i+3;
                printf("\n");
            }
        else
            printf("%c",str[i]);
    }
    return 0;
}
