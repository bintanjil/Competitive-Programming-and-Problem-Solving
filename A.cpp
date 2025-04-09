

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>s(n);
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        ll sn =LLONG_MAX;
        for(int i=1; i<n; i++)
        {
            if(s[i]>s[i-1])
            {
                sn=0;
                break;

            }
            sn = min(sn,((s[i]-s[i-1])/2ll)+1ll);
        }
        cout<<sn<<endl;

    }


    return 0;
}
