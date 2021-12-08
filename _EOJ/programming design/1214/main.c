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
        char str[52];
        int fraction[50];
        gets(str);
        int ans[2000]={0};
        int len=strlen(str)-2;//delete 0.
        int j,k,last,temp;
        for(j=strlen(str)-1;j>=2;j--)//get decimal and reverse
            fraction[strlen(str)-1-j]=str[j]-'0';
        last=0;
        for(j=0;j<len;j++)
        {
            int num=fraction[j];
            for(k=0;k<last||num!=0;k++)
            {
                temp=10*num+ans[k];
                ans[k]=temp/8;
                num=temp%8;
            }
            last=k;//record how many nums have been occupied
        }
        int end =k;
        /*
            reference:
            according to a[0]*x+a[1]*x+a[2]*x^2+...a[n]*x^n
            =a[0]+x(a[1]+x(a[2]+x(...a[n-1]+xa[n])...)))
            ----------------------------------------------------
            when last=0
            it gets the first number(exactly the last one(a[n]))
            the num *10 then /8 and the remainder continues
            we can get the 3 decimal numbers by using this method
            ----------------------------------------------------
            when input is 0.75, a[0]=5,a[1]=7,which means they have been
            expanded 10^(n+1).x=1/8.
            after the first round,ans is 625,
            ----------------------------------------------------
            k<last=>as for all numbers in ans

        */

        printf("case #%d:\n0.",i);
        for(j=0;j<end;j++)
            printf("%d",ans[j]);
        printf("\n");
    }
    return 0;
}


