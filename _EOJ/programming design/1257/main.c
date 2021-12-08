#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int len;
        scanf(" %d",&len);
        getchar();
        char str[len];
        gets(str);
        int front=0,rear=len-1;
        printf("case #%d:\n",i);
        while(front<=rear)
        {
            if(str[front]<str[rear])
                printf("%c",str[front++]);
            else if(str[front]==str[rear])
            {
                int j=front;int k=rear;
                int flag=1;
                while(j<=k)
                {
                    if(str[j]<str[k])
                        break;
                    else if(str[j]>str[k])
                    {
                        flag=0;
                        break;
                    }
                    else
                    {
                        j++;
                        k--;
                    }
                }
                if(flag)
                    printf("%c",str[front++]);
                else
                    printf("%c",str[rear--]);
            }
            else
                printf("%c",str[rear--]);
        }
        printf("\n");
    }

    return 0;
}
