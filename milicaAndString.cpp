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
while(t--)
{
    int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int countB=0;
   for(auto it: s)if(it=='B')countB++;
   if(countB>k)
   {
       int temp=(countB-k);
       int count=0;
       for(int i=0;i<n;i++)
       {
          if(s[i]=='B') count++;
          if(count==temp)
          {
             cout<<1<<endl;
             cout<<i+1<<" "<<"A"<<endl;
            // return;
          }
       }
   }
   else if(countB<k)
   {
       int temp=(k-countB);
        int count=0;
       for(int i=0;i<n;i++)
       {
          if(s[i]=='A') count++;
          if(count==temp)
          {
             cout<<1<<endl;
             cout<<i+1<<" "<<"B"<<endl;
            // return;
          }
       }
   }
   else
   {
       cout<<0<<endl;
      // return;
   }
}}
