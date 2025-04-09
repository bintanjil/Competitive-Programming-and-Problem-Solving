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
int n;
cin>>n;
int arr[100001];
for(int i=1;i<=n;++i)
{
    int a;
    cin>>a;
    arr[a]=i;
}
int q;
cin>>q;
ll v=0;
ll p=0;
while(q--)
{
    int b;
    cin>>b;
    v+=arr[b];
    p+=(n+1-arr[b]);
}
cout<<v<<" "<<p<<endl;

}
