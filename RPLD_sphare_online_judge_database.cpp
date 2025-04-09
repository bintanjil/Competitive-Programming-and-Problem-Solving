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
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
    int N,R;
    cin>>N>>R;
    map<pair<int,int>,bool>vis;
    bool done=1;
    while(R--)
    {
        int a,b;
        cin>>a>>b;
        if(vis[{a,b}]) done=0;
        vis[{a,b}]=1;
    }
    if(done==1) cout<<"Scenario #"<<i<<": possible"<<endl;
    else cout<<"Scenario #"<<i<<": impossible"<<endl;
}

}
