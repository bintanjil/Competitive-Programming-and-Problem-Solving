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
int cnt[30];
void solve()
{
    mem(cnt,0);
    int n;
    cin >> n;

    vi v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int b = 0; b < 30; b++)
        {
            if(v[i] & (1 << b)) cnt[b]++;

        }
    }

    ll max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int b = 0; b < 30; b++)
        {
            if(v[i] & (1 << b))
            {
                sum += (1LL << b) * (n - cnt[b]);
            }
            else
            {
                sum += (1LL << b) * cnt[b];
            }
        }
        if(sum > max_sum)
        {
            max_sum = sum;
        }
    }

        cout<<max_sum<<endl;
}


int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
