#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[81];
    char str2[81];
    int len1,len2,i;
    scanf("%s",str1);
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1<len2)
    {
        for(i=0;i<=len1-1;i++)
            printf("%c%c",str1[i],str2[i]);
        for(i=len1;i<=len2-1;i++)
            printf("%c",str2[i]);

    }
    else
    {
        for(i=0;i<=len2-1;i++)
            printf("%c%c",str1[i],str2[i]);
        for(i=len2;i<=len1-1;i++)
            printf("%c",str1[i]);
    }
    return 0;
}
