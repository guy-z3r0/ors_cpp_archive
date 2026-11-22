#include <bits/stdc++.h>
using namespace std;

using LL = long long;
using ULL = unsigned long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;

const LL INF = 2e18;

#define nl "\n"
#define FastRead ios_base::sync_with_stdio(0); cin.tie(0);

int main() {
    FastRead;

    vector<int> steps = {INT16_MAX, INT16_MAX, INT16_MAX};
    vector<string> result = {"You shall pass!!!", "You shall pass!!!", "You shall pass!!!"};
    for (int i = 0; i < 3; i++) {
        string s;
        cin >>s;
        int c = s.find('=');
        if (c == -1) continue;

        int h = s.rfind('H');
        int t = s.rfind('T');
        int p = s.rfind('P');

        int first =s.size();
        char obs ='.';
        //cout << "R--- " << i << nl;

        //cout << "h= " << h+1 <<  " | t= " << t+1 << " | p= " << p+1 << nl;
        if (h>c && h<first) {
            //cout << "PASS1" << nl;
            first =h;
            obs ='H';
            steps[i] = h-c;
        }
        if (t>c && t<first) {
           // cout << "PASS2" << nl;
            first= t;
            obs= 'T';
            steps[i] = t-c;
        }
        if (p >c && p <first) {
           // cout << "PASS3" << nl;
            first = p;
            obs = 'P';
            steps[i] = p-c;
        }
        if (obs !='.') {
            result[i] = obs;
        }
    }

    int val = INT16_MAX;
    int idx = 0;
    for (int i = 0; i<3;i++) {
        //cout<<steps[i] << nl;
        if (steps[i] < val) {
            val = steps[i];
            idx = i;
        }
    }
    //cout << idx << nl;
    cout << result[idx] << nl;


    return 0;
}