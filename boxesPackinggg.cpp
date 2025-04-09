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

const int mx=5e3+123;
int arr[mx];
int main()
{
optimize();
int n;
cin>>n;
map<int,int>cnt;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    cnt[arr[i]]++;
}
int ans=INT_MIN;

for(int i=0;i<n;i++)
{
    ans=max(ans,cnt[arr[i]]);
}
cout<<ans<<endl;
}
