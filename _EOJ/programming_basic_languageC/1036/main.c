#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int GDB( long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return GDB(b,a%b);
}

long long int LCM(long long int a,long long int b)
{
    return a*b/GDB(a,b);
}

int main()
{
    int n,i,j,k,l;

    long long int out;
    char str[100];
    char *temp;
    long long int input[100];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        j=0;k=0;out=1;
        /*gets(str);
        temp=strtok(str," ");
        input[j]=atoi(temp);
        out=out*input[j];
        j++;
        while(temp!=NULL)
        {
            temp=strtok(NULL," ");
            input[j]=atoi(temp);
            if(input[j]!=0)
            {
                out=LCM(out,input[j]);
                j++;
            }
        }*/  //method of cut string
        while(1)
        {
            scanf("%lld",&input[j]);
            l=j;
            j++;
            char c=getchar();
            if(c=='\n')
                break;
        }
        for(j=0;j<=l;j++)
            out=LCM(out,input[j]);

        printf("%lld\n",out);
    }
    return 0;
}
