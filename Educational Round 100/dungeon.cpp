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

const string y = "YES";
const string n = "NO";

int a, b, c, t;

int main() {
    cin >> t;
    F0R(i, t) {
        cin >> a >> b >> c;
        if ((a + b + c) % 9 != 0) {
            cout << n << endl;
            continue;
        }

        int rounds = (a + b + c) / 9;
        if (a < rounds || b < rounds || c < rounds) {
            cout << n << endl;
            continue;
        }

        cout << y << endl;
    }

}