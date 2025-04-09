#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}
int a[5][5];
int main()
{
optimize();
int x=0;
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=5;j++)
    {
        cin>>x;
        if(x==1)
        {
            cout<<abs(i-3)+abs(j-3)<<endl;
        }
    }
}

}
