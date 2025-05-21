/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/1374/problem/B
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n;
    cin >> n;
    int cnt2 = 0, cnt3 = 0;
    while(n % 2 == 0) {
        n /= 2;
        cnt2++;
    }
    while(n % 3 == 0) {
        n /= 3;
        cnt3++;
    }
    if(n != 1 || cnt2 > cnt3) {
        cout << -1 << endl;
    }
    else {
        cout << cnt3 + (cnt3 - cnt2) << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1, Case = 1;
    cin >> t;
    while(t--)
    conquer();
}
