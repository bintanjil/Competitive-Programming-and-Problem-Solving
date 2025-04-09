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
bool cmp(const pair<string, pair<int, int>>& a, const pair<string, pair<int, int>>& b) {
    if(a.second.first>b.second.first) return 1;
    else if (a.second.first==b.second.first) {return (a.second.second<b.second.second);}
    return 0;
}
int main()
{
optimize();

int n;
cin>>n;
vector<pair<string,pair<int, int>>> v;
for(int i=0;i<n;i++)
{
    string s;
    int solve,penalty;
    cin>>s>>solve>>penalty;
    v.push_back(make_pair(s,make_pair(solve, penalty) ));


}
sort(v.begin(),v.end(),cmp);

for(auto u : v)
{
    cout<<u.first<<" "<<u.second.first<<" "<<u.second.second;
    cout<<endl;
}

}
