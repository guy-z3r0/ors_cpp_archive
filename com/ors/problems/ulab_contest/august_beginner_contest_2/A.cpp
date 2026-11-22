// QUESTION LINK:
// Attempts taken:


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

    int n; cin>>n;

    for (int i=0; i<n;i++) {
        int t;cin>>t;
        vi k(t);
        for (int j=0;j<t;j++) {
            cin>> k[j];
        }
        int min = INT16_MAX;
        for (int p = 0; p<t;p++) {
            for (int q=0;q<t;q++) {
                if (p == q) continue;
                if (k[p] - k[q] < min && k[p] - k[q] >= 0) {
                    min = k[p] - k[q];
                }
            }
        }
        cout << min << nl;
    }


    return 0;
}