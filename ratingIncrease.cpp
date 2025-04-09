#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}

bool isValid(string ab, int& a, int& b) {
    int len = ab.length();

    for (int i = 1; i < len; ++i) {
        string aStr = ab.substr(0, i);
        string bStr = ab.substr(i);

        if (aStr[0] == '0' || bStr[0] == '0') continue;

        a = stoi(aStr);
        b = stoi(bStr);

        if (b > a) {
            return true;
        }
    }

    return false;
}
int main()
{
optimize();
int t;
    cin >> t;

    while (t--) {
        string ab;
        cin >> ab;

        int a, b;
        if (isValid(ab, a, b)) {
            cout << a << " " << b << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

