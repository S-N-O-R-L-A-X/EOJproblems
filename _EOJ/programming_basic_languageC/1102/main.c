#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    while(scanf(" %d",&n)!=EOF)
    {
        getchar();//eat '\n'
        char name[n][51];
        char chair[n+1];
        int i,second;
        for(i=0;i<n;i++)
            gets(name[i]);
        gets(chair);
        scanf(" %d",&second);
        int place;
        for(i=0;i<strlen(chair);i++)
        {
            if(chair[i]=='.')
                place=i;
        }

        int change=second%n;
        place-=change;
        if(place<0)
            place+=n;
        printf("%s\n",name[place]);
    }
    return 0;
}
