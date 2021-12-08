#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        scanf(" %d.%d.%d.%d",&a,&b,&c,&d);
        if(a>=0&&a<=255)
        {
            if(b>=0&&b<=255)
            {
                if(c>=0&&c<=255)
                {
                    if(d>=0&&d<=255)
                        printf("case #%d:\nYes\n",i);
                    else
                        printf("case #%d:\nNo 3 %d\n",i,d);
                }
                else
                    printf("case #%d:\nNo 2 %d\n",i,c);
            }
            else
                printf("case #%d:\nNo 1 %d\n",i,b);
        }
        else
            printf("case #%d:\nNo 0 %d\n",i,a);
    }
    return 0;
}
