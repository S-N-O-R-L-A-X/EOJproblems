#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    for(int i=0;i<t;i++)
    {
        string origin;
        string password;
        getline(cin,origin);

        cin>>password;
        getchar();
        printf("case #%d:\n",i);
        int pos=0;
        for(int j=0;j<origin.size();j++)
        {
            if(origin[j]==' ')
            {
                printf(" ");
                continue;
            }
            int tmp=origin[j]+password[pos]-'A';
            char ans=(tmp<='Z'?tmp:tmp-'Z'+'A'-1);
            pos=(pos+1)%password.size();
            cout<<ans;
        }
        printf("\n");
    }
    return 0;
}
