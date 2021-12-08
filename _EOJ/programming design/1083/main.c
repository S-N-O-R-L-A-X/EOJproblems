#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        char str[1001];
        gets(str);
        printf("case #%d:\n",i);
        for(int j=0;j<strlen(str);j++)
        {
            if((str[j]>='A'&&str[j]<='M')||(str[j]>='a'&&str[j]<='m'))
                printf("%c",str[j]+13);//printf("%c",str[j]+'M'-'A'+1);

            else if((str[j]>='N'&&str[j]<='Z')||(str[j]>='n'&&str[j]<='z'))
                printf("%c",str[j]-13);//printf("%c",str[j]-'M'+'A'-1);
            else
                printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
