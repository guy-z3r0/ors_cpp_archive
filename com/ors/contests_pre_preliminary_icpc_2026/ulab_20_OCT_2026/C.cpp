#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "

int main(){
    ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
    int D;
    cin >> D;
    for (int i=1; i<=D; i++) {
        int N; long long S;
        cin>>N>>S;

        long long maxi = LONG_MIN;
        for (int j=0; j<N; j++) {
            long long f, t;
            cin>>f>>t;
            long long save;

            if (t <=S) {
                save= f;
            } else {
                save= f-(t-S);
            }
            maxi = max(maxi, save);
        }
        cout << "Case #"<< i <<": "<< maxi << '\n';
        // Hi
    }
    return 0;
}