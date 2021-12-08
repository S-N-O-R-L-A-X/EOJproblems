#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a,b,c,n,out;
    scanf("%u",&a);
    scanf("%u",&n);
    b=a<<(32-n);
    c=a>>n;
    out=b|c;

    printf("%u",out);
    return 0;
}
