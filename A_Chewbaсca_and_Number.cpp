/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/problemset/problem/514/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    string s;
    cin >> s;
    int x = s[0] - '0';
    if (x == 9) {
        s[0] = '9';
    } else {
        if (x > 4) {
            s[0] = ((9 - x) + '0');
        }
    }
    for (int i = 1; i < s.size(); i++) {
        int n = s[i] - '0';
        if (n < 5 || n == 0) {
            continue;
        } else {
            s[i] = ((9 - n) + '0');
        }
    }
    cout << s << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}
