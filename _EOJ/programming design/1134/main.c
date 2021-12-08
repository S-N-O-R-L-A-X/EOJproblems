#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cnt[27]={0};
    char str[10000];
    int len,i,j,k,index,max;
    double f;
    gets(str);
    len=strlen(str);
    for(i=0;i<=len-1;i++)
    {
        if(str[i]==' ')
            cnt[0]++;//record amount of ' '
        else
        {
            index=str[i]-'a'+1;
            cnt[index]++;
        }

    }
    max=cnt[1];
    j=1;
    for(i=2;i<=26;i++)
    {
        if(max<cnt[i])
        {
            max=cnt[i];
            j=i;
        }
    }
    f=(double)max/(len-cnt[0]);
    printf("%c %.2lf",j+'a'-1,f);
    return 0;
}
