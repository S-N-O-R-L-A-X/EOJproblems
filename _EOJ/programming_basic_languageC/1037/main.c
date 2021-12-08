    #include <stdio.h>
    #include <stdlib.h>

    void MAXMIN(int *p,int len,int *max,int *min)
    {
        int i;
        *min=p[0];
        *max=p[0];
        for(i=1;i<=len-1;i++)
        {
            if(*max<p[i])
                *max=p[i];
            if(*min>p[i])
                *min=p[i];
        }
    }

    int main()
    {
        int score[6];
        int i;int max,min;
        double output;
        while(1)
        {
            output=0;
            scanf(" %d %d %d %d %d %d",&score[0],&score[1],&score[2],&score[3],&score[4],&score[5]);
            for(i=0;i<=5;i++)//check
            {
                if(score[i]!=0)
                    break;
                if(i==5)
                    return 0;
            }
            for(i=0;i<=5;i++)
            {
                output=score[i]+output;
            }
            MAXMIN(score,6,&max,&min);
            output=(output-max-min)/4;
            if(output-(int)output<1E-7)
                printf("%.0lf\n",output);
            else if(output-(int)output>0.6)
                printf("%.2lf\n",output);
            else if(output-(int)output>0.4)
                printf("%.1lf\n",output);
            else
                printf("%.2lf\n",output);

        }

    }
