#include <iostream>
#include <stack>
using namespace std;

int minimumLength(string s) {
    stack<char> st;
    int count = 0;

    for (char c : s) {
        if (!st.empty() && st.top() != c) {
            st.pop();
            count++;
        } else {
            st.push(c);
        }
    }

    return count % 2 == 0 ? 0 : 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minimumLength(s) << endl;
    }

    return 0;
}
