#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int sum=0;
        sum+=N%10;
        sum+=N/10000;
        cout<<"Sum ="<<" "<<sum<<endl;
    }
}
