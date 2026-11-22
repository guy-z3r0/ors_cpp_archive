// QUESTION LINK: https://projecteuler.net/problem=2
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

LL getNextFibo(int f1, int f2) {
    return f1+f2;
}

int main() {
    FastRead;

    LL range = 4000000; // 4 million
    LL f1 = 55;
    LL f2 = 89;
    LL s = 44;

    while (getNextFibo(f1,f2) < range) {
        cout << getNextFibo(f1,f2) << " ";
        if (getNextFibo(f1,f2) % 2 == 0) {
            s+= getNextFibo(f1,f2);
        }
        LL temp = f1;
        f1 = f2;
        f2 =  getNextFibo(temp, f1);

    }
    cout << nl;

    cout << s << nl;

    return 0;
}