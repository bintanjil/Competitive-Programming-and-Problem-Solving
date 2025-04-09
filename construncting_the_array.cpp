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
int a[mx];
int main()
{
optimize();
int t;
cin>>t;
while(t--)
{
    priority_queue<pair<int,int>>q;
    int n;
    cin>>n;
    q.push({n,-1});
    int cnt=1;
    while(!q.empty())
    {
        int l=q.top().second*-1;
        int len=q.top().first;
        q.pop();
        int r=l+len-1;
        int mid;
        if(len%2)
        {
            mid=(l+r)/2;
        }
        else
        {
            mid=(l+r-1)/2;
        }
        a[mid]=cnt;
        cnt++;
        int l1,r1,l2,r2;
        l1=l;
        r1=mid-1;
        l2=mid+1;
        r2=r;
        if(l1<=r1){q.push({r1-l1+1,-l1});}
        if(l2<=r2){q.push({r2-l2+1,-l2});}
    }
    for ( int i = 1; i <= n; i++ ) {cout << a[i] << " ";}
    cout << endl;

}


}
