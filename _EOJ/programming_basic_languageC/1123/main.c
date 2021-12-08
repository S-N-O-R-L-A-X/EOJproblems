#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int cnt,i;
    char *p=(char *)malloc(100*sizeof(char));
    gets(p);
    cnt=0;
    for(i=0;i<=strlen(p)-1;i++)
    {
        if(isdigit(p[i]))
            cnt++;
    }
    printf("%d",cnt);
    free(p);
    return 0;
}
