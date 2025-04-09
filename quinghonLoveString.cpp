#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}

bool ch(string s)
{
    for(int i=0;i<s.length();i++)
    if(s[i]!=s[i-1])  return true;

    //return false;
}
int main()
{
optimize();
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int c=0;
    if(ch(s))
    {
        cout<<"YES"<<endl;
    }
    else
    {

           if(ch(t))
           {
               if(s[0]!=t[0] && s[n-1]!=t[m-1]) c=1;
           }

    }
    if(c==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

}
