/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem:
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
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    fll(i, 0, n) {
        if(s[i] == '1') ans++;
    }
    int sum = 0;
    fll(i, 0, n) {
        if(s[i] == '1') sum += ans - 1;
        else sum += ans + 1;
    }
    cout << sum << endl;
}

int32_t main() {

    Implemented By Tarunno

    int tc = 1, Case = 1;
    cin >> tc;
    while (tc--)
    conquer();
}