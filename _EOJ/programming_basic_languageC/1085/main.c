#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,k,n,temp,iaverage,flag;
    double account,sum,average;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        flag=1;//judge whether the left of . is zero
        int portion[20]={0};
        sum=0;
        for(j=0;j<=11;j++)
        {
            scanf(" %lf",&account);
            sum+=account;
            average=sum/12;
        }
        printf("%d $",i);
        temp=100*(average+0.005);
        portion[0]=temp%100;//store fraction
        iaverage=(int)average;//int of average
        k=1;
        while(iaverage>0)
        {
            portion[k]=iaverage%1000;
            iaverage=iaverage/1000;
            k++;
        }
        j=k-1;
        for(k=k-1;k>=1;k--)
        {
            if(k==j)
                printf("%d",portion[k]);
            else
            {
                printf(",");
                if(portion[k]<100)
                    printf("0");
                if(portion[k]<10)
                    printf("0");
                printf("%d",portion[k]);

            }
            flag=0;
        }
        if(flag)
        {
            if(portion[0]<10)
                printf("0.0%d\n",portion[0]);
            else
                printf("0.%d\n",portion[0]);
        }
        else
        {
            if(portion[0]<10)
                printf(".0%d\n",portion[0]);
            else
                printf(".%d\n",portion[0]);
        }

    }
    return 0;
}
