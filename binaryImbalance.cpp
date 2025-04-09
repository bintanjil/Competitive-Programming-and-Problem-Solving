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
while (t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool check=false;
    int zero=0;
    int one=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else one++;
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            check=true;
            break;
        }
    }
    if(zero>one || check)
    {
        cout<<"yes"<<endl;

    }
    else cout<<"no"<<endl;
}
}
