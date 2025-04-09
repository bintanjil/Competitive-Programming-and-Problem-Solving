#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
optimize();

vector <int> v (3);
for(auto u: v)
{
    int a;
    cin>>a;
    v.push_back(a);
}
for(auto u :v)
{
    cout<<u;
}

}
