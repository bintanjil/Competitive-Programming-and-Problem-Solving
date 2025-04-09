#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        char a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];

        }
        if( (a[0]=='a' && a[1]=='b'&& a[2]=='c') || (a[0]=='a' && a[1]=='c'&& a[2]=='b') || (a[0]=='c' && a[1]=='b'&& a[2]=='a') || (a[0]=='b' && a[1]=='a'&& a[2]=='c')  )
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;

            }
    }
}




