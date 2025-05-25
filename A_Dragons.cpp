/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/230/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int s, k;
    cin >> s >> k;
    vector<pair<int, int>> p(k);
    for(int i = 0; i < k; ++i) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end());
    for(int i = 0; i < k; ++i) {
        if(s > p[i].first) {
            s += p[i].second;
        } 
        else {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
    return 0;
}
