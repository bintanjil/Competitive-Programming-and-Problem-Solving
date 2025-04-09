#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,rem,rev=0;
        cin>>N;
        while(N>0)
        {

            rem=N%10;
            rev=(rev*10)+rem;
            N=N/10;

        }
        cout<<rev<<endl;
    }
}
