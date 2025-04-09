#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll                  long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,dif;
        double add;
        int cnt;
        cin>>a>>b>>c;
        cnt=0;
        int mn=min(a,b);
        int mx=max(a,b);

        while(mn<mx)
        {
            dif=mx-mn;
            if(c<dif)
            {

                mx-=c;
                mn+=c;
                cnt++;
            }
            else
            {
                add=dif/2;
                mx-=add;
                mn+=add;
                cnt++;

            }

        }
        cout<<cnt;
            cout<<endl;
    }
}
