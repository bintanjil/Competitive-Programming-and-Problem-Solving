#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int n,r,c;
        cin>>n;
        if(n<=80)
        {

            for(r=1;r<=n;r++)
            {
                for(c=1;c<=n;c++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
            if(i<T)
                cout<<endl;
        }


    }
}
