/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/problemset/problem/514/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define Implemented ios_base::sync_with_stdio(false);
#define By cin.tie(0);
#define Tarunno cout.tie(NULL);
#define all(a) a.begin(), a.end()
#define allc(a, x) a.begin(), a.end(), x
#define fll(x, a, b) for (int x = a; x < b; ++x)
#define fl(a) for (auto &i : a)
#define endl '\n'
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

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
        if (n < 5 or n == 0) {
            continue;
        } else {
            s[i] = ((9 - n) + '0');
        }
    }
    cout << s << endl;
}

int32_t main() {

    Implemented By Tarunno

    conquer();
}
