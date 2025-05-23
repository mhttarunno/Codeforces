/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int x = (a * b) - (c * d);
    cout << "Difference = " << x << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}