
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

int pressed[4][4];
int toggled[4][4];
int main()
{
optimize();
for(int i=1;i<=3;i++)
{
    for(int j=1;j<=3;j++)
    {
        cin>>pressed[i][j];
        toggled[i][j]=pressed[i][j];
    }
}
for(int i=1;i<=3;i++)
{
    for(int j=1;j<=3;j++)
    {
        if(pressed[i][j]!=0)
        {
            toggled[i][j-1]+=pressed[i][j];
            toggled[i][j+1]+=pressed[i][j];
            toggled[i-1][j]+=pressed[i][j];
            toggled[i+1][j]+=pressed[i][j];

        }
    }
}
for(int i=1;i<=3;i++)
{
    for(int j=1;j<=3;j++)
    {
        if(toggled[i][j]%2==0)
        {
            cout<<"1";
        }
        else cout<<"0";
    }
    cout<<endl;
}

}
