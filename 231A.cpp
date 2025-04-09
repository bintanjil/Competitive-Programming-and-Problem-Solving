
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
int n;
cin>>n;
int arr[n][3];

int prb=0;

for(int i=0;i<n;i++)
{

    for(int j=0;j<3;j++)
    {
        cin>>arr[i][j];


    }

}
for(int i=0;i<n;i++)
{
    int cnt=0;
    for(int j=0;j<3;j++)
    {

        if(arr[i][j]==1){cnt+=1;}


    }
    if(cnt>=2)
    {
        prb+=1;
    }

}
cout<<prb;
}
