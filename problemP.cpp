#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,n;
    cin>>n;
    int z=sqrt(n);
    for(int i=a;i<=z;i++)
    {
        cin>>b;

        for(int i=2;i<=b;i++)
        {
            if((i % i!=0))
            {
                cout<<i;
            }
        }
    }
}
