#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=99;
    int *p;
    p=&x;
    *p=77;
    int a[5];

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    //cout<<a<<endl;
    cout<<p+1<<endl;
    int **pp=&p;

    cout<<&p<<endl;
    cout<<pp<<endl;
    cout<<&p<<endl;
    cout<<**pp<<endl;

    **pp=22;
    cout<<x<<endl;
}
