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

void solve(){
    int n;
    cin>>n;
    int x = 0;
    int z=0;
    for(int i=0; i<n; i++){
        int y;
        cin>>y;
        if(y < 0) x++;
        if(y==0) z = 1;
    }
    if(x%2){
        cout << 0 << endl;
    }
    else {
        if(z) cout << 0 << endl;
        else cout << 1  << endl << "1 0" << endl;
    }
}


int main()
{
optimize();

int t=1;
    cin>>t;
    for(int i=0; i<t; i++)
        solve();


	return 0;
}
