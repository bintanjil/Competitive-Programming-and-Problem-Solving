#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}
bool isPalindrome(string s){ll i=0,j=s.size()-1;for(i,j;i<=j;i++,j--){if(s[i]!=s[j]) return 0;}return 1;}
bool isPowerofTwo(ll n){return (n && !(n&(n-1)));}


bool isPrime(int n)
{

    if (n <= 1)
        return false;


    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
optimize();

int n,m;
cin>>n>>m;
vector<int>v;
for(int i=n;i<=m;i++)
{
    if(isPrime((i)))
    {
        v.push_back(i);
    }
}
if(!v.empty())
{
    if(v[0]=n && v[1]==m)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
}
