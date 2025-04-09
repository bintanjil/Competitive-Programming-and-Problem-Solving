#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    int flag=0;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                flag=1;
                cout<<(i+1)<<" "<<(j+1);
                break;
            }




        }

    }
    if(flag==0)
        cout<<"IMPOSSIBLE";

}
