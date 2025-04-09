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
const int x=2e4+123;

int main()
{
optimize();
int n;
cin>>n;
int left[10001],right[10001];
int l0=0,l1=0,r0=0,r1=0;
for(int i=0;i<n;i++)
{
    cin>>left[i]>>right[i];


}
for(int i=0;i<n;i++)
{
    if(left[i]==1) l1++;
    else l0++;

}
int ans=min(l0,l1);
for(int i=0;i<n;i++)
{
    if(right[i]==1) r1++;
    else r0++;

}


ans+=min(r0,r1);

cout<<ans<<endl;

}
