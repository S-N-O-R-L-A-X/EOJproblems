#include <iostream>

using namespace std;

/*
reference:
Usually,we will think of finding the position of RBYG,
and then find how many !s in their places,
but this question will become complicated if you do so.
This problem needs reverse thinking,first you count how many !s
in %4 places,and then you find the relationship between the position
and the lights.
*/

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string str;
        cin>>str;
        int cnt[4]={0};
        int len=str.size();
        int ini=(len-1)%4;
        int bulb[4]={-1,-1,-1,-1};//in case the last char and its ancestors are always !
        for(int j=0;j<len;j++)
        {
            if(str[j]=='!')
                cnt[j%4]++;
            else
            {
                if(str[j]=='R')
                    bulb[0]=j%4;//the pos of R
                else if(str[j]=='B')
                    bulb[1]=j%4;//the pos of B
                else if(str[j]=='Y')
                    bulb[2]=j%4;//the pos of Y
                else
                    bulb[3]=j%4;//the pos of G
            }
        }
        for(int j=0;j<4;j++)
        {
            if(bulb[j]==-1)//haven't find the pos
            {
                int s=0;
                for(int k=0;k<4;k++)
                {
                    if(k==j)
                        continue;
                    s+=bulb[k];
                }
                bulb[j]=6-s;//0,1,2,3
            }
        }
        printf("case #%d:\n",i);
        printf("%d %d %d %d\n",cnt[bulb[0]],cnt[bulb[1]],cnt[bulb[2]],cnt[bulb[3]]);
    }
    return 0;
}
