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

int n;
cin>>n;
vector<pair<string,string>> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i].first>>v[i].second;
}
sort(v.begin(),v.end());
int sz=unique(v.begin(),v.end())-v.begin();
cout<<sz<<endl;
}
