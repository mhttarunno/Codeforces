/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/69/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        sum1 += a;
        sum2 += b;
        sum3 += c;
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}