/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/500/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int pos = 1, nxt;
    while(pos < k) {
        nxt = pos + v[pos - 1];
        pos = nxt;
    }
    if(pos == k) {
        cout << "YES" << endl; 
    }
    else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}