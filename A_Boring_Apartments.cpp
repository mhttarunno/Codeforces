/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/1433/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    string s;
    cin >> s;
    int l = s[0] - '0';
    cout << 10 * l + s.size() * (s.size() + 1) / 2 - 10 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1, Case = 1;
    cin >> t;
    while (t--)
    conquer();
}