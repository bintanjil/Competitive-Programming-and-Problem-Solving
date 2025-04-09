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
string s;
cin>>n;
cin>>s;
int cnt_a=0;
int cnt_d=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='A') cnt_a++;
    else if(s[i]=='D') cnt_d++;
}
if(cnt_a>cnt_d)
{
    cout<<"Anton"<<endl;
}
else if(cnt_d>cnt_a) cout<<"Danik"<<endl;

else cout<<"Friendship"<<endl;
}
