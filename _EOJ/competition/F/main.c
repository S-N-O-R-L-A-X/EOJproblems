#include <stdio.h>
#include <stdlib.h>

int max(int x,int y)
{
    if (x>y)
        return x;
    else
        return y;
}

int min(int x,int y)
{
    if(x>y)
        return y;
    else
        return x;
}

int fold(int a,int b)
{
    int cnt,c,d;
    c=max(a,b);
    d=min(a,b);
    cnt=0;
    while(c>=2*d)
    {
        cnt++;
        if(c%2==0)
            c=c/2;
        else
            c=(c+1)/2;
    }
    if(c!=d)
        cnt++;
    return cnt;
}

int main()
{
    int W,H,w,h;
    int cnt;
    scanf("%d %d",&W,&H);
    scanf(" %d %d",&w,&h);

    if(max(W,H)<max(w,h))
        printf("-1");
    else
        printf("%d",min(fold(W,w)+fold(H,h),fold(W,h)+fold(H,w)));

}


/*
int main()
{
    double W,H,w,h;
    int cnt;
    scanf("%lf %lf",&W,&H);
    scanf(" %lf %lf",&w,&h);
    cnt=0;
    if(W<w&&H<w||W<h&&H<h)
        printf("-1");
    else
    {
        if(W-H<1E-6)
        {
            if(w-h<1E-6)
            {
                while(W-2*w>1E-6)
                {
                    cnt++;
                    W/=2;
                }
                if(W-w>1E-6)
                    cnt++;
                while(H-2*h>1E-6)
                {
                    cnt++;
                    H/=2;
                }
                if(H-h>1E-6)
                    cnt++;
            }
            else
            {
                while(H-2*w>1E-6)
                {
                    cnt++;
                    H/=2;
                }
                if(H-w>1E-6)
                    cnt++;
                while(W-2*h>1E-6)
                {
                    cnt++;
                    W/=2;
                }
                if(W-h>1E-6)
                    cnt++;
            }
        }
        else
        {
            if(w-h>1E-6)
            {
                while(W-2*w>1E-6)
                {
                    cnt++;
                    W/=2;
                }
                if(W-w>1E-6)
                    cnt++;
                while(H-2*h>1E-6)
                {
                    cnt++;
                    H/=2;
                }
                if(H-h>1E-6)
                    cnt++;
            }
            else
            {
                while(H-2*w>1E-6)
                {
                    cnt++;
                    H/=2;
                }
                if(H-w>1E-6)
                    cnt++;
                while(W-2*h>1E-6)
                {
                    cnt++;
                    W/=2;
                }
                if(W-h>1E-6)
                    cnt++;
            }
        }
        printf("%d",cnt);


    }

    return 0;
}
*/
