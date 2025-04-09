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
string s;
cin>>s;
int cnt_u=0;
int cnt_l=0;
for(int i=0;i<s.length();i++)
{
    if(isupper(s[i]))
    {
        cnt_u++;
    }
    else if(islower(s[i]))
    {
        cnt_l++;
    }


}
for(int i=0;i<s.length();i++)
{
    if(cnt_l>=cnt_u)
    {
        s[i]=tolower(s[i]);
    }
    else s[i]=toupper(s[i]);

}
cout<<s<<endl;
}
