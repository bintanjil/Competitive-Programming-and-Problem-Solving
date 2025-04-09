
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        int a=st[0]-'0'; int b=st[1]-'0'; int c=st[2]-'0';
        int d=st[3]-'0'; int e=st[4]-'0';int f=st[5]-'0';
        int x=a+b+c;
        int y=d+e+f;
        if(x==y)
        {
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
}
