#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char output[6][20]={"Excellent","Cheer","Nice","Ultimate",
                    "I'm possible","Accept More"};
    char cmp[6][20]={"E","C","N","U","Impossible","ACM"};
    char str[20];
    int n,i,j,sgn;
    scanf("%d ",&n);
    for(i=1;i<=n;i++)
    {
        gets(str);
        for(j=0;j<=5;j++)
        {
            if(strcmp(cmp[j],str)==0)
                sgn=j;
        }
        printf("%s\n",output[sgn]);
    }
    return 0;
}
