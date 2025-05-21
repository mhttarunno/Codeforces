/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/318/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int a, b;
    cin >> a >> b;
    int x = (a + 1) / 2;
    if (b <= x) 
        cout << 2 * b - 1 << endl;
    else 
        cout << 2 * (b - x) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}
