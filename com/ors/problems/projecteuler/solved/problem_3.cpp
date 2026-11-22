// QUESTION LINK: https://projecteuler.net/problem=3
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

bool isPrime(LL num) {
    for (int i = 2; i < 100; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

LL largestPrime(LL num) {
    LL largest = 2;
    for (LL i = 2; i < num/2; i++) {
        cout << "itering i: " << i << "\n";
        if (num % i != 0) {
            continue;
        }
        if (isPrime(i) && largest < i) {
            cout << "Is prime: " << i << nl;
            largest = i;
        }
    }

    return largest;
}

int main() {
    FastRead;
    // 600851475143
    LL n;
    cin >> n;

    cout << largestPrime(n) << nl;

    return 0;
}