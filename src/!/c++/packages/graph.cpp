#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<vi> vvi;

#define MOD (ll)(1e9 + 7)
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define sz(a) ((int) (a).size())

#define rep(_, n) int _; for(_ = 0; _ < n; _++)

#define in(_) cin >> _;
#define in2(_0, _1) cin >> _0 >> _1;
#define in3(_0, _1, _2) cin >> _0 >> _1 >> _2;
#define vin(n) rep (_, n) { in (a[_]) }
#define vvin(r, c) rep(__,r) { rep(_,c) { in (matrix[__][_]) } }
#define br cout << "\n";
#define out(_,__) cout << _ << __;
#define o(_) out(_, " ")
#define vout(__) for (int _ : __) { o (_) } br
#define vvout(___)  for (vi __ : ___) { vout (__); }

#define oyes out("YES","\n")
#define ono out("NO", "\n")

int n;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> dp;
vector<bool> dpd;
void dfs (int node, int parent) {
    visited[node] = true;

    for (auto surr : adj[node]) {
        if (surr == parent || visited[surr]) {
            continue;
        }

        dfs (surr, node);
    }
}
int solve() {
    fastio;
    int n;
    in (n);
    adj = vector<vector<int>> (n);
    visited = vector<bool> (n, false);
    dp = vector<int> (n);
    dpd = vector<bool> (n);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].pb (v);
        adj[v].pb (u);
    }

    return 0;
}

int main() {
    fastio;
    int t = 1;
    in (t);

    while (t--) {
        solve();
    }
}