#include <iostream>
using namespace std;
int divisableCounter(int x,int y,int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if ((i%x==0) && (i%y!=0))

            count++;


    }
    return count;
}
int main()
{
  int   x=35,y=5,n=12;
    cout<<divisableCounter(x,y,n);
    return 0;
}
