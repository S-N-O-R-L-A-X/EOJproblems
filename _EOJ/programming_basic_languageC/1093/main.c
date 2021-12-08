#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    scanf("%c",&input);
    switch(input)
    {
        case 'E':printf("Excellent");break;
        case 'C':printf("Cheer");break;
        case 'N':printf("Nice");break;
        case 'U':printf("Ultimate");break;
        case 'A':printf("Accept");break;
        default:printf("Error");break;
    }
    return 0;
}
