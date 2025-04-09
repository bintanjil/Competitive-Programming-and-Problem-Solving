#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n; cin >> n;
    int target; cin >> target;
    /*unordered_*/map<int,int> nums;
    for(int i = 0; i < n; ++i){
        int a; cin >> a;
        if(nums.count(target - a)){
            cout << nums[target - a] + 1 << ' ' << i + 1 << endl;
            return 0;
        }
        nums[a] = i;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

