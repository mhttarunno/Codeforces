/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/476/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n, k;
    cin >> n >> k;
    if(k > n) { 
        cout << -1 << endl;
    }
    else {
        int a = n / 2;
        if(n & 1) {
            a++;
        }
        if(a % k == 0) {
            cout << a << endl;
        }
        else {
            cout << a + (k - a % k) << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}