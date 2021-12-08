    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int r,w,l,cnt;
        cnt=1;
        while(scanf(" %d %d %d",&r,&w,&l)&&r!=0)
        {
            if(l*l+w*w<=4*r*r)
                printf("Pizza %d fits on the table.\n",cnt);
            else
                printf("Pizza %d does not fit on the table.\n",cnt);
            cnt++;
        }
        return 0;
    }
