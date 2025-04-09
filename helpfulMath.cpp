#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}
int main()
{
optimize();
string input;
	int i, n;
	vector<int>v;

	cin >> input;
	int len = input.length();

	for (i = 0; i < len; i++){
		if (input[i] != '+') {
            n = input[i] - '0';
            v.push_back(n);
		}
	}

	sort(v.begin(), v.end());

	for (i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i <= v.size() - 2 && v.size() > 1)
            cout << "+";
	}


}
