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

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<LL> arr(n);
        for (int j=0; j<n;j++) {
            cin >> arr[j];
        }

        sort(all(arr));
        int f=0;
        LL sum = 0;
        for (int k = 0; k < n; k++) {
            if (sum + arr[k] <= 2 * arr[k]) {
                sum += arr[k];
                f++;
            }
        }
        cout << "Case #" << i+1 << ": " << f << nl;
    }


    return 0;
}