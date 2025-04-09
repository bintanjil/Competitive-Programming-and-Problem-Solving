#include <bits/stdc++.h>
using namespace std;
#define endl       '\n'
int cnt[100000];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=4*n;
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cnt[i]=0;
        }

        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=x; i++)
        {
            cnt[arr[i]]++;
        }
        for(int i=1;i<=n; i++)
        {
            if(cnt[i]<4)
            {
                cout<<i;
            }
        }


    }
}
