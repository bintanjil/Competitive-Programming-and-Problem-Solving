#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAXN = 100005; // maximum number of nodes
int dp[MAXN]; // dynamic programming array
vector<int> adj[MAXN]; // adjacency list

void bfs(int s) {
    queue<int> q;
    q.push(s);
    dp[s] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dp[v] == -1) { // if the node has not been visited
                dp[v] = dp[u] + 1; // update the dynamic programming array
                q.push(v); // add the node to the queue
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    (dp, -1, sizeof(dp)); // initialize the dynamic programming array with -1
    bfs(1); // start BFS from node 1
    for (int i = 1; i <= n; i++) {
        cout << "dp[" << i << "] = " << dp[i] << endl; // print the dynamic programming array
    }
    return 0;
}
