#include <iostream>
#include <stdio.h>

using namespace std;

int Rcount(int arr[],int length,int index)
{
    int Rcnt=0;
    for(int i=index+1;i<length;i++)
    {
        int base=arr[index];
        if(base>arr[i])
            Rcnt++;
    }
    return Rcnt;
}

void solve()
{
    int length;
    cin>>length;
    int arr[length];
    for(int i=0;i<length;i++)
        cin>>arr[i];

    bool flag=true;
    while(flag)
    {
        flag=false;
        for(int i=0;i<length;i++)
        {
            if(arr[i]!=Rcount(arr,length,i))
            {
                arr[i]=Rcount(arr,length,i);
                flag=true;
            }
        }
    }
    printf("%d",arr[0]);
    for(int i=1;i<length;i++)
        printf(" %d",arr[i]);
    printf("\n");
}



int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;
}
