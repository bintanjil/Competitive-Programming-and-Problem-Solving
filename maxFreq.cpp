//In the Name Of Allah
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
int main()
{
optimize();
string s;
char c;
cin>>c;
getline(cin,s);
s=c+s;
string temp;
vector <string> v;

for(auto u:s)
{
    if(isspace(u))
    {
        v.push_back(temp);
        temp.clear();
    }
    else temp+=u;
}
v.push_back(temp);

map<string,int>cnt;
int maxFreq=0;

for(auto u : v)
{
    cnt[u]++;
    maxFreq=max(maxFreq,cnt[u]);
}
string ans;
for(auto u : v)
{
    if(cnt[u]==maxFreq)
    {
        ans=u;
        break;
    }
}
cout<<ans<<" "<<maxFreq<<endl;

}
