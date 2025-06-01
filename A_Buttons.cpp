/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/1858/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b == c) {
        cout << "First" << endl;
    }
    else if(a > b) {
        cout << "First" << endl;
    }
    else if(b > a) {
        cout << "Second" << endl;
    }
    else { 
        if(!(c & 1)) {
            cout << "First" << endl;
        }
        else {
            cout << "Second" << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    conquer();
}