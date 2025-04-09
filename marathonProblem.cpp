#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>b && a>c && a>d)
        {
            cout<<0<<endl;
        }
        else if(a>b && a>c && a<d)
        {
           cout<<1<<endl;
        }
        else if(a>b && a<c && a>d)
        {
           cout<<1<<endl;
        }
        else if(a<b && a>c && a>d)
        {
           cout<<1<<endl;
        }
        else if(a>b && a<c && a<d)
        {
           cout<<2<<endl;
        }
        else if(a<b && a>c && a<d)
        {
           cout<<2<<endl;
        }
        else if(a<b && a<c && a>d)
        {
           cout<<2<<endl;
        }
        else{cout<<3<<endl;}
    }
}

