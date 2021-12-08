#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int m,n,i,j;
    while(scanf(" %d/%d",&m,&n)==2)//can't use !=EOF
    {
        int remainder[n],quotient[n];
        /*
        you can consider it a circulating number if the remainder
        has been absent
        */
        for(i=0;i<n;i++)//initialize
        {
            remainder[i]=-1;
            quotient[i]=-1;
        }

        for(i=0;i<=n;i++)
        {
            remainder[m]=i;//show where the beginning is(some repetends don't always appear at first
            m*=10;
            quotient[i]=m/n;
            m=m%n;
            if(m==0)
            {
                printf("0\n");
                break;
            }//not a circulating number

            if(remainder[m]!=-1)
            {
                for(j=remainder[m];j<=i;j++)
                    printf("%d",quotient[j]);
                printf("\n");
                break;
            }
        }
    }
}
/*
struct loop
{
  int arr[1000];
  int len;
  loop();
};

int index(int x,loop *p)
{
    for(int i=0;i<p->len;i++)
    {
        if(p->arr[i]==x)
            return i;
    }
    p->arr[(p->len)++]=x;
    return -1;
}

int main()
{
    int m,n;
    while(scanf(" %d/%d",&m,&n))
    {
        loop a;
        int p=m*10/n;
        int q=m*10%n;//store rest
        if(q==0)
        {
            cout<<0<<endl;
            continue;
        }
        bool flag=false;
        while(index(p,&a)==-1)
        {
            p=q*10/n;
            q=q*10%n;
            flag=true;
            if(q==0)
            {
                cout<<0<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            for(int i=index(p,&a);i<a.len;i++)
                cout<<a.arr[i];
            cout<<endl;
        }
    }
    return 0;
}

loop::loop()
{
    arr[0]={-1};
    len=0;
}*/
