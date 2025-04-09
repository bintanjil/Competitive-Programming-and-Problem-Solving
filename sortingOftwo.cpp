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
while(t--)
{
        int n;
    cin>>n;
    int arr[n];
    int chk=1;
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            if(!isPowerofTwo(i)){

            chk=0;

            }
        }
    }
    if(chk==0) cout<<"NO"<<endl;

    cout << "YES" << endl;


}

}
