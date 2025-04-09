// In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define mx_int_prime 999999937

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        if (n <= 4) {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            vi odd;
            vi even;
            for(int i=1;i<=n;i+=2)
            {
                if(n==5)continue;
                odd.PB(i);
            }
            for(int i=2;i<=n;i+=2)
            {
                if(n==4) continue;
                even.PB(i);
            }

            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());

            for(auto u:even)cout<<u<<" ";
            cout<<'4'<<" "<<'5'<<" ";
            for(auto u:odd)cout<<u<<" ";
            cout<<endl;

        }


    }

    return 0;
}
