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

int t;

    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        int a[n+2];
        map<int,int>cnt;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        int favorite_value = a[f];
        sort(a+1,a+n+1);
        reverse(a+1,a+n+1);
        int f1=0;
        for(int i=1;i<=k;i++)
        {
            if(a[i]==favorite_value) f1++;
        }
        if(cnt[favorite_value]==f1)
        {
            cout<<"YES"<<endl;
        }
        else if(f1>=1)
        {
            cout<<"MAYBE"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



        }





}
