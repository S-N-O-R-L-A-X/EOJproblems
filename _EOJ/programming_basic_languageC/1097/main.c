#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ipower(int x,int y)
{
    int i;
    int out=1;
    for(i=1;i<=y;i++)
        out=out*x;
    return out;
}


int main()
{
    int n,i,j,k,x,len,index;
    int sum;
    char comp[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E',
                    'F','G','H','I','J','K','L','M'};
    char str[4];
    char input[100];
    char ans[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        getchar();
        j=0;sum=0;
        scanf("%s",str);

        if(strcmp(str,"DEC")==0)
        {
            scanf(" #%s",input);
            len=strlen(input);
            for(j=len-1;j>=0;j--)
            {
                for(k=0;k<=22;k++)
                {
                    if(input[j]==comp[k])
                        sum=sum+k*ipower(23,len-1-j);
                }
            }
            printf("%d\n",sum);
        }
        else
        {
            scanf(" %d",&x);
            if(x==0)
                printf("#0\n");
            else
            {
                while(x>0)
                {
                    index=x%23;
                    ans[j]=comp[index];
                    j++;
                    x=x/23;
                }
                printf("#");
                for(j=j-1;j>=0;j--)
                    printf("%c",ans[j]);
                printf("\n");
            }

        }


    }
    return 0;
}
