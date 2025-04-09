#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) { return (a*(b/gcd(a,b)));  }
int main()
{
optimize();

string s;
cin>>s;

int sz=s.size();
for(int i=0;i<sz;i++)
{
    if(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='Y' ||s[i]=='y' )
    {
        s.erase(remove(s.begin(),s.end(),'s[i]'),s.end());

    }
    else
    {
        char c=tolower(s[i]);
        cout<<'.'<<c;
    }
}
}
