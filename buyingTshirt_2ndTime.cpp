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

const int mx=2e5+123;
int p[mx];
int a[mx];
int b[mx];
int main()
{
optimize();
int n;
cin>>n;
for(int i=1;i<=n;i++){cin>>p[i];}
for(int i=1;i<=n;i++){cin>>a[i];}
for(int i=1;i<=n;i++){cin>>b[i];}

priority_queue<int,vector<int>,greater<int>>pq[5][5];

for(int i=1;i<=n;i++)
{
    pq[a[i]][b[i]].push(p[i]);
}
int m;
cin>>m;
while(m--)
{
    int c;
    cin>>c;
    int ans=INT_MAX;
    int f,b;
    for(int i=1;i<=3;i++)
    {
        if(!pq[c][i].empty() && pq[c][i].top()<ans)
        {
            ans=pq[c][i].top();
            f=c;
            b=i;
        }
    }
    for(int i=1;i<=3;i++)
    {
        if(!pq[i][c].empty() && pq[i][c].top()<ans)
        {
            ans=pq[i][c].top();
            f=i;
            b=c;
        }
    }

    if(ans== INT_MAX)ans=-1;
    else
    {
        pq[f][b].pop();
    }
    cout<<ans<<" ";
}
cout<<endl;

}
