//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
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
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}
bool isPalindrome(string s){ll i=0,j=s.size()-1;for(i,j;i<=j;i++,j--){if(s[i]!=s[j]) return 0;}return 1;}
bool isPowerofTwo(ll n){return (n && !(n&(n-1)));}
bool cmp(const pair<string, pair<int, int>>& a, const pair<string, pair<int, int>>& b) {
    if(a.second.first>b.second.first) return 1;
    else if (a.second.first==b.second.first) {return (a.second.second<b.second.second);}
    return 0;
}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};

const int lim = 200000;
vector<bool> isPrime(lim, true);

void sieveOfEratosthenes() {
    fill(isPrime.begin(), isPrime.end(), true);
    if (lim > 1)
        isPrime[1] = false;

    for (int i = 2; i * i < lim; i++) {
        if (!isPrime[i])
            continue;
        for (int j = i * i; j < lim; j += i) {
            isPrime[j] = false;
        }
    }
}

void solve() {
    int num;
    cin >> num;

    int primePos = 1;
    for (int i = 1; i <= (2 * num) / 3; i++) {
        if (isPrime[i]) {
            primePos = i;
        }
    }

    vi v;
    v.push_back(primePos);
    int left = primePos - 1;
    int right = primePos + 1;

    while (true) {
        if (right > num)
            break;
        v.push_back(right++);
        if (left < 1)
            break;
        v.push_back(left--);
    }

    for (int i = 1; i <= left; i++)
        v.push_back(i);
    for (int i = right; i <= num; i++)
        v.push_back(i);

    for (auto u : v)
        cout << u << " ";
    cout << endl;
}

int main() {
    optimize();
    sieveOfEratosthenes();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
