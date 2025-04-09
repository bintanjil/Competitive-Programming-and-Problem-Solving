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
for(int i=1;i<=t;i++)
{
    int n,r;
    cin>>n>>r;
    map<pair<int,int>,bool> vis;
    bool done=1;
   while ( r-- ) {
            int a, b;
            cin >> a >> b;

            if ( vis[{a, b}] ) done = 0;
            vis[{a, b}] = 1;
        }

        if ( done == 1 ) cout << "Scenario #" << t << ": possible" << endl;
        else cout << "Scenario #" << t << ": impossible" << endl;

}

}
