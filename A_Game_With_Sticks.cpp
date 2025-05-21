/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/451/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n, k;
    cin >> n >> k;
    int i = 1, count = 0;
    while(1) {
        if(n - i == 0) break;
        if(k - i == 0) break;
        i++;
        count++;
    }
    if(!(count & 1)) 
        cout << "Akshat" << endl;
    else 
        cout << "Malvika" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}
