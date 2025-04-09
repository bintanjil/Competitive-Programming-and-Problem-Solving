#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}
int main()
{
optimize();
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    if(is_sorted(v.begin(),v.end())|| k>1)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

}
