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
int k,n,w;
cin>>k>>n>>w;
int total_cost=0;
int b=0;
for(int i=1;i<=w;i++)
{
    total_cost+=i*k;
    b=total_cost-n;
    if(b<1)
    {
        b=0;
    }
}
cout<<b<<endl;
}
