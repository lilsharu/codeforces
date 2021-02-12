#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define FORN FOR(i, 0, n)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define ROFN ROF(i, 0, n)
#define trav(a, x) for (auto &a : x)

#define pb push_back
#define all(x) begin(x), end(x)

#define read(a) int (a); cin >> (a)
#define read2(a, b) read(a); read(b)

#define endl '\n';

void setIO(string name) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}

int n, k;

int main() {
    cin >> n >> k;

    vi prereq(n + 1);

    int f = n + 1;
    
    FOR(i, 1, n) {
        cin >> prereq[i];
        if (prereq[i] == 0) f = i;
    }

    vector<pii> p(k);

    F0R(i, k) {
        cin >> p[i].first >> p[i].second;
        if (p[i].second == prereq[p[i].first]) {
            cout << 0 << endl;
            return 0;
        }
    }
}