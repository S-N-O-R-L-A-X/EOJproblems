#include <iostream>

using namespace std;

void print(int arr[])
{
    for(int i=9;i>=0;i--)
    {
        for(int j=0;j<arr[i];j++)
            cout<<i;
    }
}

bool checkOTHERS(int arr[],int num)
{
    for(int i=0;i<=9;i++)
    {
        if(i==num)
            continue;
        if(arr[i]!=0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int arr[10]={0},idx=-1;
        for(int j=0;j<10;j++)
            cin>>arr[j];

        if(arr[0]==2)
            print(arr);
        else if(arr[0]==1)
        {
            for(int j=2;j<=8;j+=2)
            {
                if(arr[j]>0)
                {
                    arr[j]--;
                    arr[0]--;
                    idx=j;
                    break;
                }
            }
            if(idx==-1)
                cout<<'0';
            else
            {
                print(arr);
                cout<<idx<<'0';
            }

        }
        else
        {
            if(arr[1]>0&&arr[2]>0)
            {
                arr[1]--;
                arr[2]--;
                print(arr);
                cout<<"12";
            }
            else if(arr[3]>0&&arr[2]>0)
            {
                arr[3]--;
                arr[2]--;
                print(arr);
                cout<<"32";
            }
            else if(arr[2]>0&&arr[4]>0)
            {
                arr[4]--;
                arr[2]--;
                print(arr);
                cout<<"24";
            }
            else if(arr[4]>1)
            {
                arr[4]-=2;
                print(arr);
                cout<<"44";
            }
            else if(arr[5]>0&&arr[2]>0)
            {
                arr[5]--;
                arr[2]--;
                print(arr);
                cout<<"52";
            }
            else if(arr[1]>0&&arr[6]>0)
            {
                arr[1]--;
                arr[6]--;
                print(arr);
                cout<<"16";
            }
            else if(arr[3]>0&&arr[6]>0)
            {
                arr[3]--;
                arr[6]--;
                print(arr);
                cout<<"36";
            }
            else if(arr[6]>0&&arr[4]>0)
            {
                arr[6]--;
                arr[4]--;
                print(arr);
                cout<<"64";
            }
            else if(arr[5]>0&&arr[6]>0)
            {
                arr[5]--;
                arr[6]--;
                print(arr);
                cout<<"56";
            }
            else if(arr[7]>0&&arr[2]>0)
            {
                arr[7]--;
                arr[2]--;
                print(arr);
                cout<<"72";
            }
            else if(arr[7]>0&&arr[6]>0)
            {
                arr[7]--;
                arr[6]--;
                print(arr);
                cout<<"76";
            }
            else if(arr[8]>0&&arr[2]>0)
            {
                arr[8]--;
                arr[2]--;
                print(arr);
                cout<<"28";
            }
            else if(arr[4]>0&&arr[8]>0)
            {
                arr[8]--;
                arr[4]--;
                print(arr);
                cout<<"84";
            }
            else if(arr[6]>0&&arr[8]>0)
            {
                arr[8]--;
                arr[6]--;
                print(arr);
                cout<<"68";
            }
            else if(arr[8]>1)
            {
                arr[8]-=2;
                print(arr);
                cout<<"88";
            }
            else if(arr[9]>0&&arr[2]>0)
            {
                arr[9]--;
                arr[2]--;
                print(arr);
                cout<<"92";
            }
            else if(arr[9]>0&&arr[6]>0)
            {
                arr[9]--;
                arr[6]--;
                print(arr);
                cout<<"96";
            }
            else if(arr[4]>0&&checkOTHERS(arr,4))
                cout<<'4';
            else if(arr[8]>0&&checkOTHERS(arr,8))
                cout<<'8';
            else
                cout<<'0';

        }


        cout<<endl;
    }
    return 0;
}
