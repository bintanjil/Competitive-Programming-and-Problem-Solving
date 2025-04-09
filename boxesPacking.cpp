#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}

const int mx=5e3+100;
int a [mx];
int main()
{
optimize();

int n;
cin>>n;
map<int,int>cnt;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    cnt[a[i]]++;
}
int ans=0;
for(int i=0;i<n;i++)
{
    ans=max(ans,cnt[a[i]]);
}
cout<<ans<<endl;
}
