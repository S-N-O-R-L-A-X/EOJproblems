#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,y,a,b,z,p,n,out;
    scanf("%u %u %u",&x,&p,&n);
    y=x;
    z=x;
    a=x>>(p+1);//求反部分的左边
    a=a<<(p+1);
    if(p<n)
    {
        b=0;
        x=x>>(p-n+1);
        x=x<<(32-n);
        x=~x;
        x=x>>(32-n);
        x=x<<(p-n+1);
        out=a|b|x;
        printf("%u",out);
    }
    else
    {
        b=x<<(30-p+n);//求反部分的右边
        b=b>>(30-p+n);
        x=x>>(p-n+1);
        x=x<<(32-n);
        x=~x;
        x=x>>(32-n);
        x=x<<(p-n+1);
        out=a|b|x;
        printf("%u",out);
    }

    return 0;
}
