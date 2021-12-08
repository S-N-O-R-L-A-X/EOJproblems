#include <iostream>

using namespace std;

int main()
{
    int y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    if((y%4==0&&y%100!=0)||y%400==0)//leap year
    {
        switch(m)
        {
        case 1:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d<<endl;
                break;
            }
        case 2:
            if(d<1||d>29)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+31<<endl;
                break;
            }
        case 3:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+60<<endl;
                break;
            }
        case 4:
            if(d<1||d>30)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+91<<endl;
                break;
            }
        case 5:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+121<<endl;
                break;
            }
        case 6:
            if(d<1||d>30)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+152<<endl;
                break;
            }
        case 7:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+182<<endl;
                break;
            }
        case 8:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+213<<endl;
                break;
            }
        case 9:
            if(d<1||d>30)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+244<<endl;
                break;
            }
        case 10:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+274<<endl;
                break;
            }
        case 11:
            if(d<1||d>30)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+305<<endl;
                break;
            }
        case 12:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+335<<endl;
                break;
            }
        default:cout<<"-1";break;
        }
    }
    else//not leap year
    {
        switch(m)
        {
        case 1:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d<<endl;
                break;
            }
        case 2:
            if(d<1||d>28)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+31<<endl;
                break;
            }
        case 3:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+59<<endl;
                break;
            }
        case 4:
            if(d<1||d>30)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+90<<endl;
                break;
            }
        case 5:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+120<<endl;
                break;
            }
        case 6:
            if(d<1||d>30)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+151<<endl;
                break;
            }
        case 7:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+181<<endl;
                break;
            }
        case 8:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+212<<endl;
                break;
            }
        case 9:
            if(d<1||d>30)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+243<<endl;
                break;
            }
        case 10:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+273<<endl;
                break;
            }
        case 11:
            if(d<1||d>30)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+304<<endl;
                break;
            }
        case 12:
            if(d<1||d>31)
            {
                cout<<"-1";
                break;
            }
            else
            {
                cout<<d+334<<endl;
                break;
            }
        default:cout<<"-1";break;
        }
    }


    return 0;
}
