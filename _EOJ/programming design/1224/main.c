#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _bigint
{
    int cnt;//count digit
    int arr[335];
}BigInt;

void DECtoBIN(BigInt *x,BigInt *y);
void BINtoDEC(BigInt *x,BigInt *y);

int main()
{
    char digit[101];
    char str[101];
    int t,temp;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        BigInt x={0,0},y={0,0},z={0,0};
        int j,k,remainder;
        scanf("%s",&str);//gets can't be used because the input may exceed a line
        x.cnt=strlen(str);
        if(str[0]=='0'&&x.cnt==1)//0 is a special situation in which x.cnt will be 0 at last so  nothing will be shown
            printf("case #%d:\n0\n",i);
        else
        {
            for(j=0;j<x.cnt;j++)
                x.arr[j]=str[x.cnt-1-j]-'0';//can be calculated from the beginning when mod

            DECtoBIN(&x,&y);
            BINtoDEC(&y,&z);
            printf("case #%d:\n",i);
            for(j=z.cnt-1;j>=0;j--)
                printf("%d",z.arr[j]);
            printf("\n");
        }
    }

    return 0;
}

void DECtoBIN(BigInt *x,BigInt *y)
{
    while(x->cnt)
    {
        y->arr[y->cnt++]=x->arr[0]%2;
        //the division of big int
        int remainder=0,temp;
        if(x->arr[x->cnt-1]==1)
        {
            x->cnt--;
            remainder=1;
        }
        for(int k=x->cnt-1;k>=0;k--)
        {
            temp=10*remainder+x->arr[k];
            x->arr[k]=temp/2;
            remainder=temp%2;
        }
    }
}

void BINtoDEC(BigInt *y,BigInt *z)
{
    int temp,j,k;
    for(j=0;j<y->cnt;j++)
    {
        int carry=y->arr[j];
        for(k=0;k<z->cnt;k++)
        {
            temp=carry+z->arr[k]*2;
            z->arr[k]=temp%10;
            carry=temp/10;
        }
        if(carry>0)
        {
            z->arr[z->cnt]=carry;
            z->cnt++;
        }
    }
    /*
    reference:
    a0+a1*x+a2*x^2+a3*x^3+...an*x^n=a0+x(a1+x(a2+x(a3...x(an-1+x*an)...)))
    ak should be added in ones place,and x is 2 here,which means every digit in array should be doubled
    so before the for,carry is ak and then carry is itself
    */
}
