#include<iostream>
using namespace std;
#include<algorithm>
using namespace std;
int main() {
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        while(n--){
            int side,coin,p;
            cin>>side>>coin>>p;
            int ans = coin/2;
            if(side==p)cout <<"T" <<endl;
            else cout <<" H"<<endl;
        }
    }
    return 0;
}
