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
int cnt=0;
int s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;

if(s1!=s2) cnt++;

else if(s1!=s3) cnt++;
else if(s1!=s4) cnt++;
else if(s2!=s3) cnt++;
else if(s2!=s4) cnt++;
else if(s3!=s4) cnt++;
cout<<cnt<<endl;
}
