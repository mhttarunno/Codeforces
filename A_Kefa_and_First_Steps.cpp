/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/580/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n, ans = 1;
    cin >> n;
    vector<int> v;
    int flag = 1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        int y;
        if (i > 0 && v[i] >= v[i - 1]) {
            flag++;
        } 
        else flag = 1;
        ans = max(flag, ans);
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        conquer();
}