#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}


void findRookMoves(char column, int row) {
    for (char c = 'a'; c <= 'h'; ++c) {
        if (c != column) {
            cout << c << row << endl;
        }
    }
    for (int r = 1; r <= 8; ++r) {
        if (r != row) {
            cout << column << r << endl;
        }
    }
}


int main()
{
optimize();
int t;
    cin >> t;

    while (t--) {
        string position;
        cin >> position;

        char column = position[0];
        int row = position[1] - '0';

        findRookMoves(column, row);
    }

    return 0;

}
