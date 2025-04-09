#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
optimize();
int t;
cin>>t;
while(t--)
{
    int n;
    int cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%2!=0) cnt++;
    }
    if(cnt%2==0)
    {
        cout<<"yes"<<endl;

    }
    else
    {
        cout<<"no"<<endl;
    }

}


}
