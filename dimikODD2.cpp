#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    char N[100];
    cin>>T;
    while(T--)
    {
        cin>>N;
        int ln=strlen(N);
        int last_digit=N[ln-1]-0;
        if(last_digit%2==0)
        {
            cout<<"even"<<endl;
        }
        else
            cout<<"odd"<<endl;
    }
}
