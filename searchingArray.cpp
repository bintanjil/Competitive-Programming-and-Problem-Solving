#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x,i;
    cout<<"enter the element to be searched"<<endl;
    cin>>x;
    for( i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            break;
        }
    }
    cout<<x<<"was found in "<<i<<" index"<<endl;
}
