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
bool isBalanced(char c1,char c2)
{
    return (c1=='(' && c2==')') || (c1=='{' && c2=='}') || (c1=='[' && c2==']') ;
}
int main()
{
optimize();
int n;
cin>>n;
while(n--)
{
    string s;
    cin>>s;
    stack<char>st;
    bool done=1;
    for(auto u :  s)
    {
        if(u=='(' || u=='{' || u=='[')
            {
                st.push(u);
            }
            else
            {
                if(st.empty())
                {
                    done=0;
                    break;
                }
                else
                {
                    if(isBalanced(st.top(),u)) st.pop();
                    else
                    {
                        done=0;
                        break;
                    }
                }
            }


    }
    if(!st.empty())
    {
        done=0;
    }
    if(done)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

}
