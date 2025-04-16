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
//#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

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
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};



template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
            cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}


const int pm=1e8+123;
bitset<pm>is_prime;
vector<int>primes;
void primeGen(int n)
{
    for(int i=3;i<=n;i+=2)is_prime[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {

        if(is_prime[i])
        {
            for(int j=i*i; j<=n; j+=i)
            {

            is_prime[j]=0;

            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(is_prime[i]==1)
        {
            primes.push_back(i);
        }
    }

}


vector<int>prime_factors(int n)
{
    vector<int>factors;
    for(auto p: primes)
    {
        if(1LL*p*p>n)break;
        if(n%p==0)
        {
            while(n%p==0)
            {
                factors.push_back(p);
                n/=p;
            }
        }
    }
    if(n>1)
    {
        factors.push_back(n);
    }
    return factors;
}
/// #Into the Iris# ///
const ll NEG_INF = -1e18;
void solve() {
    int arraySize, picks;
    cin >> arraySize >> picks;
    vector<ll> arr(arraySize);

    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }

    // DP for Left Selection
    vector<vector<ll>> dpLeft(arraySize + 1);
    dpLeft[0].resize(1, 0); // Base case: picking 0 elements

    for (int idx = 1; idx <= arraySize; idx++) {
        int maxSelection = min(idx, picks);
        dpLeft[idx].resize(maxSelection + 1, NEG_INF);
        int prevLen = dpLeft[idx - 1].size();

        for (int j = 0; j < prevLen; j++) {
            dpLeft[idx][j] = max(dpLeft[idx][j], dpLeft[idx - 1][j]);
        }
        for (int j = 1; j <= maxSelection; j++) {
            if (j - 1 < (int)dpLeft[idx - 1].size() && dpLeft[idx - 1][j - 1] != NEG_INF) {
                dpLeft[idx][j] = max(dpLeft[idx][j], dpLeft[idx - 1][j - 1] + arr[idx - 1]);
            }
        }
    }

    // DP for Right Selection
    vector<vector<ll>> dpRight(arraySize + 1);
    dpRight[arraySize].resize(1, 0); // Base case: picking 0 elements from the end

    for (int idx = arraySize - 1; idx >= 0; idx--) {
        int maxSelection = min(arraySize - idx, picks);
        dpRight[idx].resize(maxSelection + 1, NEG_INF);
        int nextLen = dpRight[idx + 1].size();

        for (int j = 0; j < nextLen; j++) {
            dpRight[idx][j] = max(dpRight[idx][j], dpRight[idx + 1][j]);
        }
        for (int j = 1; j <= maxSelection; j++) {
            if (j - 1 < (int)dpRight[idx + 1].size() && dpRight[idx + 1][j - 1] != NEG_INF) {
                dpRight[idx][j] = max(dpRight[idx][j], dpRight[idx + 1][j - 1] + arr[idx]);
            }
        }
    }

    // Finding the best possible cost
    ll bestAnswer = 0;

    for (int pivot = 0; pivot < arraySize; pivot++) {
        ll candidate = NEG_INF;

        if (pivot == 0) {
            candidate = arr[0] + dpRight[1][picks]; // Start at index 0
        } else if (pivot == arraySize - 1) {
            candidate = arr[arraySize - 1] + dpLeft[arraySize - 1][picks]; // End at last index
        } else {
            int leftSize = pivot;
            int rightSize = arraySize - pivot - 1;

            for (int leftCount = 1; leftCount <= min(picks - 1, leftSize); leftCount++) {
                int rightCount = picks - leftCount;

                if (rightCount < 1 || rightCount > rightSize) continue;
                if (leftCount < (int)dpLeft[pivot].size() && rightCount < (int)dpRight[pivot + 1].size()) {
                    if (dpLeft[pivot][leftCount] == NEG_INF || dpRight[pivot + 1][rightCount] == NEG_INF) continue;

                    candidate = max(candidate, arr[pivot] + dpLeft[pivot][leftCount] + dpRight[pivot + 1][rightCount]);
                }
            }
        }

        bestAnswer = max(bestAnswer, candidate);
    }

    cout << bestAnswer << "\n";
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
