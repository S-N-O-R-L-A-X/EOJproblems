#include <stdio.h>
#include <stdlib.h>

#define Pi 3.141592653589793

void maxmin(int a[],int len,int *max,int *min)
{
    int i;
    *min =a[0];
    *max =a[0];
    for(i=0;i<=len-1;i++)
    {
        if(*max<a[i])
            *max=a[i];
        if(*min>a[i])
            *min=a[i];
    }
}

int main()
{
    int n,i,j,layer,max,min;
    double s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//test
    {
        s=0;
        scanf(" %d",&layer);
        int r[layer],h[layer];
        for(j=0;j<=layer-1;j++)
            scanf(" %d",&r[j]);
        for(j=0;j<=layer-1;j++)
            scanf(" %d",&h[j]);
        maxmin(r,layer,&max,&min);
        for(j=0;j<=layer-1;j++)
        {
            s=s+2*Pi*r[j]*h[j]+2*Pi*r[j]*r[j];
            if(j<layer-1)
            {
                if(r[j+1]>r[j])
                    s=s-2*Pi*r[j]*r[j];
                else
                    s=s-2*Pi*r[j+1]*r[j+1];
            }


        }

        printf("%.2lf\n",s);
    }
    return 0;
}
