#include <bits/stdc++.h>
using namespace std;

using LL = long long;
using ULL = unsigned long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;

const LL INF = 2e18;

#define nl "\n"
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define eps 1e-9
#define inf 0x3f3f3f3f
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define Unique(a) sort(all(a)),a.erase(unique(all(a)),a.end())
#define Lower(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define Upper(a) transform(a.begin(), a.end(), a.begin(), ::toupper)

int main() {
    FastRead;

    vector<string> v(5);

    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    string s = "ABCDE";
    bool found = false;

    do {
        bool ok = true;

        for (int i = 0; i < 5; i++) {
            int a = s.find(v[i][0]);
            int b = s.find(v[i][2]);

            if (v[i][1] == '<' && a > b) {
                ok = false;
                break;
            }

            if (v[i][1] == '>' && a < b) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << s << nl;
            found = true;
            break;
        }

    } while (next_permutation(all(s)));

    if (!found) {
        cout << "impossible" << nl;
    }

    return 0;
}