#include <bits/stdc++.h>
using namespace std;
const long long mx=1e7+123;
int arr[mx];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr+ n);

    int f=0;
    for(int i=n-1; i>=0; i--){
        if(arr[i] != arr[n-1]){
            f=1;
        }
    }
    if(f==0) cout << -1 << endl;
    else{
        int lb=0, lc=0;
        for(int i=0; i<n; i++) {
            if(arr[i] != arr[n-1]) lb++;
            else lc++;
        }
        cout << lb << " " << lc << endl;
        for(int i=0; i<n; i++) if(arr[i]!=arr[n-1]) cout << arr[i] << " ";
        cout << endl;
        for(int i=0; i<n; i++) if(arr[i]==arr[n-1]) cout << arr[i] << " ";
        cout << endl;
    }


    }
}
