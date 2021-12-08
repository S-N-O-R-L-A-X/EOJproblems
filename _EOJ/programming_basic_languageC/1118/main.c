#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("H");break;
        case 2:printf("A");break;
        case 3:printf("C");break;
        case 4:printf("K");break;
        case 5:printf("I");break;
        case 6:printf("N");break;
        default:printf("G");break;
    }

    return 0;
}
