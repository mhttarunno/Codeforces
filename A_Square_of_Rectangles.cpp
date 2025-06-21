/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/2120/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool fun(int a, int b, int c, int d, int e, int f) {
    int x = a * b + c * d + e * f;
    int o = max({a, b, c, d, e, f});
    while (o * o < x)
        ++o;
    if (o * o != x)
        return false;
    if (b == d && d == f && b == o && (a + c + e) == o)
        return true;
    if (a == c && c == e && a == o && (b + d + f) == o)
        return true;
    if (b + max(d, f) == o && a == o && c + e == o && d == f)
        return true;
    if (d + f == o && c == e && a + c == o && b == o)
        return true;
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if (fun(a, b, c, d, e, f))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
