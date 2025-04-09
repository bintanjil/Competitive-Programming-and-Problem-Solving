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
int n,m;
cin>>n>>m;
map<string,string>ipN;
for(int i=0;i<n;i++)
{
    string name,ip;
    cin>>name>>ip;
    ipN[ip]=name;
}
for(int i=0;i<m;i++)
{
    string s,ip;
    cin>>s>>ip;
    ip.pop_back();
    cout<<s<<" "<<ip<<"; #"<<ipN[ip]<<endl;
}

}
