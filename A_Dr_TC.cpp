/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/problemset/problem/2106/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0 ; i < n ; ++i) {
        if(s[i] == '1') ans++;
    }
    int sum = 0;
    for(int i = 0 ; i < n ; ++i) {
        if(s[i] == '1') sum += ans - 1;
        else sum += ans + 1;
    }
    cout << sum << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}
