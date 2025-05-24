/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/problemset/problem/1901/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n, x;
    cin >> n >> x;
    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.push_back(x);
    n = v.size();
    int diff = INT_MIN;
    for (int i = 1; i < n; ++i) {
        if (i == n - 1)
            diff = max(diff, 2 * (v[i] - v[i - 1]));
        else
            diff = max(diff, (v[i] - v[i - 1]));
    }
    cout << diff << endl;
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    conquer();
}
